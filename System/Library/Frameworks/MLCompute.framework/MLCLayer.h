/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayerCompiling.h>

@class NSString, MLCDevice, NSArray, NSMutableArray, MLCControlTreeNode;

@interface MLCLayer : NSObject <MLCLayerCompiling> {

	BOOL _isDebuggingEnabled;
	BOOL _skipLayer;
	BOOL _allocateGradientTensors;
	BOOL _isLastFusedLayer;
	BOOL _disableUpdate;
	BOOL _isUpdatable;
	BOOL _isTrainable;
	BOOL _zeroIntermediateGradientTensors;
	BOOL _compileForInferenceOnly;
	int _paddingPolicy;
	unsigned long long _layerID;
	NSString* _label;
	NSString* _originalLabel;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	unsigned long long _strideInX;
	unsigned long long _strideInY;
	unsigned long long _paddingSizeInX;
	unsigned long long _paddingSizeInY;
	MLCDevice* _device;
	NSArray* _deviceOps;
	NSMutableArray* _sourceTensors;
	NSMutableArray* _resultTensors;
	NSMutableArray* _sourceGradientTensors;
	NSMutableArray* _resultGradientTensors;
	NSMutableArray* _fusedLayers;
	MLCLayer* _intermediateSumLayer;
	NSMutableArray* _intermediateGradientTensors;
	unsigned long long _intermediateGradientTensorIndex;
	MLCControlTreeNode* _conditionalTreeNode;

}

@property (assign,nonatomic) unsigned long long layerID;                                      //@synthesize layerID=_layerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalLabel;                                 //@synthesize originalLabel=_originalLabel - In the implementation block
@property (assign,nonatomic) unsigned long long kernelWidth;                                  //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;                                 //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInX;                              //@synthesize dilationRateInX=_dilationRateInX - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateInY;                              //@synthesize dilationRateInY=_dilationRateInY - In the implementation block
@property (assign,nonatomic) unsigned long long strideInX;                                    //@synthesize strideInX=_strideInX - In the implementation block
@property (assign,nonatomic) unsigned long long strideInY;                                    //@synthesize strideInY=_strideInY - In the implementation block
@property (assign,nonatomic) unsigned long long paddingSizeInX;                               //@synthesize paddingSizeInX=_paddingSizeInX - In the implementation block
@property (assign,nonatomic) unsigned long long paddingSizeInY;                               //@synthesize paddingSizeInY=_paddingSizeInY - In the implementation block
@property (nonatomic,retain) MLCDevice * device;                                              //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSArray * deviceOps;                                             //@synthesize deviceOps=_deviceOps - In the implementation block
@property (assign,nonatomic) BOOL skipLayer;                                                  //@synthesize skipLayer=_skipLayer - In the implementation block
@property (assign,nonatomic) BOOL allocateGradientTensors;                                    //@synthesize allocateGradientTensors=_allocateGradientTensors - In the implementation block
@property (assign,nonatomic) BOOL isLastFusedLayer;                                           //@synthesize isLastFusedLayer=_isLastFusedLayer - In the implementation block
@property (assign,nonatomic) BOOL disableUpdate;                                              //@synthesize disableUpdate=_disableUpdate - In the implementation block
@property (assign,nonatomic) BOOL isUpdatable;                                                //@synthesize isUpdatable=_isUpdatable - In the implementation block
@property (assign,nonatomic) BOOL isTrainable;                                                //@synthesize isTrainable=_isTrainable - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceTensors;                                  //@synthesize sourceTensors=_sourceTensors - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultTensors;                                  //@synthesize resultTensors=_resultTensors - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceGradientTensors;                          //@synthesize sourceGradientTensors=_sourceGradientTensors - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultGradientTensors;                          //@synthesize resultGradientTensors=_resultGradientTensors - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * fusedLayers;                           //@synthesize fusedLayers=_fusedLayers - In the implementation block
@property (nonatomic,retain) MLCLayer * intermediateSumLayer;                                 //@synthesize intermediateSumLayer=_intermediateSumLayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * intermediateGradientTensors;                    //@synthesize intermediateGradientTensors=_intermediateGradientTensors - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateGradientTensorIndex;              //@synthesize intermediateGradientTensorIndex=_intermediateGradientTensorIndex - In the implementation block
@property (assign,nonatomic) BOOL zeroIntermediateGradientTensors;                            //@synthesize zeroIntermediateGradientTensors=_zeroIntermediateGradientTensors - In the implementation block
@property (assign,nonatomic) BOOL compileForInferenceOnly;                                    //@synthesize compileForInferenceOnly=_compileForInferenceOnly - In the implementation block
@property (nonatomic,retain) MLCControlTreeNode * conditionalTreeNode;                        //@synthesize conditionalTreeNode=_conditionalTreeNode - In the implementation block
@property (nonatomic,readonly) BOOL isFirstLayer; 
@property (nonatomic,readonly) BOOL isLastLayer; 
@property (nonatomic,readonly) NSString * summarizedDOTDescription; 
@property (assign,nonatomic) int paddingPolicy;                                               //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (nonatomic,copy) NSString * label;                                                  //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL isDebuggingEnabled;                                         //@synthesize isDebuggingEnabled=_isDebuggingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
-(NSString *)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(MLCDevice *)device;
-(void)setDevice:(MLCDevice *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(int)paddingPolicy;
-(void)setPaddingPolicy:(int)arg1 ;
-(unsigned long long)strideInX;
-(void)setStrideInX:(unsigned long long)arg1 ;
-(unsigned long long)strideInY;
-(void)setStrideInY:(unsigned long long)arg1 ;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(BOOL)isDebuggingEnabled;
-(BOOL)isUpdatable;
-(void)setIsUpdatable:(BOOL)arg1 ;
-(NSMutableArray *)sourceTensors;
-(NSArray *)deviceOps;
-(void)setDeviceOps:(NSArray *)arg1 ;
-(unsigned long long)paddingSizeInX;
-(unsigned long long)paddingSizeInY;
-(unsigned long long)dilationRateInX;
-(unsigned long long)dilationRateInY;
-(NSMutableArray *)fusedLayers;
-(void)bindDevice:(id)arg1 deviceOps:(id)arg2 ;
-(MLCControlTreeNode *)conditionalTreeNode;
-(NSMutableArray *)resultTensors;
-(unsigned long long)layerID;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(NSString *)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isValidTrainingParameters;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(void)setDilationRateInX:(unsigned long long)arg1 ;
-(void)setDilationRateInY:(unsigned long long)arg1 ;
-(void)setPaddingSizeInX:(unsigned long long)arg1 ;
-(void)setPaddingSizeInY:(unsigned long long)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(BOOL)isLastLayer;
-(BOOL)skipLayer;
-(void)setSkipLayer:(BOOL)arg1 ;
-(void)setLayerID:(unsigned long long)arg1 ;
-(NSString *)originalLabel;
-(BOOL)isTrainable;
-(NSMutableArray *)intermediateGradientTensors;
-(NSMutableArray *)sourceGradientTensors;
-(BOOL)isFirstLayer;
-(MLCLayer *)intermediateSumLayer;
-(void)setIsDebuggingEnabled:(BOOL)arg1 isPrivate:(BOOL)arg2 ;
-(BOOL)compileForInferenceOnly;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 ;
-(void)assignLayerID:(unsigned long long)arg1 ;
-(void)resetLayerID;
-(unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(unsigned long long)deviceMemorySizeForForward;
-(id)getDeviceForTraining;
-(id)getDeviceForInference;
-(void)setIsDebuggingEnabled:(BOOL)arg1 ;
-(BOOL)isStaticBatchSize;
-(BOOL)isGradientNeededForTensor:(id)arg1 ;
-(BOOL)isTensorSharedAcrossMultipleTrainingLayers:(id)arg1 ;
-(void)allocateGradientsForParameters;
-(BOOL)allocateGradientTensors;
-(void)setAllocateGradientTensors:(BOOL)arg1 ;
-(BOOL)isLastFusedLayer;
-(void)setIsLastFusedLayer:(BOOL)arg1 ;
-(BOOL)disableUpdate;
-(void)setDisableUpdate:(BOOL)arg1 ;
-(void)setIsTrainable:(BOOL)arg1 ;
-(void)setSourceTensors:(NSMutableArray *)arg1 ;
-(void)setResultTensors:(NSMutableArray *)arg1 ;
-(void)setSourceGradientTensors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultGradientTensors;
-(void)setResultGradientTensors:(NSMutableArray *)arg1 ;
-(void)setIntermediateSumLayer:(MLCLayer *)arg1 ;
-(void)setIntermediateGradientTensors:(NSMutableArray *)arg1 ;
-(unsigned long long)intermediateGradientTensorIndex;
-(void)setIntermediateGradientTensorIndex:(unsigned long long)arg1 ;
-(BOOL)zeroIntermediateGradientTensors;
-(void)setZeroIntermediateGradientTensors:(BOOL)arg1 ;
-(void)setCompileForInferenceOnly:(BOOL)arg1 ;
-(void)setConditionalTreeNode:(MLCControlTreeNode *)arg1 ;
@end

