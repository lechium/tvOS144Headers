/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXStackLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;
	long long _layoutAxis;
	CGSize _interItemSpacing;
	CGSize _itemSize;

}

@property (assign,nonatomic) long long layoutAxis;                                //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)prepareForReuse;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)itemSize;
-(CGSize)performLayout;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(CGSize)interItemSpacing;
-(long long)layoutAxis;
-(void)setLayoutAxis:(long long)arg1 ;
-(CGSize)_calculateSizeForLayout;
-(void)_performLayoutPass;
@end

