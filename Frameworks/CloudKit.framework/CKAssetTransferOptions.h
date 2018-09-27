/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _shouldFetchAssetContent;
    NSNumber * _shouldFetchAssetContentInMemory;
    NSNumber * _sparseAware;
}

@property (nonatomic, copy) NSNumber *shouldFetchAssetContent;
@property (nonatomic, copy) NSNumber *shouldFetchAssetContentInMemory;
@property (nonatomic, copy) NSNumber *sparseAware;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldFetchAssetContent:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(id)arg1;
- (void)setSparseAware:(id)arg1;
- (id)shouldFetchAssetContent;
- (id)shouldFetchAssetContentInMemory;
- (id)sparseAware;

@end