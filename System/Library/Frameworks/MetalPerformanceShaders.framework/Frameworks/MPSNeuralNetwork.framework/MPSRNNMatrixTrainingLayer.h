/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSMatrixMultiplication, NSMutableArray;

@interface MPSRNNMatrixTrainingLayer : MPSKernel {

	int layerType;
	void* layer;
	MPSMatrixMultiplication* gemmKernel;
	MPSMatrixMultiplication* gemmKernel_noAccumulate;
	MPSMatrixMultiplication* gemmKernelNonTranspose;
	MPSMatrixMultiplication* gemmKernelNonTranspose_noAccumulate;
	MPSMatrixMultiplication* gemmKernelTN;
	MPSMatrixMultiplication* gemmKernelTN_accumulate;
	NSMutableArray* weightDescriptors;
	BOOL _recurrentOutputIsTemporary;
	BOOL _trainingStateIsTemporary;
	BOOL _storeAllIntermediateStates;
	BOOL _accumulateWeightGradients;
	BOOL _propagateFullRecurrentRows;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;

}

@property (assign,nonatomic) BOOL propagateFullRecurrentRows;                         //@synthesize propagateFullRecurrentRows=_propagateFullRecurrentRows - In the implementation block
@property (nonatomic,readonly) unsigned long long inputFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) BOOL storeAllIntermediateStates;                         //@synthesize storeAllIntermediateStates=_storeAllIntermediateStates - In the implementation block
@property (assign,nonatomic) BOOL recurrentOutputIsTemporary;                         //@synthesize recurrentOutputIsTemporary=_recurrentOutputIsTemporary - In the implementation block
@property (assign,nonatomic) BOOL trainingStateIsTemporary;                           //@synthesize trainingStateIsTemporary=_trainingStateIsTemporary - In the implementation block
@property (assign,nonatomic) BOOL accumulateWeightGradients;                          //@synthesize accumulateWeightGradients=_accumulateWeightGradients - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)outputFeatureChannels;
-(BOOL)storeAllIntermediateStates;
-(BOOL)recurrentOutputIsTemporary;
-(void)setRecurrentOutputIsTemporary:(BOOL)arg1 ;
-(void)setStoreAllIntermediateStates:(BOOL)arg1 ;
-(BOOL)propagateFullRecurrentRows;
-(void)setPropagateFullRecurrentRows:(BOOL)arg1 ;
-(void)encodeForwardSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 sourceOffsets:(unsigned long long*)arg3 destinationMatrices:(id)arg4 destinationOffsets:(unsigned long long*)arg5 trainingStates:(id)arg6 recurrentInputState:(id)arg7 recurrentOutputStates:(id)arg8 weights:(id)arg9 ;
-(void)encodeGradientSequenceToCommandBuffer:(id)arg1 forwardSources:(id)arg2 forwardSourceOffsets:(unsigned long long*)arg3 sourceGradients:(id)arg4 sourceGradientOffsets:(unsigned long long*)arg5 destinationGradients:(id)arg6 destinationOffsets:(unsigned long long*)arg7 weightGradients:(id)arg8 trainingStates:(id)arg9 recurrentInputState:(id)arg10 recurrentOutputStates:(id)arg11 weights:(id)arg12 ;
-(id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2 trainableWeights:(id)arg3 ;
-(void)createWeightGradientMatrices:(id)arg1 dataType:(unsigned)arg2 ;
-(void)createTemporaryWeightGradientMatrices:(id)arg1 dataType:(unsigned)arg2 commandBuffer:(id)arg3 ;
-(void)createWeightMatrices:(id)arg1 ;
-(void)encodeCopyWeightsToCommandBuffer:(id)arg1 weights:(id)arg2 matrixId:(unsigned long long)arg3 matrix:(id)arg4 copyFromWeightsToMatrix:(BOOL)arg5 matrixOffset:(MPSImageCoordinate)arg6 ;
-(void)encodeForwardSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 destinationMatrices:(id)arg3 trainingStates:(id)arg4 weights:(id)arg5 ;
-(void)encodeGradientSequenceToCommandBuffer:(id)arg1 forwardSources:(id)arg2 sourceGradients:(id)arg3 destinationGradients:(id)arg4 weightGradients:(id)arg5 trainingStates:(id)arg6 weights:(id)arg7 ;
-(id)recurrentStateForBatchSize:(unsigned long long)arg1 forGradientPass:(BOOL)arg2 ;
-(id)temporaryRecurrentStateForCommandBuffer:(id)arg1 batchSize:(unsigned long long)arg2 forGradientPass:(BOOL)arg3 ;
-(BOOL)trainingStateIsTemporary;
-(void)setTrainingStateIsTemporary:(BOOL)arg1 ;
-(BOOL)accumulateWeightGradients;
-(void)setAccumulateWeightGradients:(BOOL)arg1 ;
@end

