/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUFullyConnected : _MLCCPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 opType:(int)arg6 ;
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 fusedBatchNormAndNeuronLayers:(BOOL)arg6 mean:(id)arg7 variance:(id)arg8 beta:(id)arg9 gamma:(id)arg10 varianceEpsilon:(float)arg11 momentum:(float)arg12 opType:(int)arg13 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 fusedBatchNormAndNeuron:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 fusedBatchNormAndNeuronLayers:(BOOL)arg6 mean:(id)arg7 variance:(id)arg8 beta:(id)arg9 gamma:(id)arg10 varianceEpsilon:(float)arg11 momentum:(float)arg12 opType:(int)arg13 ;
@end

