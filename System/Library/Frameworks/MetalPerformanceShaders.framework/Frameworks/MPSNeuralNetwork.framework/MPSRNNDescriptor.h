/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPSCNNConvolutionDataSource;
@interface MPSRNNDescriptor : NSObject {

	BOOL _useLayerInputUnitTransformMode;
	BOOL _useFloat32Weights;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	id<MPSCNNConvolutionDataSource> _inputTransform;
	id<MPSCNNConvolutionDataSource> _outputTransform;
	id<MPSCNNConvolutionDataSource> _recurrentOutputTransform;
	unsigned long long _layerSequenceDirection;
	unsigned long long _internalKernelSelector;

}

@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputTransform;                        //@synthesize inputTransform=_inputTransform - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputTransform;                       //@synthesize outputTransform=_outputTransform - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentOutputTransform;              //@synthesize recurrentOutputTransform=_recurrentOutputTransform - In the implementation block
@property (assign,nonatomic) unsigned long long internalKernelSelector;                             //@synthesize internalKernelSelector=_internalKernelSelector - In the implementation block
@property (assign,nonatomic) unsigned long long inputFeatureChannels;                               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long outputFeatureChannels;                              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) BOOL useLayerInputUnitTransformMode;                                   //@synthesize useLayerInputUnitTransformMode=_useLayerInputUnitTransformMode - In the implementation block
@property (assign,nonatomic) BOOL useFloat32Weights;                                                //@synthesize useFloat32Weights=_useFloat32Weights - In the implementation block
@property (assign,nonatomic) unsigned long long layerSequenceDirection;                             //@synthesize layerSequenceDirection=_layerSequenceDirection - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)inputFeatureChannels;
-(void)setInputFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)outputFeatureChannels;
-(void)setOutputFeatureChannels:(unsigned long long)arg1 ;
-(id<MPSCNNConvolutionDataSource>)inputTransform;
-(void)setInputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)outputTransform;
-(void)setOutputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)recurrentOutputTransform;
-(void)setRecurrentOutputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(BOOL)useLayerInputUnitTransformMode;
-(void)setUseLayerInputUnitTransformMode:(BOOL)arg1 ;
-(unsigned long long)layerSequenceDirection;
-(void)setLayerSequenceDirection:(unsigned long long)arg1 ;
-(BOOL)useFloat32Weights;
-(void)setUseFloat32Weights:(BOOL)arg1 ;
-(unsigned long long)internalKernelSelector;
-(void)setInternalKernelSelector:(unsigned long long)arg1 ;
@end

