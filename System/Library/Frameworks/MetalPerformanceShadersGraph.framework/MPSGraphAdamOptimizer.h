/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalPerformanceShadersGraph/MPSGraphOptimizer.h>

@class MPSGraphTensor, MPSGraphVariableOp;

@interface MPSGraphAdamOptimizer : MPSGraphOptimizer {

	MPSGraphTensor* _beta1Tensor;
	MPSGraphTensor* _beta2Tensor;
	MPSGraphTensor* _epsilonTensor;
	MPSGraphVariableOp* _iterationsVariable;

}
-(id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 variablesToGradientTensorMap:(id)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 trainableVariables:(id)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 beta1:(float)arg3 beta2:(float)arg4 epsilon:(float)arg5 iterations:(unsigned long long)arg6 trainableVariables:(id)arg7 variablesToGradientTensorMap:(id)arg8 name:(id)arg9 ;
-(id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 beta1:(float)arg4 beta2:(float)arg5 epsilon:(float)arg6 iterations:(unsigned long long)arg7 trainableVariables:(id)arg8 name:(id)arg9 ;
@end

