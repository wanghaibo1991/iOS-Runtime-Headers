/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver> {
    BOOL  _isWristDetectDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isWristDetectDisabled;
@property (readonly) Class superclass;

- (BOOL)_isWristDetectionDisabled;
- (void)_updateWristDetectSetting;
- (BOOL)_wristDetectionDisabledPreference;
- (BOOL)_wristDetectionEnabledRestriction;
- (void)dealloc;
- (id)init;
- (BOOL)isWristDetectDisabled;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;

@end