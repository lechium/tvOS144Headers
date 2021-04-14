/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNNGradientState.h>
#import <MPSNeuralNetwork/MPSImageSizeEncodingState.h>

@protocol MTLBuffer;
@class MPSCNNConvolution, NSString;

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState> {

	BOOL _initialized;
	MPSCNNConvolution* _convolution;
	id<MTLBuffer> _intermediateWeightsBuffer;
	id<MTLBuffer> _intermeidateBiasesBuffer;
	unsigned long long _numReductionBlocks;
	BOOL _needReductionInN;
	BOOL _needReductionInXY;
	unsigned _weightsLayout;
	unsigned long long _dimSizeN;

}

@property (nonatomic,readonly) unsigned long long numberOfWeightGradients; 
@property (nonatomic,readonly) unsigned long long numberOfBiasGradients; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForWeights; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForBiases; 
@property (nonatomic,retain,readonly) MPSCNNConvolution * convolution;                  //@synthesize convolution=_convolution - In the implementation block
@property (nonatomic,readonly) unsigned gradientForWeightsLayout; 
@property (nonatomic,readonly) unsigned long long sourceWidth; 
@property (nonatomic,readonly) unsigned long long sourceHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(NSString *)debugDescription;
-(void)dealloc;
-(id)initWithResource:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(MPSCNNConvolution *)convolution;
-(id)initWithResource:(id)arg1 weightsLayout:(unsigned)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(unsigned long long)sourceWidth;
-(unsigned long long)sourceHeight;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
-(id<MTLBuffer>)gradientForWeights;
-(id<MTLBuffer>)gradientForBiases;
-(unsigned long long)numberOfWeightGradients;
-(unsigned)gradientForWeightsLayout;
-(unsigned long long)numberOfBiasGradients;
@end
