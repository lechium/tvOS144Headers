/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property (nonatomic,retain) id<PXSectionedLayoutItem> seedItem; 
@property (assign,nonatomic) CGSize seedSize; 
@required
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
-(id<PXSectionedLayoutItem>)seedItem;
-(void)setSeedItem:(id)arg1;
-(CGSize)seedSize;
-(void)setSeedSize:(CGSize)arg1;

@end

