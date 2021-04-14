/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class NSIndexSet, PXMonthsLayoutGenerator, PXMonthsLayoutMetrics;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {

	NSIndexSet* _indexesOfChapterHeaders;
	NSIndexSet* _indexesOfHeroes;
	PXMonthsLayoutGenerator* _layoutGenerator;
	PXMonthsLayoutMetrics* _metrics;

}

@property (nonatomic,copy) PXMonthsLayoutMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) BOOL presentedSingleColumn; 
-(void)setMetrics:(PXMonthsLayoutMetrics *)arg1 ;
-(PXMonthsLayoutMetrics *)metrics;
-(id)configuredLayoutGenerator;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
-(BOOL)presentedSingleColumn;
-(void)updateSublayoutAttributes;
@end

