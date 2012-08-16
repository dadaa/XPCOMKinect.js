/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <stdio.h>
#include "Kinect.h"
#include "nsMemory.h"
#include "libfreenect_sync.h"
#include "jsapi.h"

/* Implementation file */
NS_IMPL_ISUPPORTS1(Kinect, IKinect)

Kinect::Kinect()
{
//    printf("constructor\n");
    /* member initializers and constructor code */
    this->depth_buffer = (PRInt32*) nsMemory::Alloc(DEPTH_LENGTH*sizeof(PRInt32));
    this->video_buffer = (PRInt32*) nsMemory::Alloc(VIDEO_LENGTH*sizeof(PRInt32));
}

Kinect::~Kinect()
{
//    printf("destructor\n");
    /* destructor code */
    
    nsMemory::Free(this->depth_buffer);
    nsMemory::Free(this->video_buffer);
}

/* [implicit_jscontext] void getDepthJSVAL (in jsval val); */
NS_IMETHODIMP Kinect::GetDepthJSVAL(const JS::Value & val, JSContext* cx)
{
    JSObject* array = JSVAL_TO_OBJECT(val);
    short *depth = 0;
    uint32_t ts;
    if (freenect_sync_get_depth((void**)&depth, &ts, 0, FREENECT_DEPTH_11BIT) >= 0) {
        for (int i = 0; i < DEPTH_LENGTH; i++) {
            jsval intval = INT_TO_JSVAL(depth[i]);
            JS_SetElement(cx, array, i, &intval);
        }
    } else {
    }
    return NS_OK;
}

/* [implicit_jscontext] void getVideoJSVAL (in jsval val); */
NS_IMETHODIMP Kinect::GetVideoJSVAL(const JS::Value & val, JSContext* cx)
{
    JSObject* array = JSVAL_TO_OBJECT(val);
    char *video = 0;
    uint32_t ts;
    if (freenect_sync_get_video((void**)&video, &ts, 0, FREENECT_VIDEO_RGB) >= 0) {
        for (int i = 0; i < DEPTH_LENGTH; i++) {
            int index = i*3;
            char r = video[index];
            char g = video[index+1];
            char b = video[index+2];
            int color = r<<16 | g<<8 | b;
            jsval intval = INT_TO_JSVAL(color);
            JS_SetElement(cx, array, i, &intval);
        }
    } else {
    }
    return NS_OK;
}

/* void captureDepth (); */
NS_IMETHODIMP Kinect::CaptureDepth()
{
//    printf("CaptureDepth\n");
    short *depth = 0;
    uint32_t ts;
    if (freenect_sync_get_depth((void**)&depth, &ts, 0, FREENECT_DEPTH_11BIT) >= 0) {
        for (int i = 0; i < DEPTH_LENGTH; i++) {
            this->depth_buffer[i] = depth[i];
        }
    }
    return NS_OK;
}

/* void getDepthByIndex (in unsigned long index, [retval] out short pixel); */
NS_IMETHODIMP Kinect::GetDepthByIndex(PRUint32 index, PRInt16 *pixel NS_OUTPARAM)
{
    (*pixel) = this->depth_buffer[index];
    return NS_OK;
}

/* void getDepth (out unsigned long bufferSize, [array, size_is (bufferSize), retval] out short buffer); */
NS_IMETHODIMP Kinect::GetDepth(PRUint32 *bufferSize NS_OUTPARAM, PRInt16 **buffer NS_OUTPARAM)
{
//    printf("GetDepth\n");
    short *depth = 0;
    uint32_t ts;
    if (freenect_sync_get_depth((void**)&depth, &ts, 0, FREENECT_DEPTH_11BIT) >= 0) {
        *buffer = (PRInt16*) nsMemory::Clone(depth, DEPTH_LENGTH);
        *bufferSize = DEPTH_LENGTH;
    } else {
        *bufferSize = 0;
    }
    return NS_OK;
}

/* void getVideo (out unsigned long bufferSize, [array, size_is (bufferSize), retval] out PRInt32 buffer); */
NS_IMETHODIMP Kinect::GetVideo(PRUint32 *bufferSize NS_OUTPARAM, PRInt32 **buffer NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

