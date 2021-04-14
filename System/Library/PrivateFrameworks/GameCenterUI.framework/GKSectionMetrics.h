/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGridLayoutMetrics.h>

@class NSDictionary;

@interface GKSectionMetrics : GKGridLayoutMetrics {

	BOOL _useViewSizeForFlowMaxColumnCount;
	BOOL _incrementalRevealConsumesPadding;
	BOOL _shouldAlwaysIncludeShowMore;
	BOOL _shouldShowSectionHeadersWhenNoItems;
	unsigned long long _alignment;
	double _lineSpacing;
	double _interitemSpacing;
	double _marginBetweenItems;
	double _desiredItemWidth;
	double _flowColumnWidth;
	unsigned long long _flowMaxColumnCount;
	double _desiredItemHeight;
	NSDictionary* _itemHeightList;
	unsigned long long _lastLineItemAlignment;
	unsigned long long _maximumVisibleItemCount;
	unsigned long long _incrementalRevealItemCount;
	double _calculatedItemHeightCache;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) double calculatedItemHeightCache;                           //@synthesize calculatedItemHeightCache=_calculatedItemHeightCache - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                       //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                               //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                         //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                    //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double marginBetweenItems;                                  //@synthesize marginBetweenItems=_marginBetweenItems - In the implementation block
@property (assign,nonatomic) double desiredItemWidth;                                    //@synthesize desiredItemWidth=_desiredItemWidth - In the implementation block
@property (assign,nonatomic) double flowColumnWidth;                                     //@synthesize flowColumnWidth=_flowColumnWidth - In the implementation block
@property (assign,nonatomic) BOOL useViewSizeForFlowMaxColumnCount;                      //@synthesize useViewSizeForFlowMaxColumnCount=_useViewSizeForFlowMaxColumnCount - In the implementation block
@property (assign,nonatomic) unsigned long long flowMaxColumnCount;                      //@synthesize flowMaxColumnCount=_flowMaxColumnCount - In the implementation block
@property (assign,nonatomic) double desiredItemHeight;                                   //@synthesize desiredItemHeight=_desiredItemHeight - In the implementation block
@property (nonatomic,readonly) double calculatedItemHeight; 
@property (nonatomic,retain) NSDictionary * itemHeightList;                              //@synthesize itemHeightList=_itemHeightList - In the implementation block
@property (assign,nonatomic) unsigned long long lastLineItemAlignment;                   //@synthesize lastLineItemAlignment=_lastLineItemAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long maximumVisibleItemCount;                 //@synthesize maximumVisibleItemCount=_maximumVisibleItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long incrementalRevealItemCount;              //@synthesize incrementalRevealItemCount=_incrementalRevealItemCount - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight; 
@property (assign,nonatomic) double showMoreHeight; 
@property (assign,nonatomic) BOOL sectionHeadersShouldPin; 
@property (assign,nonatomic) BOOL incrementalRevealConsumesPadding;                      //@synthesize incrementalRevealConsumesPadding=_incrementalRevealConsumesPadding - In the implementation block
@property (assign,nonatomic) BOOL shouldAlwaysIncludeShowMore;                           //@synthesize shouldAlwaysIncludeShowMore=_shouldAlwaysIncludeShowMore - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSectionHeadersWhenNoItems;                   //@synthesize shouldShowSectionHeadersWhenNoItems=_shouldShowSectionHeadersWhenNoItems - In the implementation block
+(id)metricsForIdiom:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(id)localDescription;
-(double)calculatedItemHeight;
-(id)initWithIdiom:(long long)arg1 ;
-(void)setDesiredItemWidth:(double)arg1 ;
-(void)setDesiredItemHeight:(double)arg1 ;
-(void)setFlowColumnWidth:(double)arg1 ;
-(void)setFlowMaxColumnCount:(unsigned long long)arg1 ;
-(void)setUseViewSizeForFlowMaxColumnCount:(BOOL)arg1 ;
-(void)setItemHeightList:(NSDictionary *)arg1 ;
-(void)setLastLineItemAlignment:(unsigned long long)arg1 ;
-(void)setMaximumVisibleItemCount:(unsigned long long)arg1 ;
-(void)setIncrementalRevealItemCount:(unsigned long long)arg1 ;
-(void)setIncrementalRevealConsumesPadding:(BOOL)arg1 ;
-(void)setShouldAlwaysIncludeShowMore:(BOOL)arg1 ;
-(void)setMarginBetweenItems:(double)arg1 ;
-(void)setShouldShowSectionHeadersWhenNoItems:(BOOL)arg1 ;
-(unsigned long long)flowMaxColumnCountForViewWidth:(double)arg1 ;
-(double)sectionHeaderHeight;
-(double)showMoreHeight;
-(void)setShowMoreHeight:(double)arg1 ;
-(BOOL)sectionHeadersShouldPin;
-(void)setSectionHeadersShouldPin:(BOOL)arg1 ;
-(CGSize)itemSizeForCollectionView:(id)arg1 ;
-(double)marginBetweenItems;
-(double)desiredItemWidth;
-(double)flowColumnWidth;
-(BOOL)useViewSizeForFlowMaxColumnCount;
-(unsigned long long)flowMaxColumnCount;
-(double)desiredItemHeight;
-(NSDictionary *)itemHeightList;
-(unsigned long long)lastLineItemAlignment;
-(unsigned long long)maximumVisibleItemCount;
-(unsigned long long)incrementalRevealItemCount;
-(BOOL)incrementalRevealConsumesPadding;
-(BOOL)shouldAlwaysIncludeShowMore;
-(BOOL)shouldShowSectionHeadersWhenNoItems;
-(double)calculatedItemHeightCache;
-(void)setCalculatedItemHeightCache:(double)arg1 ;
@end

