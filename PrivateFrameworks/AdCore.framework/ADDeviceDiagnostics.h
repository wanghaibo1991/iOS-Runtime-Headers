/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADDeviceDiagnostics : ADSingleton {
    bool  _ACPowerStatus;
    double  _currentACPowerStatusTime;
    int  _currentConnectionStatus;
    double  _currentLockedStatusTime;
    double  _currentNetworkStateChangeTime;
    double  _currentScreenStatusTime;
    bool  _lockedStatus;
    NSObject<OS_dispatch_queue> * _notifyDispatchQueue;
    int  _notifyTokenACPower;
    int  _notifyTokenLocked;
    int  _notifyTokenScreen;
    double  _previousACPowerStatusTime;
    int  _previousConnectionStatus;
    double  _previousLockedStatusTime;
    double  _previousNetworkStateChangeTime;
    double  _previousScreenStatusTime;
    bool  _screenStatus;
    bool  _verbose;
}

@property (nonatomic, readonly) NSString *statusString;
@property (nonatomic) bool verbose;

+ (int)getDeviceBootTime;
+ (int)getProcessStartTime;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)lockStateChanged;
- (void)networkStateChanged;
- (void)powerStateChanged;
- (void)screenStateChanged;
- (void)setVerbose:(bool)arg1;
- (id)statusString;
- (bool)verbose;

@end