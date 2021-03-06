/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class NSArray, PXZoomableInlineHeadersLayoutSpec;

@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec {

	BOOL _useSaliency;
	long long _defaultNumberOfColumns;
	long long _initialNumberOfColumns;
	long long _staticNumberOfColumns;
	long long _maxColumnsForIndividualItems;
	long long _maxColumnsForBadges;
	double _interitemSpacing;
	double _aspectFitInteritemSpacing;
	double _panoramaItemAspectRatio;
	double _panoramaInteritemSpacing;
	long long _maxColumnsForSaliency;
	NSArray* _supportedColumns;
	NSArray* _minimumAssetsRequiredByColumn;
	NSArray* _legacyMacSupportedColumns;
	double _captionSpacing;
	PXZoomableInlineHeadersLayoutSpec* _inlineHeadersSpec;
	UIEdgeInsets _aspectFitEdgeMargins;
	UIEdgeInsets _squareEdgeMargins;

}

@property (nonatomic,readonly) long long defaultNumberOfColumns;                                   //@synthesize defaultNumberOfColumns=_defaultNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long initialNumberOfColumns;                                   //@synthesize initialNumberOfColumns=_initialNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long staticNumberOfColumns;                                    //@synthesize staticNumberOfColumns=_staticNumberOfColumns - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForIndividualItems;                             //@synthesize maxColumnsForIndividualItems=_maxColumnsForIndividualItems - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForBadges;                                      //@synthesize maxColumnsForBadges=_maxColumnsForBadges - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                                            //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets aspectFitEdgeMargins;                                  //@synthesize aspectFitEdgeMargins=_aspectFitEdgeMargins - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets squareEdgeMargins;                                     //@synthesize squareEdgeMargins=_squareEdgeMargins - In the implementation block
@property (nonatomic,readonly) double aspectFitInteritemSpacing;                                   //@synthesize aspectFitInteritemSpacing=_aspectFitInteritemSpacing - In the implementation block
@property (nonatomic,readonly) double panoramaItemAspectRatio;                                     //@synthesize panoramaItemAspectRatio=_panoramaItemAspectRatio - In the implementation block
@property (nonatomic,readonly) double panoramaInteritemSpacing;                                    //@synthesize panoramaInteritemSpacing=_panoramaInteritemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL useSaliency;                                                   //@synthesize useSaliency=_useSaliency - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForSaliency;                                    //@synthesize maxColumnsForSaliency=_maxColumnsForSaliency - In the implementation block
@property (nonatomic,readonly) NSArray * supportedColumns;                                         //@synthesize supportedColumns=_supportedColumns - In the implementation block
@property (nonatomic,readonly) NSArray * minimumAssetsRequiredByColumn;                            //@synthesize minimumAssetsRequiredByColumn=_minimumAssetsRequiredByColumn - In the implementation block
@property (nonatomic,readonly) NSArray * legacyMacSupportedColumns;                                //@synthesize legacyMacSupportedColumns=_legacyMacSupportedColumns - In the implementation block
@property (nonatomic,readonly) double captionSpacing;                                              //@synthesize captionSpacing=_captionSpacing - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersLayoutSpec * inlineHeadersSpec;              //@synthesize inlineHeadersSpec=_inlineHeadersSpec - In the implementation block
-(double)interitemSpacing;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)useSaliency;
-(long long)maxColumnsForIndividualItems;
-(long long)maxColumnsForSaliency;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3 userDefaults:(id)arg4 ;
-(long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1 allowedColumns:(id)arg2 ;
-(long long)defaultNumberOfColumns;
-(long long)initialNumberOfColumns;
-(long long)staticNumberOfColumns;
-(long long)maxColumnsForBadges;
-(UIEdgeInsets)aspectFitEdgeMargins;
-(UIEdgeInsets)squareEdgeMargins;
-(double)aspectFitInteritemSpacing;
-(double)panoramaItemAspectRatio;
-(double)panoramaInteritemSpacing;
-(NSArray *)supportedColumns;
-(NSArray *)minimumAssetsRequiredByColumn;
-(NSArray *)legacyMacSupportedColumns;
-(double)captionSpacing;
-(PXZoomableInlineHeadersLayoutSpec *)inlineHeadersSpec;
@end

