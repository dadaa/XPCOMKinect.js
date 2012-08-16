var KinectJS = {
    initialize : function(){
        let kinect = Components.classes['@mozilla-japan.org/Kinect;1'].createInstance().QueryInterface(Components.interfaces.IKinect);
        let kinectWrapper = {
            getDepth: function(buffer) {
                kinect.getDepthJSVAL(buffer);
//                return kinect.getDepth({});
            },
            getVideo: function(buffer) {
                kinect.getVideoJSVAL(buffer);
//                return kinect.getVideo({});
            }
        };
        let observerService = Cc["@mozilla.org/observer-service;1"].getService(Ci.nsIObserverService);
        observerService.addObserver({
            observe: function (subject, topic, data) {
                let dom = subject;
                let window = dom.defaultView;
                if (!window) {
                    return;
                }
                dom.wrappedJSObject.kinect = kinectWrapper;
            }
        }, 'document-element-inserted', false);
    }
};
KinectJS.initialize();