/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfViewLayout.h>

@interface _TVMLShelfViewLayout : _TVShelfViewLayout {

	double _showcaseFactor;
	double _cachedTallestHeaderHeight;
	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;                     //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (assign,nonatomic) double showcaseFactor;                         //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
@property (assign,nonatomic) double cachedTallestHeaderHeight;              //@synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight - In the implementation block
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(TVCellMetrics)cellMetrics;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(double)expectedLineSpacing;
-(double)showcaseFactor;
-(void)setShowcaseFactor:(double)arg1 ;
-(double)cachedTallestHeaderHeight;
-(void)setCachedTallestHeaderHeight:(double)arg1 ;
-(double)headerAllowance;
-(id)contentRowMetricsForShowcase:(BOOL)arg1 ;
@end

