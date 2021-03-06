/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MLCEngineDispatch <NSObject>
@required
-(void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7;
-(void)dispatchForwardSliceLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4 forTraining:(BOOL)arg5;
-(void)dispatchForwardLayerWithStates:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultStateIsTemporary:(BOOL)arg6 resultTensorAllocate:(BOOL)arg7 forTraining:(BOOL)arg8;
-(void)dispatchForwardLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultStateIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9 forTraining:(BOOL)arg10;
-(void)dispatchForwardMHALayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchForwardReshapeLayerWithDeviceOps:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 keepsState:(BOOL)arg7;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3;
-(void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3;
-(void)dispatchForwardConcatLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
-(void)dispatchGradientConcatLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3;
-(void)dispatchForwardLayerNormalizationLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7;
-(void)dispatchGradientLayerNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchForwardEmbeddingLayer:(id)arg1 weight:(id)arg2 sourceTensor:(id)arg3 resultTensor:(id)arg4;
-(void)dispatchGradientEmbeddingLayer:(id)arg1 sourceGradientTensor:(id)arg2;
-(void)dispatchForwardSliceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4;
-(void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
-(void)dispatchForwardLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8;
-(void)dispatchForwardLayerBatchNormalizationWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
-(void)dispatchForwardMatMulLayer:(id)arg1 sourceTensor:(id)arg2 secondarySourceTensor:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
-(void)dispatchGradientMatMulLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
-(void)dispatchForwardMHALayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchGradientMHALayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6;
-(void)dispatchGradientReshapeLayerWithDeviceOps:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchGradientSliceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorAllocate:(BOOL)arg4;
-(void)dispatchGradientBatchNormalizationLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultGradientTensor:(id)arg6 resultTensorIsTemporary:(BOOL)arg7 resultTensorAllocate:(BOOL)arg8;
-(void)dispatchInitialGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchForwardAndGradientLossLayerWithStates:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultGradientTensor:(id)arg7 resultTensorIsTemporary:(BOOL)arg8 resultTensorAllocate:(BOOL)arg9;
-(void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchRNNForwardLayerWithStates:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7;
-(void)dispatchRNNGradientLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)incrementReadCountForTensorDeviceMemory:(id)arg1 increment:(long long)arg2;
-(void)incrementReadCountForGradientState:(id)arg1 increment:(long long)arg2;
-(void)dispatchForwardSoftmaxLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;
-(void)dispatchForwardSoftmaxLayerWithStates:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultStateIsTemporary:(BOOL)arg5 resultTensorAllocate:(BOOL)arg6 forTraining:(BOOL)arg7;
-(void)dispatchGradientSoftmaxLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(BOOL)arg4 resultTensorAllocate:(BOOL)arg5;

@end

