/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MLModel, NSArray;

@interface PPScoreInterpreterCoreMLModel : NSObject {

	NSString* _coreMLModelPath;
	MLModel* _coreMLModel;
	NSString* _coreMLModelOutputName;
	NSArray* _coreMLInputFeatures;
	BOOL _hasOutputIndexedSubscript;
	NSArray* _argumentsToEvaluate;

}

@property (nonatomic,readonly) NSArray * argumentsToEvaluate;                    //@synthesize argumentsToEvaluate=_argumentsToEvaluate - In the implementation block
@property (nonatomic,readonly) BOOL hasOutputIndexedSubscript;                   //@synthesize hasOutputIndexedSubscript=_hasOutputIndexedSubscript - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFeatures; 
+(double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2 ;
-(id)init;
-(id)initWithModelPath:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3 ;
-(void)loadCoreMLModelIfNotAlreadyLoaded;
-(void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2 ;
-(unsigned long long)numberOfFeatures;
-(id)featureAtIndex:(unsigned long long)arg1 ;
-(double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2 ;
-(NSArray *)argumentsToEvaluate;
-(BOOL)hasOutputIndexedSubscript;
@end

