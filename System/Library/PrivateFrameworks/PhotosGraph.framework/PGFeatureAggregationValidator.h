/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeatureValidator.h>

@interface PGFeatureAggregationValidator : PGFeatureValidator {

	long long _featureExtractorType;

}

@property (nonatomic,readonly) long long featureExtractorType;              //@synthesize featureExtractorType=_featureExtractorType - In the implementation block
-(long long)isValidEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureValidatorType;
-(id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureExtractorType:(long long)arg3 featureName:(id)arg4 ;
-(long long)isValidEntity:(id)arg1 graph:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4 ;
-(id)_composeFeatureExtractorWithGraph:(id)arg1 error:(id*)arg2 ;
-(long long)featureExtractorType;
@end

