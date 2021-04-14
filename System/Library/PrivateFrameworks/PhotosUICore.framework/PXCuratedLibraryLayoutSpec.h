/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXCuratedLibrarySectionHeaderLayoutSpec, PXAssetsSectionLayoutSpec, PXYearsLayoutMetrics, PXMonthsLayoutMetrics, PXExtendedImageConfiguration;

@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec {

	double _estimatedSpacingBetweenMonths;
	double _spacingBetweenYears;
	double _spacingBetweenMonths;
	double _spacingBetweenDays;
	BOOL _isTopSafeAreaFullyCovered;
	BOOL _allowsPaginatedScrollingInYearsAndMonths;
	BOOL _allowsSlideshowInYears;
	long long _axis;
	PXCuratedLibrarySectionHeaderLayoutSpec* _yearsTopHeaderSpec;
	PXCuratedLibrarySectionHeaderLayoutSpec* _monthsTopHeaderSpec;
	PXCuratedLibrarySectionHeaderLayoutSpec* _daysTopHeaderSpec;
	PXCuratedLibrarySectionHeaderLayoutSpec* _allPhotosFloatingHeaderSpec;
	PXAssetsSectionLayoutSpec* _sectionLayoutSpec;
	PXYearsLayoutMetrics* _yearsLayoutMetrics;
	PXMonthsLayoutMetrics* _monthsLayoutMetrics;
	double _spacingBetweenSafeAreaTopAndFirstYearCard;
	double _spacingBetweenSafeAreaTopAndFirstMonthTitle;
	double _spacingBetweenHeaderLastBaselineAndAllPhotosTop;
	PXExtendedImageConfiguration* _statusBarGradientImageConfiguration;

}

@property (nonatomic,readonly) long long axis;                                                                     //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * yearsTopHeaderSpec;                       //@synthesize yearsTopHeaderSpec=_yearsTopHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * monthsTopHeaderSpec;                      //@synthesize monthsTopHeaderSpec=_monthsTopHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * daysTopHeaderSpec;                        //@synthesize daysTopHeaderSpec=_daysTopHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionHeaderLayoutSpec * allPhotosFloatingHeaderSpec;              //@synthesize allPhotosFloatingHeaderSpec=_allPhotosFloatingHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXAssetsSectionLayoutSpec * sectionLayoutSpec;                                      //@synthesize sectionLayoutSpec=_sectionLayoutSpec - In the implementation block
@property (nonatomic,readonly) PXYearsLayoutMetrics * yearsLayoutMetrics;                                          //@synthesize yearsLayoutMetrics=_yearsLayoutMetrics - In the implementation block
@property (nonatomic,readonly) PXMonthsLayoutMetrics * monthsLayoutMetrics;                                        //@synthesize monthsLayoutMetrics=_monthsLayoutMetrics - In the implementation block
@property (nonatomic,readonly) double spacingBetweenSafeAreaTopAndFirstYearCard;                                   //@synthesize spacingBetweenSafeAreaTopAndFirstYearCard=_spacingBetweenSafeAreaTopAndFirstYearCard - In the implementation block
@property (nonatomic,readonly) double spacingBetweenSafeAreaTopAndFirstMonthTitle;                                 //@synthesize spacingBetweenSafeAreaTopAndFirstMonthTitle=_spacingBetweenSafeAreaTopAndFirstMonthTitle - In the implementation block
@property (nonatomic,readonly) double spacingBetweenHeaderLastBaselineAndAllPhotosTop;                             //@synthesize spacingBetweenHeaderLastBaselineAndAllPhotosTop=_spacingBetweenHeaderLastBaselineAndAllPhotosTop - In the implementation block
@property (nonatomic,readonly) BOOL isTopSafeAreaFullyCovered;                                                     //@synthesize isTopSafeAreaFullyCovered=_isTopSafeAreaFullyCovered - In the implementation block
@property (nonatomic,readonly) BOOL allowsPaginatedScrollingInYearsAndMonths;                                      //@synthesize allowsPaginatedScrollingInYearsAndMonths=_allowsPaginatedScrollingInYearsAndMonths - In the implementation block
@property (nonatomic,readonly) BOOL allowsSlideshowInYears;                                                        //@synthesize allowsSlideshowInYears=_allowsSlideshowInYears - In the implementation block
@property (nonatomic,readonly) PXExtendedImageConfiguration * statusBarGradientImageConfiguration;                 //@synthesize statusBarGradientImageConfiguration=_statusBarGradientImageConfiguration - In the implementation block
-(long long)axis;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(double)defaultInterlayoutSpacingForZoomLevel:(long long)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)yearsTopHeaderSpec;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)monthsTopHeaderSpec;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)daysTopHeaderSpec;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)allPhotosFloatingHeaderSpec;
-(PXAssetsSectionLayoutSpec *)sectionLayoutSpec;
-(PXYearsLayoutMetrics *)yearsLayoutMetrics;
-(PXMonthsLayoutMetrics *)monthsLayoutMetrics;
-(double)spacingBetweenSafeAreaTopAndFirstYearCard;
-(double)spacingBetweenSafeAreaTopAndFirstMonthTitle;
-(double)spacingBetweenHeaderLastBaselineAndAllPhotosTop;
-(BOOL)isTopSafeAreaFullyCovered;
-(BOOL)allowsPaginatedScrollingInYearsAndMonths;
-(BOOL)allowsSlideshowInYears;
-(PXExtendedImageConfiguration *)statusBarGradientImageConfiguration;
@end

