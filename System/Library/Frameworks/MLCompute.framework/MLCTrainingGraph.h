/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCGraph.h>

@protocol MLCLayerCompiling;
@class MLCOptimizer, NSMutableArray, MLCLayer;

@interface MLCTrainingGraph : MLCGraph {

	BOOL _gradientTensorsAreTemporary;
	BOOL _allocateResultGradientTensors;
	BOOL _allocateOptimizerData;
	BOOL _updateOptimizerTimeStep;
	MLCOptimizer* _optimizer;
	NSMutableArray* _optimizerUpdateLayerList;
	NSMutableArray* _optimizerParameterList;
	NSMutableArray* _rootSourceGradientTensor;
	NSMutableArray* _lossLayersInTrainingGraph;
	NSMutableArray* _stopGradientTensorList;
	MLCLayer*<MLCLayerCompiling> _lossLayer;
	MLCLayer* _dummyLayer;
	unsigned long long _compilerOptions;
	unsigned long long _firstTrainableLayerIndex;

}

@property (nonatomic,retain) MLCOptimizer * optimizer;                                 //@synthesize optimizer=_optimizer - In the implementation block
@property (nonatomic,retain) NSMutableArray * optimizerUpdateLayerList;                //@synthesize optimizerUpdateLayerList=_optimizerUpdateLayerList - In the implementation block
@property (nonatomic,retain) NSMutableArray * optimizerParameterList;                  //@synthesize optimizerParameterList=_optimizerParameterList - In the implementation block
@property (nonatomic,retain) NSMutableArray * rootSourceGradientTensor;                //@synthesize rootSourceGradientTensor=_rootSourceGradientTensor - In the implementation block
@property (nonatomic,retain) NSMutableArray * lossLayersInTrainingGraph;               //@synthesize lossLayersInTrainingGraph=_lossLayersInTrainingGraph - In the implementation block
@property (nonatomic,retain) NSMutableArray * stopGradientTensorList;                  //@synthesize stopGradientTensorList=_stopGradientTensorList - In the implementation block
@property (nonatomic,retain) MLCLayer*<MLCLayerCompiling> lossLayer;                   //@synthesize lossLayer=_lossLayer - In the implementation block
@property (assign,nonatomic) BOOL gradientTensorsAreTemporary;                         //@synthesize gradientTensorsAreTemporary=_gradientTensorsAreTemporary - In the implementation block
@property (nonatomic,readonly) MLCLayer * dummyLayer;                                  //@synthesize dummyLayer=_dummyLayer - In the implementation block
@property (assign,nonatomic) unsigned long long compilerOptions;                       //@synthesize compilerOptions=_compilerOptions - In the implementation block
@property (assign,nonatomic) unsigned long long firstTrainableLayerIndex;              //@synthesize firstTrainableLayerIndex=_firstTrainableLayerIndex - In the implementation block
@property (assign,nonatomic) BOOL allocateResultGradientTensors;                       //@synthesize allocateResultGradientTensors=_allocateResultGradientTensors - In the implementation block
@property (assign,nonatomic) BOOL allocateOptimizerData;                               //@synthesize allocateOptimizerData=_allocateOptimizerData - In the implementation block
@property (assign,nonatomic) BOOL updateOptimizerTimeStep;                             //@synthesize updateOptimizerTimeStep=_updateOptimizerTimeStep - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceMemorySize; 
+(id)graphWithGraphObjects:(id)arg1 lossLayer:(id)arg2 optimizer:(id)arg3 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)addOutputs:(id)arg1 ;
-(void)setOptimizer:(MLCOptimizer *)arg1 ;
-(MLCOptimizer *)optimizer;
-(unsigned long long)deviceMemorySize;
-(id)initWithGraphObjects:(id)arg1 lossLayer:(id)arg2 optimizer:(id)arg3 ;
-(void)setRootSourceGradientTensor:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rootSourceGradientTensor;
-(BOOL)gradientTensorsAreTemporary;
-(unsigned long long)compilerOptions;
-(void)sumRootSourceGradientTensor:(id)arg1 device:(id)arg2 ;
-(NSMutableArray *)optimizerParameterList;
-(void)setOptimizerParameterList:(NSMutableArray *)arg1 ;
-(void)updateIsTrainableForLayerWithStopGradientTensor:(id)arg1 checkChildLayers:(BOOL)arg2 ;
-(void)markLayersAsTrainable;
-(NSMutableArray *)stopGradientTensorList;
-(void)setFirstTrainableLayerIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstTrainableLayerIndex;
-(BOOL)allocateGradientTensorsForMultipleChildrenOfLayer:(id)arg1 gradientTensorsAreTemporary:(BOOL)arg2 device:(id)arg3 ;
-(id)resultGradientTensorToUseByExecuteGradientForLayer:(id)arg1 sourceIndex:(unsigned long long)arg2 incrementIntermediateIndex:(BOOL)arg3 ;
-(void)linkRelatedGradientTensorsForConcatLayer:(id)arg1 device:(id)arg2 ;
-(BOOL)allocateResultGradientTensors;
-(void)updateTrainableLayerList:(BOOL)arg1 ;
-(BOOL)allocateRootSourceGradientTensors:(id)arg1 ;
-(void)allocateGradientTensorsForLayersInGraph:(BOOL)arg1 ;
-(void)setAllocateResultGradientTensors:(BOOL)arg1 ;
-(BOOL)allocateOptimizerData;
-(void)setOptimizerUpdateLayerList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)optimizerUpdateLayerList;
-(void)setAllocateOptimizerData:(BOOL)arg1 ;
-(void)setLossLayersInTrainingGraph:(NSMutableArray *)arg1 ;
-(void)setCompilerOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)lossLayersInTrainingGraph;
-(BOOL)compileOptimizer:(id)arg1 ;
-(void)setGradientTensorsAreTemporary:(BOOL)arg1 ;
-(BOOL)addInputs:(id)arg1 lossLabels:(id)arg2 lossLabelWeights:(id)arg3 ;
-(void)sumIntermediateGradientTensorsForLayer:(id)arg1 ;
-(void)sumAllRootSourceGradientTensors:(id)arg1 ;
-(unsigned long long)layerIndexToStoreSummedGradientsForTensor:(id)arg1 ;
-(BOOL)allocateOptimizerDataForGraph;
-(BOOL)checkAndSumIfSharedParameterUpdateForNormalizationLayerTensor:(id)arg1 layer:(id)arg2 device:(id)arg3 isBetaTensor:(BOOL)arg4 ;
-(BOOL)updateOptimizerTimeStep;
-(BOOL)recompile;
-(void)executeForwardToLayerIndex:(unsigned long long)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 batchSize:(unsigned long long)arg4 forTraining:(BOOL)arg5 ;
-(BOOL)executeForwardWithBatchSize:(unsigned long long)arg1 options:(unsigned long long)arg2 outputsData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)compileAndAllocateGradientTensorsForGraph:(BOOL)arg1 ;
-(void)executeGradientFromLayerIndex:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(BOOL)executeGradientWithBatchSize:(unsigned long long)arg1 options:(unsigned long long)arg2 outputsData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeOptimizerUpdate;
-(BOOL)executeWithInputsData:(id)arg1 lossLabelsData:(id)arg2 lossLabelWeightsData:(id)arg3 outputsData:(id)arg4 batchSize:(unsigned long long)arg5 options:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)resultGradientTensorsForLayer:(id)arg1 summedGradientForInputTensors:(BOOL)arg2 ;
-(MLCLayer *)dummyLayer;
-(void)setUpdateOptimizerTimeStep:(BOOL)arg1 ;
-(BOOL)setTrainingTensorParameters:(id)arg1 ;
-(BOOL)bindOptimizerData:(id)arg1 deviceData:(id)arg2 withTensor:(id)arg3 ;
-(BOOL)compileWithOptions:(unsigned long long)arg1 device:(id)arg2 ;
-(BOOL)stopGradientForTensors:(id)arg1 ;
-(unsigned long long)deviceMemorySizeWithDevice:(id)arg1 ;
-(BOOL)addInputs:(id)arg1 lossLabels:(id)arg2 ;
-(BOOL)executeForwardWithBatchSize:(unsigned long long)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)executeGradientWithBatchSize:(unsigned long long)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)executeOptimizerUpdateWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)executeWithInputsData:(id)arg1 lossLabelsData:(id)arg2 lossLabelWeightsData:(id)arg3 batchSize:(unsigned long long)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)gradientTensorForInput:(id)arg1 ;
-(id)resultGradientTensorsForLayer:(id)arg1 ;
-(id)sourceGradientTensorsForLayer:(id)arg1 ;
-(id)resultTensorsForLayer:(id)arg1 ;
-(id)sourceTensorsForLayer:(id)arg1 ;
-(id)allocateUserGradientForTensor:(id)arg1 ;
-(BOOL)linkWithGraphs:(id)arg1 ;
-(void)synchronizeUpdates;
-(id)gradientDataForParameter:(id)arg1 layer:(id)arg2 ;
-(void)setStopGradientTensorList:(NSMutableArray *)arg1 ;
-(MLCLayer*<MLCLayerCompiling>)lossLayer;
-(void)setLossLayer:(MLCLayer*<MLCLayerCompiling>)arg1 ;
@end
