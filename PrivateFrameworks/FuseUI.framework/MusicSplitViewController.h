/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSplitViewController : UIViewController <SKUIProxyScrollViewDelegate> {
    UIViewController *_detailViewController;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _detailViewControllerContentInsetAdditions;
    UIView *_gutterView;
    BOOL _isHorizontallyCompact;
    UIViewController *_preservedDetailViewController;
    UIViewController *_primaryViewController;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _primaryViewControllerContentInsetAdditions;
    SKUIProxyScrollView *_proxyScrollView;
    float _staticPrimaryColumnWidth;
}

@property (nonatomic, readonly) UIViewController *_detailViewController;
@property (nonatomic, readonly) BOOL _supportsDetailViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIViewController *primaryViewController;
@property (nonatomic) float staticPrimaryColumnWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContentInsetsForChildViewControllers;
- (id)_detailViewController;
- (id)_detailViewControllerOverrideTraitCollection;
- (void)_didChangeDetailViewController;
- (void)_didChangePrimaryViewController;
- (void)_handleDetailViewController:(id)arg1;
- (float)_preferredPrimaryWColumnWidthWhenWithDetailForWidth:(float)arg1;
- (id)_primaryViewControllerOverrideTraitCollection;
- (void)_requestInitialStateDetailViewController;
- (void)_setDetailViewController:(id)arg1 shouldChangeParents:(BOOL)arg2;
- (BOOL)_supportsDetailViewController;
- (void)_updateHorizontallyCompactState;
- (void)_willChangeDetailViewController:(id)arg1;
- (void)_willChangePrimaryViewController:(id)arg1;
- (void)clearDetailViewController;
- (id)contentScrollView;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)primaryViewController;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)setPrimaryViewController:(id)arg1;
- (void)setStaticPrimaryColumnWidth:(float)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (float)staticPrimaryColumnWidth;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end