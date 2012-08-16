/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM IKinect.idl
 */

#ifndef __gen_IKinect_h__
#define __gen_IKinect_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IKinect */
#define IKINECT_IID_STR "dbfa43da-0247-4e2e-b4ee-26da71ff31c8"

#define IKINECT_IID \
  {0xdbfa43da, 0x0247, 0x4e2e, \
    { 0xb4, 0xee, 0x26, 0xda, 0x71, 0xff, 0x31, 0xc8 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinect : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINECT_IID)

  /* [implicit_jscontext] void getDepthJSVAL (in jsval val); */
  NS_SCRIPTABLE NS_IMETHOD GetDepthJSVAL(const JS::Value & val, JSContext* cx) = 0;

  /* [implicit_jscontext] void getVideoJSVAL (in jsval val); */
  NS_SCRIPTABLE NS_IMETHOD GetVideoJSVAL(const JS::Value & val, JSContext* cx) = 0;

  /* void getDepth (out unsigned long bufferSize, [array, size_is (bufferSize), retval] out short buffer); */
  NS_SCRIPTABLE NS_IMETHOD GetDepth(PRUint32 *bufferSize NS_OUTPARAM, PRInt16 **buffer NS_OUTPARAM) = 0;

  /* void getVideo (out unsigned long bufferSize, [array, size_is (bufferSize), retval] out long buffer); */
  NS_SCRIPTABLE NS_IMETHOD GetVideo(PRUint32 *bufferSize NS_OUTPARAM, PRInt32 **buffer NS_OUTPARAM) = 0;

  /* void captureDepth (); */
  NS_SCRIPTABLE NS_IMETHOD CaptureDepth(void) = 0;

  /* void getDepthByIndex (in unsigned long index, [retval] out short pixel); */
  NS_SCRIPTABLE NS_IMETHOD GetDepthByIndex(PRUint32 index, PRInt16 *pixel NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinect, IKINECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINECT \
  NS_SCRIPTABLE NS_IMETHOD GetDepthJSVAL(const JS::Value & val, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD GetVideoJSVAL(const JS::Value & val, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD GetDepth(PRUint32 *bufferSize NS_OUTPARAM, PRInt16 **buffer NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVideo(PRUint32 *bufferSize NS_OUTPARAM, PRInt32 **buffer NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CaptureDepth(void); \
  NS_SCRIPTABLE NS_IMETHOD GetDepthByIndex(PRUint32 index, PRInt16 *pixel NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDepthJSVAL(const JS::Value & val, JSContext* cx) { return _to GetDepthJSVAL(val, cx); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideoJSVAL(const JS::Value & val, JSContext* cx) { return _to GetVideoJSVAL(val, cx); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepth(PRUint32 *bufferSize NS_OUTPARAM, PRInt16 **buffer NS_OUTPARAM) { return _to GetDepth(bufferSize, buffer); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideo(PRUint32 *bufferSize NS_OUTPARAM, PRInt32 **buffer NS_OUTPARAM) { return _to GetVideo(bufferSize, buffer); } \
  NS_SCRIPTABLE NS_IMETHOD CaptureDepth(void) { return _to CaptureDepth(); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepthByIndex(PRUint32 index, PRInt16 *pixel NS_OUTPARAM) { return _to GetDepthByIndex(index, pixel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINECT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDepthJSVAL(const JS::Value & val, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDepthJSVAL(val, cx); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideoJSVAL(const JS::Value & val, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVideoJSVAL(val, cx); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepth(PRUint32 *bufferSize NS_OUTPARAM, PRInt16 **buffer NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDepth(bufferSize, buffer); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideo(PRUint32 *bufferSize NS_OUTPARAM, PRInt32 **buffer NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVideo(bufferSize, buffer); } \
  NS_SCRIPTABLE NS_IMETHOD CaptureDepth(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CaptureDepth(); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepthByIndex(PRUint32 index, PRInt16 *pixel NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDepthByIndex(index, pixel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinect
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINECT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinect)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [implicit_jscontext] void getDepthJSVAL (in jsval val); */
NS_IMETHODIMP _MYCLASS_::GetDepthJSVAL(const JS::Value & val, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void getVideoJSVAL (in jsval val); */
NS_IMETHODIMP _MYCLASS_::GetVideoJSVAL(const JS::Value & val, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDepth (out unsigned long bufferSize, [array, size_is (bufferSize), retval] out short buffer); */
NS_IMETHODIMP _MYCLASS_::GetDepth(PRUint32 *bufferSize NS_OUTPARAM, PRInt16 **buffer NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getVideo (out unsigned long bufferSize, [array, size_is (bufferSize), retval] out long buffer); */
NS_IMETHODIMP _MYCLASS_::GetVideo(PRUint32 *bufferSize NS_OUTPARAM, PRInt32 **buffer NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void captureDepth (); */
NS_IMETHODIMP _MYCLASS_::CaptureDepth()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDepthByIndex (in unsigned long index, [retval] out short pixel); */
NS_IMETHODIMP _MYCLASS_::GetDepthByIndex(PRUint32 index, PRInt16 *pixel NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_IKinect_h__ */
