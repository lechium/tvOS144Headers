/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@interface PXImageModulationManager : PXObservable
+(double)HDRValueForAsset:(id)arg1 ;
+(SCD_Struct_PX99)optionsForAsset:(id)arg1 ;
+(id)sharedImageModulationManager;
-(id)init;
-(id)_init;
-(id)checkoutImageLayerModulatorWithOptions:(SCD_Struct_PX99)arg1 ;
-(void)checkInImageLayerModulator:(id)arg1 ;
-(id)checkoutLivePhotoViewModulatorWithOptions:(SCD_Struct_PX99)arg1 ;
-(void)checkInLivePhotoViewModulator:(id)arg1 ;
@end

