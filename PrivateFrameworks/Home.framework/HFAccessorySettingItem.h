/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingItem : HFItem <HFAccessorySettingItemProtocol> {
    HFAccessorySettingsEntity * _entity;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HMAccessorySetting * _setting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, retain) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) HMAccessorySetting *setting;
@property (nonatomic, readonly) NSString *settingKeyPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (void)_decorateOutcomeWithResultKeys:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)_validateKeyPathDependencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)homeKitObject;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2;
- (id)mediaProfileContainer;
- (void)setEntity:(id)arg1;
- (void)setMediaProfileContainer:(id)arg1;
- (void)setSetting:(id)arg1;
- (id)setting;
- (id)settingKeyPath;
- (id)updateValue:(id)arg1;
- (id)value;

@end