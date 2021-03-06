/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSProgress;

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer {

	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(id)editOperationType;
+(id)editOperationManager;
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)performBackgroundTask;
-(void)cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

