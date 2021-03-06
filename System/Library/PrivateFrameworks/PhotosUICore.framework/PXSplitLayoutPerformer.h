/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;
	long long _layoutAxis;
	double _layoutRatio;
	double _interItemSpacing;

}

@property (assign,nonatomic) long long layoutAxis;                                //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) double layoutRatio;                                  //@synthesize layoutRatio=_layoutRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)prepareForReuse;
-(void)setChildren:(NSArray *)arg1 ;
-(CGSize)performLayout;
-(void)setInterItemSpacing:(double)arg1 ;
-(double)interItemSpacing;
-(long long)layoutAxis;
-(void)setLayoutAxis:(long long)arg1 ;
-(double)layoutRatio;
-(void)setLayoutRatio:(double)arg1 ;
@end

