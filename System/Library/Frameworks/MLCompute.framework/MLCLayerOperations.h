/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MLCLayerOperations <NSObject>
@optional
-(id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;
-(BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
-(BOOL)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg1 beta:(id)arg2 gamma:(id)arg3;
-(id)fusedGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg1 featureChannelCount:(unsigned long long)arg2 groupCount:(unsigned long long)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6;
-(id)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10;
-(id)fusedFullyConnectedAndSoftmaxLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 softmaxOp:(int)arg4;
-(id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4;
-(BOOL)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg1 weights:(id)arg2 bias:(id)arg3;
-(id)createOptimizerDeviceDataForTensor:(id)arg1 optimizer:(id)arg2 optimizerData:(id)arg3 isVector:(BOOL)arg4;
-(id)concatLayerWithConcatDimension:(unsigned long long)arg1 sourceShapeCount:(unsigned long long)arg2;
-(id)matMulLayerWithDescriptor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 inferenceOnly:(BOOL)arg4;
-(id)optimizerSGDWithDescriptor:(id)arg1 momentunScale:(float)arg2 useNesterovMomentum:(BOOL)arg3;
-(id)optimizerAdamWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;
-(id)optimizerRMSPropWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(BOOL)arg5;
-(unsigned long long)allocatedDeviceDataSizeForTraining:(BOOL)arg1 layer:(id)arg2;
-(BOOL)setMHALayerOptimizerDataForDeviceOps:(id)arg1 optimizerDataForWeights:(id)arg2 optimizerDataForBias:(id)arg3;
-(BOOL)setLSTMLayerOptimizerDataForDeviceOps:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biasTerms:(id)arg4;
-(void)fuseLayersForTrainingGraph:(id)arg1;
-(void)fuseLayersForInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2;
-(id)fusedConvolutionAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4;
-(id)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10;
-(id)multiheadAttentionLayerWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(BOOL)arg5;
-(BOOL)compileOptimizerDeviceOps:(id)arg1;
-(id)splitLayerWithDimension:(unsigned long long)arg1;
-(id)sliceLayerWithbegin:(id)arg1 end:(id)arg2 stride:(id)arg3 inferenceOnly:(BOOL)arg4;
-(id)embeddingLayerWithDescriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3;
-(id)fusedInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6;
-(id)fusedLayerNormalizationAndNeuronLayerWithDescriptor:(id)arg1 normalizedShape:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5;
-(id)fusedConvolutionInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 neuronDescriptor:(id)arg6 weights:(id)arg7 biasTerms:(id)arg8;
-(id)fusedConvolutionGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 groupCount:(unsigned long long)arg6 neuronDescriptor:(id)arg7 weights:(id)arg8 biasTerms:(id)arg9;
-(id)fusedFullyConnectedGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 groupCount:(unsigned long long)arg8 neuronDescriptor:(id)arg9 weights:(id)arg10 biasTerms:(id)arg11;
-(BOOL)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3;
-(void)setConvolutionGradientComputeWeightsAndBiasOnly:(id)arg1;
-(void)setFullyConnectedGradientComputeWeightsAndBiasOnly:(id)arg1;
-(id)weightsGradients:(id)arg1;
-(id)biasesGradients:(id)arg1;
-(id)mhaWeightGradient:(id)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3;
-(id)mhaBiasGradient:(id)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3;
-(id)mhaAttnBiasGradient:(id)arg1 withSize:(unsigned long long)arg2 index:(unsigned long long)arg3;
-(id)lstmInputWeightGradient:(id)arg1 mlcWeightIndex:(unsigned long long)arg2;
-(id)lstmHiddenWeightGradient:(id)arg1 mlcWeightIndex:(unsigned long long)arg2;
-(id)lstmBiasGradient:(id)arg1 mlcBiasIndex:(unsigned long long)arg2;
-(id)betaGradients:(id)arg1;
-(id)gammaGradients:(id)arg1;
-(id)embeddingWeightsGradients:(id)arg1 embeddingCount:(unsigned long long)arg2 embeddingDimension:(unsigned long long)arg3;
-(void)allocateParameterGradientsForDeviceOps:(id)arg1 parameters:(id)arg2;

@required
-(id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
-(id)poolingLayerWithDescriptor:(id)arg1 paddingSizes:(unsigned long long*)arg2;
-(id)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6;
-(id)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5;
-(id)lossLayerWithDescriptor:(id)arg1;
-(id)fullyConnectedLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
-(id)convolutionLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
-(id)convolutionTransposeLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
-(id)neuronLayerWithDescriptor:(id)arg1;
-(id)layerNormalizationLayerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4;
-(id)instanceNormalizationLayerWithChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5;
-(id)arithmeticLayerWithOperation:(int)arg1;
-(id)compareLayerWithPredicate:(int)arg1;
-(id)reductionLayerWithReduceType:(int)arg1 dimension:(unsigned long long)arg2 sourceShapeCount:(unsigned long long)arg3;
-(id)softmaxLayerWithOperation:(int)arg1 dimension:(unsigned long long)arg2;
-(id)lossYOLOLayerWithDescriptor:(id)arg1;
-(id)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2;
-(id)reshapeLayerWithShape:(id)arg1;
-(id)transposeLayerWithShape:(id)arg1;
-(id)lstmLayerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7;
-(id)gramMatrixLayerWithScaleFactor:(float)arg1;
-(id)upsampleLayerWithScaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(BOOL)arg4;

@end

