/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, MPSCNNNeuron, MPSNNNeuronDescriptor;

@interface MPSCNNConvolutionDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _featureChannelsLayout;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;
	unsigned long long _groups;
	NSData* _batchNormalizationData;
	MPSCNNNeuron* _deprecated_neuron;
	unsigned long long _subPixelScaleFactor;
	unsigned long long _dilationRateX;
	unsigned long long _dilationRateY;
	BOOL _depthWiseConvolution;
	MPSNNNeuronDescriptor* _fusedNeuronDescriptor;
	MPSCNNNeuron* _neuron_deprecated;

}

@property (assign,nonatomic) unsigned long long featureChannelsLayout;                   //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (assign,nonatomic) unsigned long long kernelWidth;                             //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;                            //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (assign,nonatomic) unsigned long long inputFeatureChannels;                    //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long outputFeatureChannels;                   //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long strideInPixelsX;                         //@synthesize strideInPixelsX=_strideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long strideInPixelsY;                         //@synthesize strideInPixelsY=_strideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long groups;                                  //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateX;                           //@synthesize dilationRateX=_dilationRateX - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRateY;                           //@synthesize dilationRateY=_dilationRateY - In the implementation block
@property (nonatomic,retain) MPSNNNeuronDescriptor * fusedNeuronDescriptor;              //@synthesize fusedNeuronDescriptor=_fusedNeuronDescriptor - In the implementation block
@property (nonatomic,retain) MPSCNNNeuron * neuron;                                      //@synthesize neuron_deprecated=_neuron_deprecated - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 ;
+(id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5 ;
+(id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 postFilters:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)groups;
-(void)setGroups:(unsigned long long)arg1 ;
-(unsigned long long)featureChannelsLayout;
-(void)setFeatureChannelsLayout:(unsigned long long)arg1 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(unsigned long long)inputFeatureChannels;
-(void)setInputFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)outputFeatureChannels;
-(void)setOutputFeatureChannels:(unsigned long long)arg1 ;
-(void)setNeuronType:(int)arg1 ;
-(NeuronInfo)neuronInfo;
-(void)setStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setDilationRateX:(unsigned long long)arg1 ;
-(void)setDilationRateY:(unsigned long long)arg1 ;
-(int)neuronType;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4 ;
-(void)setNeuronToPReLUWithParametersA:(id)arg1 ;
-(MPSNNNeuronDescriptor *)fusedNeuronDescriptor;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
-(id)newDescriptorWithNeuronInfo:(NeuronInfo)arg1 ;
-(void)setBatchNormalizationParametersForInferenceWithMean:(const float*)arg1 variance:(const float*)arg2 gamma:(const float*)arg3 beta:(const float*)arg4 epsilon:(float)arg5 ;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(void)setFusedNeuronDescriptor:(MPSNNNeuronDescriptor *)arg1 ;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 ;
-(void)setNeuron:(MPSCNNNeuron *)arg1 ;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5 ;
-(void)setNeuronParameterA:(float)arg1 ;
-(void)setNeuronParameterB:(float)arg1 ;
-(void)setNeuronParameterC:(float)arg1 ;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 ;
-(BOOL)hasBatchNormData;
-(MPSCNNNeuron *)neuron;
@end

