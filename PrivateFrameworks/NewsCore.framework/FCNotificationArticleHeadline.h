/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationArticleHeadline : FCHeadline {
    NSString * _accessoryText;
    NSArray * _allowedStorefrontIDs;
    NSString * _articleID;
    NSDictionary * _articlePayload;
    FCAssetManager * _assetManager;
    unsigned int  _backendArticleVersion;
    NSArray * _blockedStorefrontIDs;
    NSString * _changeEtag;
    NSString * _clusterID;
    unsigned int  _contentType;
    NSURL * _contentURL;
    FCCoverArt * _coverArt;
    BOOL  _deleted;
    NSArray * _endOfArticleTopicIDs;
    BOOL  _featureCandidate;
    NSString * _flintDocumentUrlString;
    NSArray * _flintFontResourceIDs;
    BOOL  _hasThumbnail;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSArray * _iAdSectionIDs;
    NSString * _identifier;
    BOOL  _isDraft;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestThumbnailSize;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    int  _minimumNewsVersion;
    NSArray * _moreFromPublisherArticleIDs;
    BOOL  _needsRapidUpdates;
    BOOL  _paid;
    NSString * _primaryAudience;
    NSDate * _publishDate;
    unsigned int  _publisherArticleVersion;
    NSString * _referencedArticleID;
    NSArray * _relatedArticleIDs;
    NSString * _shortExcerpt;
    NSObject<FCChannelProviding> * _sourceChannel;
    NSString * _sourceName;
    BOOL  _sponsored;
    FCTopStoriesStyleConfiguration * _storyStyle;
    unsigned int  _storyType;
    NSString * _subtitle;
    FCHeadlineThumbnail * _thumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    FCHeadlineThumbnail * _thumbnailHQ;
    FCHeadlineThumbnail * _thumbnailLQ;
    FCHeadlineThumbnail * _thumbnailMedium;
    FCHeadlineThumbnail * _thumbnailUltraHQ;
    NSString * _title;
    NSArray * _topicFlags;
    NSArray * _topicIDs;
    NSString * _versionIdentifier;
    double  _videoDuration;
    NSURL * _videoURL;
}

@property (nonatomic, retain) NSDictionary *articlePayload;
@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) NSString *changeEtag;
@property (nonatomic, retain) NSString *flintDocumentUrlString;
@property (nonatomic, retain) NSArray *flintFontResourceIDs;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)articleID;
- (id)articlePayload;
- (id)assetManager;
- (unsigned int)backendArticleVersion;
- (id)blockedStorefrontIDs;
- (id)changeEtag;
- (id)clusterID;
- (id)contentManifestWithContext:(id)arg1;
- (unsigned int)contentType;
- (id)contentURL;
- (id)coverArt;
- (id)endOfArticleTopicIDs;
- (id)flintDocumentUrlString;
- (id)flintFontResourceIDs;
- (id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (BOOL)hasThumbnail;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 rapidUpdatesTimeout:(int)arg4;
- (BOOL)isDeleted;
- (BOOL)isDraft;
- (BOOL)isFeatureCandidate;
- (BOOL)isPaid;
- (BOOL)isSponsored;
- (BOOL)isValid;
- (struct CGSize { double x1; double x2; })largestThumbnailSize;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (int)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (BOOL)needsRapidUpdates;
- (id)primaryAudience;
- (id)publishDate;
- (unsigned int)publisherArticleVersion;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (void)setArticleID:(id)arg1;
- (void)setArticlePayload:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setChangeEtag:(id)arg1;
- (void)setContentType:(unsigned int)arg1;
- (void)setDeleted:(BOOL)arg1;
- (void)setFlintDocumentUrlString:(id)arg1;
- (void)setFlintFontResourceIDs:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicIDs:(id)arg1;
- (id)shortExcerpt;
- (id)sourceChannel;
- (id)sourceName;
- (id)storyStyle;
- (unsigned int)storyType;
- (id)subtitle;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)title;
- (id)topicFlags;
- (id)topicIDs;
- (id)versionIdentifier;
- (float)videoDuration;
- (id)videoURL;

@end