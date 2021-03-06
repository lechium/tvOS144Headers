/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer {

	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(void)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3 ;
@end

