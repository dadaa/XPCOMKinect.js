#include "IKinect.h"

#define KINECT_CONTRACTID "@mozilla-japan.org/Kinect;1"
#define KINECT_CID \
{0xdbfa43da, 0x0247, 0x4e2e, \
{ 0xb4, 0xee, 0x26, 0xda, 0x71, 0xff, 0x31, 0xc8 }}

#define DEPTH_WIDTH 640
#define DEPTH_HEIGHT 480
#define DEPTH_LENGTH 307200
#define VIDEO_WIDTH 640
#define VIDEO_HEIGHT 480
#define VIDEO_LENGTH 307200


/* Header file */
class Kinect : public IKinect
{
public:
    NS_DECL_ISUPPORTS
    NS_DECL_IKINECT
    
    Kinect();
    
private:
    PRInt32* depth_buffer;
    PRInt32* video_buffer;
    ~Kinect();
    
protected:
    /* additional members */
};
