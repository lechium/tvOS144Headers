/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXEngineDrivenAssetsTilingLayoutDelegate <NSObject>
@optional
-(void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
-(double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(CGRect*)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
-(CGSize*)engineDrivenLayout:(id)arg1 playButtonSizeForItemAtIndexPath:(PXSimpleIndexPath)arg2 contentTileSize:(CGSize)arg3;

@end

