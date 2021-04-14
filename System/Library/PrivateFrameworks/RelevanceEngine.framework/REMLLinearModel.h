/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REMLModel.h>
#import <libobjc.A.dylib/REMLLinearModelProperties.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {

	NSDictionary* _models;

}

@property (nonatomic,readonly) NSDictionary * models; 
-(void)_clearCache;
-(NSDictionary *)models;
-(void)setMetricsRecorder:(id)arg1 ;
-(id)_predictWithFeatures:(id)arg1 ;
-(id)predictionSetWithFeatures:(id)arg1 ;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_clearModel;
-(long long)_getNumberOfCoordinates;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(unsigned long long)_getTotalExampleCount;
-(unsigned long long)_getTotalPositiveCount;
-(BOOL)requiresDirectory;
-(void)logCoreAnalyticsMetrics;
-(id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2 ;
-(void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3 ;
-(void)_enumerateModelsForFeatureMap:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

