/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleHomeDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    <PXPeopleHomeDataSourceDelegate> * _delegate;
    PXPeoplePersonDataSource * _favoriteDataSource;
    PXPeoplePersonDataSource * _hiddenDataSource;
    PXPeoplePersonDataSource * _othersDataSource;
    id  _pauseToken;
    NSObject<OS_dispatch_queue> * _reloadQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleHomeDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXPeoplePersonDataSource *favoriteDataSource;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PXPeoplePersonDataSource *hiddenDataSource;
@property (nonatomic, retain) PXPeoplePersonDataSource *othersDataSource;
@property (nonatomic, retain) id pauseToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceForIndexPath:(id)arg1;
- (id)_dataSourceForSection:(unsigned int)arg1;
- (void)_loadObjectsAndUpdateMembersWithCompletion:(id /* block */)arg1;
- (id)changeDetailsForLibraryChange:(id)arg1 inSection:(unsigned int)arg2;
- (void)changeMembersAtIndexes:(id)arg1 toPersonType:(int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)favoriteDataSource;
- (id)hiddenDataSource;
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3;
- (id)indexPathOfMember:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isSectionDisclosed:(unsigned int)arg1;
- (void)loadAndStartListeningToLibraryNotifications;
- (id)localizedDisclosedTitleForSection:(unsigned int)arg1;
- (id)localizedTitleForSection:(unsigned int)arg1;
- (id)memberAtIndexPath:(id)arg1;
- (id)membersInSection:(unsigned int)arg1;
- (void)moveMemberAtIndex:(id)arg1 toIndex:(id)arg2;
- (unsigned int)numberOfMembersInSection:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (id)othersDataSource;
- (void)pauseListeningForChangesWithTimeout:(double)arg1;
- (id)pauseToken;
- (int)personTypeForSection:(unsigned int)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (unsigned int)photoQuantityAtIndexPath:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)reloadQueue;
- (void)resumeListeningForChanges;
- (void)setDelegate:(id)arg1;
- (void)setFavoriteDataSource:(id)arg1;
- (void)setHiddenDataSource:(id)arg1;
- (void)setOthersDataSource:(id)arg1;
- (void)setPauseToken:(id)arg1;
- (void)setReloadQueue:(id)arg1;
- (void)setSection:(unsigned int)arg1 disclosed:(BOOL)arg2;
- (void)stopListeningToLibraryNotifications;
- (id)titleAtIndexPath:(id)arg1;

@end