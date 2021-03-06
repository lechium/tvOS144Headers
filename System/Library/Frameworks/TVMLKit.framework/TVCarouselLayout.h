/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class NSNumber;

@interface TVCarouselLayout : TVViewLayout {

	BOOL _parallaxEnabled;
	BOOL _showsPageControl;
	double _interitemSpacing;
	long long _layoutType;
	unsigned long long _scrollMode;
	double _focusedEdgeExpansion;
	double _revealDistance;
	double _shearAngle;
	NSNumber* _pageControlMarginNumber;
	CGSize _cellSize;
	UIEdgeInsets _cellPadding;

}

@property (assign,nonatomic) double interitemSpacing;                                    //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) long long layoutType;                                       //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                            //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellPadding;                                   //@synthesize cellPadding=_cellPadding - In the implementation block
@property (assign,nonatomic) unsigned long long scrollMode;                              //@synthesize scrollMode=_scrollMode - In the implementation block
@property (assign,nonatomic) double focusedEdgeExpansion;                                //@synthesize focusedEdgeExpansion=_focusedEdgeExpansion - In the implementation block
@property (assign,nonatomic) double revealDistance;                                      //@synthesize revealDistance=_revealDistance - In the implementation block
@property (assign,getter=isParallaxEnabled,nonatomic) BOOL parallaxEnabled;              //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) double shearAngle;                                          //@synthesize shearAngle=_shearAngle - In the implementation block
@property (assign,nonatomic) BOOL showsPageControl;                                      //@synthesize showsPageControl=_showsPageControl - In the implementation block
@property (assign,nonatomic) NSNumber * pageControlMarginNumber;                         //@synthesize pageControlMarginNumber=_pageControlMarginNumber - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(long long)layoutTypeForString:(id)arg1 ;
+(long long)layoutTypeForElement:(id)arg1 ;
+(unsigned long long)scrollModeForString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)scrollMode;
-(void)setScrollMode:(unsigned long long)arg1 ;
-(UIEdgeInsets)cellPadding;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(CGSize)cellSize;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(BOOL)showsPageControl;
-(void)setShowsPageControl:(BOOL)arg1 ;
-(NSNumber *)pageControlMarginNumber;
-(double)focusedEdgeExpansion;
-(void)setFocusedEdgeExpansion:(double)arg1 ;
-(double)revealDistance;
-(void)setRevealDistance:(double)arg1 ;
-(BOOL)isParallaxEnabled;
-(double)shearAngle;
-(void)setShearAngle:(double)arg1 ;
-(void)setPageControlMarginNumber:(NSNumber *)arg1 ;
@end

