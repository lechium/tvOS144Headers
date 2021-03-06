/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPULSTM : _MLCGPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 descriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 ;
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 biasTerms:(id)arg5 ;
+(void)setOptimizerDataForMomentumMatrices:(id)arg1 velocityMatrices:(id)arg2 centerWeightMatrices:(id)arg3 momentumArray:(id)arg4 velocityArray:(id)arg5 centerWeightArray:(id)arg6 accumulatorIndex:(unsigned long long)arg7 matrixId:(unsigned long long)arg8 weight:(id)arg9 device:(id)arg10 deviceOps:(id)arg11 deviceNumber:(unsigned long long)arg12 lstmNumber:(unsigned long long)arg13 isRecurrent:(BOOL)arg14 ;
+(void)setBiasOptimizerDataForMomentumMatrices:(id)arg1 velocityMatrices:(id)arg2 centerWeightMatrices:(id)arg3 momentumArray:(id)arg4 velocityArray:(id)arg5 centerWeightArray:(id)arg6 accumulatorIndex:(unsigned long long)arg7 matrixId:(unsigned long long)arg8 bias:(id)arg9 device:(id)arg10 deviceOps:(id)arg11 deviceNumber:(unsigned long long)arg12 lstmNumber:(unsigned long long)arg13 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 ;
@end

