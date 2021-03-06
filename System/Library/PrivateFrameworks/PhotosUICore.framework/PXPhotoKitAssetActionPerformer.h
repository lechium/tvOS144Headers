/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetActionPerformer.h>

@class NSArray, NSDictionary, PXPhotoKitAssetsDataSourceManager, PHPerson, PXSectionedObjectReference, PXPhotoKitImportStatusManager, NSString, PXPhotosDataSource;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer {

	BOOL _shouldSkipUserConfirmation;
	NSArray* _assets;
	NSDictionary* _assetsByAssetCollection;
	PXPhotoKitAssetsDataSourceManager* _photoKitDataSourceManager;
	PHPerson* _person;
	PXSectionedObjectReference* _objectReference;
	PXPhotoKitImportStatusManager* _importStatusManager;
	NSString* _importSessionID;

}

@property (nonatomic,readonly) PXPhotosDataSource * photosDataSourceSnapshot; 
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * photoKitDataSourceManager;              //@synthesize photoKitDataSourceManager=_photoKitDataSourceManager - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                          //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * objectReference;                               //@synthesize objectReference=_objectReference - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetsByAssetCollection;                                   //@synthesize assetsByAssetCollection=_assetsByAssetCollection - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipUserConfirmation;                                            //@synthesize shouldSkipUserConfirmation=_shouldSkipUserConfirmation - In the implementation block
@property (nonatomic,retain) PXPhotoKitImportStatusManager * importStatusManager;                        //@synthesize importStatusManager=_importStatusManager - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                                                 //@synthesize importSessionID=_importSessionID - In the implementation block
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2 ;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2 ;
+(id)createActivityWithActionManager:(id)arg1 ;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
+(BOOL)canPerformWithActionManager:(id)arg1 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformOnImplicitSelection;
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(NSArray *)assets;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(PXSectionedObjectReference *)objectReference;
-(PXPhotoKitImportStatusManager *)importStatusManager;
-(void)setObjectReference:(PXSectionedObjectReference *)arg1 ;
-(void)setImportStatusManager:(PXPhotoKitImportStatusManager *)arg1 ;
-(void)setPhotoKitDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(PXPhotosDataSource *)photosDataSourceSnapshot;
-(void)instantlyExcludeAssetsFromDataSource;
-(void)stopExcludingAssetsFromDataSource;
-(void)forceIncludeAssetsInDataSource;
-(id)_indexPathsInPhotosDataSource:(id)arg1 ;
-(NSDictionary *)assetsByAssetCollection;
-(id)createPerformerWithClass:(Class)arg1 actionType:(id)arg2 ;
-(PXPhotoKitAssetsDataSourceManager *)photoKitDataSourceManager;
-(BOOL)shouldSkipUserConfirmation;
-(void)setShouldSkipUserConfirmation:(BOOL)arg1 ;
@end

