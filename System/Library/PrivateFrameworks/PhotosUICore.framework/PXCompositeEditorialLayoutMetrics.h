/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics {

	BOOL _useSaliency;
	double _interTileSpacing;
	PXCompositeEditorialLayoutSpec* _editorialLayoutSpec;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXCompositeEditorialLayoutSpec * editorialLayoutSpec;              //@synthesize editorialLayoutSpec=_editorialLayoutSpec - In the implementation block
@property (assign,nonatomic) double interTileSpacing;                                             //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL useSaliency;                                                    //@synthesize useSaliency=_useSaliency - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(double)interTileSpacing;
-(void)setInterTileSpacing:(double)arg1 ;
-(BOOL)useSaliency;
-(void)setUseSaliency:(BOOL)arg1 ;
-(PXCompositeEditorialLayoutSpec *)editorialLayoutSpec;
@end

