/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLCDevice, NSArray, NSMutableArray, NSMutableDictionary, NSDictionary, NSString;

@interface MLCGraph : NSObject {

	BOOL _readyForExecution;
	BOOL _recompileAfterLinking;
	BOOL _staticBatchSizeInGraph;
	MLCDevice* _device;
	NSArray* _graphObjects;
	unsigned long long _nextLayerID;
	NSMutableArray* _graphLayerList;
	NSMutableArray* _rootLevelTensorNodes;
	NSMutableDictionary* _layerParentMap;
	NSMutableDictionary* _layerChildMap;
	NSDictionary* _allInputs;
	NSDictionary* _allLossLabels;
	NSDictionary* _allLossLabelWeights;
	NSDictionary* _allOutputs;

}

@property (assign,nonatomic) BOOL readyForExecution;                             //@synthesize readyForExecution=_readyForExecution - In the implementation block
@property (nonatomic,retain,readonly) NSArray * graphObjects;                    //@synthesize graphObjects=_graphObjects - In the implementation block
@property (assign,nonatomic) unsigned long long nextLayerID;                     //@synthesize nextLayerID=_nextLayerID - In the implementation block
@property (nonatomic,retain) NSMutableArray * graphLayerList;                    //@synthesize graphLayerList=_graphLayerList - In the implementation block
@property (nonatomic,retain) NSMutableArray * rootLevelTensorNodes;              //@synthesize rootLevelTensorNodes=_rootLevelTensorNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layerParentMap;               //@synthesize layerParentMap=_layerParentMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layerChildMap;                //@synthesize layerChildMap=_layerChildMap - In the implementation block
@property (nonatomic,retain) NSDictionary * allInputs;                           //@synthesize allInputs=_allInputs - In the implementation block
@property (nonatomic,retain) NSDictionary * allLossLabels;                       //@synthesize allLossLabels=_allLossLabels - In the implementation block
@property (nonatomic,retain) NSDictionary * allLossLabelWeights;                 //@synthesize allLossLabelWeights=_allLossLabelWeights - In the implementation block
@property (nonatomic,retain) NSDictionary * allOutputs;                          //@synthesize allOutputs=_allOutputs - In the implementation block
@property (assign,nonatomic) BOOL recompileAfterLinking;                         //@synthesize recompileAfterLinking=_recompileAfterLinking - In the implementation block
@property (assign,nonatomic) BOOL staticBatchSizeInGraph;                        //@synthesize staticBatchSizeInGraph=_staticBatchSizeInGraph - In the implementation block
@property (nonatomic,retain) MLCDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) NSString * summarizedDOTDescription; 
+(id)graph;
+(id)graphWithGraphObjects:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(MLCDevice *)device;
-(void)setDevice:(MLCDevice *)arg1 ;
-(NSArray *)layers;
-(void)enumerateLayersUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)addOutputs:(id)arg1 ;
-(NSString *)summarizedDOTDescription;
-(NSMutableArray *)graphLayerList;
-(NSDictionary *)allInputs;
-(NSDictionary *)allOutputs;
-(id)initWithGraphObjects:(id)arg1 ;
-(id)nodeWithLayer:(id)arg1 source:(id)arg2 ;
-(BOOL)recompileAfterLinking;
-(void)setRecompileAfterLinking:(BOOL)arg1 ;
-(BOOL)readyForExecution;
-(void)linkRelatedTensorsForConcatLayer:(id)arg1 device:(id)arg2 ;
-(BOOL)staticBatchSizeInGraph;
-(void)setReadyForExecution:(BOOL)arg1 ;
-(NSDictionary *)allLossLabels;
-(NSDictionary *)allLossLabelWeights;
-(BOOL)addInputs:(id)arg1 lossLabels:(id)arg2 lossLabelWeights:(id)arg3 ;
-(BOOL)checkPageAlignmentAndSizeForOutputs:(id)arg1 ;
-(BOOL)dispatchReadsForMultipleTensorOutputs:(id)arg1 finalTensorInGraph:(id)arg2 finalResultTensor:(id)arg3 batchSize:(unsigned long long)arg4 ;
-(BOOL)bindAndWriteData:(id)arg1 forInputs:(id)arg2 toDevice:(id)arg3 batchSize:(unsigned long long)arg4 synchronous:(BOOL)arg5 skipWrite:(BOOL)arg6 ;
-(void)updateLSTMLayersForVariableSequenceLengthInGraph:(id)arg1 withInputData:(id)arg2 ;
-(BOOL)isLayerInGraphLayerList:(id)arg1 graphLayerList:(id)arg2 ;
-(id)resultTensorsForLayer:(id)arg1 graphLayerList:(id)arg2 ;
-(id)sourceTensorsForLayer:(id)arg1 graphLayerList:(id)arg2 ;
-(BOOL)addInputs:(id)arg1 lossLabels:(id)arg2 ;
-(id)resultTensorsForLayer:(id)arg1 ;
-(id)sourceTensorsForLayer:(id)arg1 ;
-(id)nodeWithMultiOutputLayer:(id)arg1 source:(id)arg2 forTraining:(BOOL)arg3 ;
-(id)nodeWithLayer:(id)arg1 sources:(id)arg2 ;
-(id)nodeWithLayer:(id)arg1 sources:(id)arg2 forTraining:(BOOL)arg3 ;
-(id)splitWithSource:(id)arg1 splitCount:(unsigned long long)arg2 dimension:(unsigned long long)arg3 ;
-(id)splitWithSource:(id)arg1 splitSectionLengths:(id)arg2 dimension:(unsigned long long)arg3 ;
-(id)concatenateWithSources:(id)arg1 dimension:(unsigned long long)arg2 ;
-(id)reshapeWithShape:(id)arg1 source:(id)arg2 ;
-(id)transposeWithDimensions:(id)arg1 source:(id)arg2 ;
-(unsigned long long)nextLayerID;
-(void)flattenConditionalLayer:(id)arg1 ;
-(NSMutableArray *)rootLevelTensorNodes;
-(NSMutableDictionary *)layerChildMap;
-(NSMutableDictionary *)layerParentMap;
-(void)setNextLayerID:(unsigned long long)arg1 ;
-(id)createGradientSourceTensorWith:(id)arg1 source:(id)arg2 ;
-(id)nodeWithLayer:(id)arg1 sources:(id)arg2 disableUpdate:(BOOL)arg3 ;
-(id)createLossGradientSourceTensorWith:(id)arg1 source:(id)arg2 batchSize:(id)arg3 ;
-(BOOL)checksBeforeAddLayerInGraph:(id)arg1 sources:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)checkAndResetTensorsAssociatedWithLayer:(id)arg1 sources:(id)arg2 ;
-(void)linkSourceTensorsWithLayer:(id)arg1 sources:(id)arg2 ;
-(id)createTensorWith:(id)arg1 sources:(id)arg2 ;
-(void)setStaticBatchSizeInGraph:(BOOL)arg1 ;
-(void)createVariableLengthSequenceTensorsForLayer:(id)arg1 withVariableSequenceLength:(id)arg2 ;
-(NSArray *)graphObjects;
-(void)addGraphNodes:(id)arg1 withControlTreeNode:(id)arg2 ;
-(void)insertPhis:(id)arg1 ;
-(void)setAllInputs:(NSDictionary *)arg1 ;
-(void)setAllLossLabels:(NSDictionary *)arg1 ;
-(void)setAllLossLabelWeights:(NSDictionary *)arg1 ;
-(void)setAllOutputs:(NSDictionary *)arg1 ;
-(id)nodeWithLayer:(id)arg1 sources:(id)arg2 lossLabels:(id)arg3 ;
-(BOOL)bindAndWriteData:(id)arg1 forInputs:(id)arg2 toDevice:(id)arg3 batchSize:(unsigned long long)arg4 synchronous:(BOOL)arg5 ;
-(BOOL)bindAndWriteData:(id)arg1 forInputs:(id)arg2 toDevice:(id)arg3 synchronous:(BOOL)arg4 ;
-(void)writeAsyncToDevice:(id)arg1 dataForTensors:(id)arg2 ;
-(void)enumerateInputsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateOutputsUsingBlock:(/*^block*/id)arg1 ;
-(id)conditionalWithPredicate:(id)arg1 trueBranch:(id)arg2 falseBranch:(id)arg3 ;
-(void)setGraphLayerList:(NSMutableArray *)arg1 ;
-(void)setRootLevelTensorNodes:(NSMutableArray *)arg1 ;
-(void)setLayerParentMap:(NSMutableDictionary *)arg1 ;
-(void)setLayerChildMap:(NSMutableDictionary *)arg1 ;
@end

