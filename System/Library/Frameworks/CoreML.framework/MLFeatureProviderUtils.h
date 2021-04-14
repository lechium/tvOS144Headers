/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MLFeatureProviderUtils : NSObject
+(id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id*)arg3 ;
+(long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id*)arg2 ;
+(BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double*)arg2 stride:(unsigned long long)arg3 error:(id*)arg4 ;
+(BOOL)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double*)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id*)arg3 ;
+(BOOL)canVectorizeFeatureWithDescription:(id)arg1 ;
+(BOOL)canVectorizeAllFeaturesWithDescriptions:(id)arg1 ;
+(id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2 ;
+(id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2 ;
@end

