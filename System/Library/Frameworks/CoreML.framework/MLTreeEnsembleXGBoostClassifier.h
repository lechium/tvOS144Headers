/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLClassifier.h>

@class NSArray, NSURL, NSString;

@interface MLTreeEnsembleXGBoostClassifier : MLClassifier {

	NSArray* _labelsForDataPoints;
	NSURL* _modelURL;
	NSString* _objective;
	unsigned long long _numClasses;
	void* _booster;

}

@property (nonatomic,retain) NSArray * labelsForDataPoints;              //@synthesize labelsForDataPoints=_labelsForDataPoints - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                           //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSString * objective;                       //@synthesize objective=_objective - In the implementation block
@property (assign,nonatomic) unsigned long long numClasses;              //@synthesize numClasses=_numClasses - In the implementation block
@property (assign,nonatomic) void* booster;                              //@synthesize booster=_booster - In the implementation block
-(void)dealloc;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(NSURL *)modelURL;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSString *)objective;
-(unsigned long long)numClasses;
-(NSArray *)labelsForDataPoints;
-(void)setLabelsForDataPoints:(NSArray *)arg1 ;
-(id)initWithDescription:(id)arg1 configuration:(id)arg2 indexToStringLabelArray:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg3 indexToIntLabelArray:(vector<long long, std::__1::allocator<long long> >*)arg4 modelURL:(id)arg5 error:(id*)arg6 ;
-(SCD_Struct_ML59*)xgBoostDataFormatFromFeatureProvider:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_ML59*)xgBoostDataFormatFromBatchProvider:(id)arg1 needLabels:(BOOL)arg2 error:(id*)arg3 ;
-(id)batchProviderFromXGboostResults:(const float*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)featureProviderFromXGboostResults:(const float*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)featureProviderArrayFromXGBoostResult:(const float*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)packageOutputWithPredictedLabel:(id)arg1 classProbabilities:(id)arg2 ;
-(BOOL)initializeBoosterIfOneExists;
-(id)loadLabelsWithStringLabels:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 intLabels:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(BOOL)initializeAndvalidateObjectiveAndNumClassesWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)setObjective:(NSString *)arg1 ;
-(void)setNumClasses:(unsigned long long)arg1 ;
-(void*)booster;
-(void)setBooster:(void*)arg1 ;
@end

