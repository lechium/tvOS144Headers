/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGItemsLayoutDelegate <NSObject>
@optional
-(long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;
-(id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2;
-(id)itemsLayout:(id)arg1 objectReferenceForAccessoryItem:(long long)arg2;
-(double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
-(CGRect*)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
-(unsigned short)itemsLayout:(id)arg1 effectIdForItem:(long long)arg2;
-(void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(SCD_Struct_PX15*)arg2 forItemsInRange:(NSRange)arg3;

@end
