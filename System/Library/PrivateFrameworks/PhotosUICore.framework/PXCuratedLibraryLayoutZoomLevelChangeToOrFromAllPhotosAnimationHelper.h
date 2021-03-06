/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryLayoutAnimationHelper.h>

@class _PXCuratedLibraryLayoutAssetsSnapshot;

@interface PXCuratedLibraryLayoutZoomLevelChangeToOrFromAllPhotosAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {

	_PXCuratedLibraryLayoutAssetsSnapshot* _fromSnapshot;
	_PXCuratedLibraryLayoutAssetsSnapshot* _toSnapshot;

}
-(double)animationDuration;
-(id)initWithLayout:(id)arg1 ;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX83*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX11*)arg2 styles:(inout SCD_Struct_PX83*)arg3 infos:(inout SCD_Struct_PX15*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)_adjustGeometries:(inout SCD_Struct_PX11*)arg1 styles:(inout SCD_Struct_PX83*)arg2 infos:(inout SCD_Struct_PX15*)arg3 spriteIndexRange:(PXGSpriteIndexRange)arg4 appearing:(BOOL)arg5 ;
-(id)_snapshotForZoomLevel:(long long)arg1 ;
@end

