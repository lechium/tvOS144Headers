/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@protocol MPSNNLossCallback, MTLTexture;
@class MPSMatrix;

@interface MPSNNLossGradient : MPSCNNBinaryKernel {

	BOOL _reduceAcrossBatch;
	id<MPSNNLossCallback> _propertyCallback;
	MPSMatrix* _reductionBuffer;
	id<MTLTexture> _firstLossGradientImage;
	BOOL _computeLabelGradients;
	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	unsigned long long _numberOfClasses;

}

@property (nonatomic,readonly) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) BOOL reduceAcrossBatch;                          //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (assign,nonatomic) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) float labelSmoothing;                              //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (assign,nonatomic) float epsilon;                                     //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) float delta;                                       //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) BOOL computeLabelGradients;                        //@synthesize computeLabelGradients=_computeLabelGradients - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(unsigned)lossType;
-(int)reductionType;
-(float)labelSmoothing;
-(unsigned long long)numberOfClasses;
-(BOOL)reduceAcrossBatch;
-(void)setComputeLabelGradients:(BOOL)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 labels:(id)arg4 weights:(id)arg5 sourceStates:(id)arg6 destinationGradients:(id)arg7 ;
-(void)setLabelSmoothing:(float)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 labels:(id)arg4 weights:(id)arg5 sourceStates:(id)arg6 ;
-(BOOL)computeLabelGradients;
@end

