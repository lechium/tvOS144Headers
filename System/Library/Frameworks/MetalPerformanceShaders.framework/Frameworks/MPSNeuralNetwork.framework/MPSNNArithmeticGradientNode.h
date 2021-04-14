/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSNNArithmeticGradientNode : MPSNNGradientFilterNode {

	float _primaryScale;
	float _secondaryScale;
	float _bias;
	unsigned long long _secondaryStrideInPixelsX;
	unsigned long long _secondaryStrideInPixelsY;
	unsigned long long _secondaryStrideInFeatureChannels;
	float _minimumValue;
	float _maximumValue;
	BOOL _isSecondarySourceFilter;

}

@property (assign,nonatomic) float primaryScale;                                               //@synthesize primaryScale=_primaryScale - In the implementation block
@property (assign,nonatomic) float secondaryScale;                                             //@synthesize secondaryScale=_secondaryScale - In the implementation block
@property (assign,nonatomic) float bias;                                                       //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsX;                      //@synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsY;                      //@synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInFeatureChannels;              //@synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels - In the implementation block
@property (assign,nonatomic) float minimumValue;                                               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                               //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) BOOL isSecondarySourceFilter;                                   //@synthesize isSecondarySourceFilter=_isSecondarySourceFilter - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 isSecondarySourceFilter:(BOOL)arg4 ;
-(float)bias;
-(void)setBias:(float)arg1 ;
-(float)primaryScale;
-(void)setPrimaryScale:(float)arg1 ;
-(float)secondaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(float)minimumValue;
-(void)setMinimumValue:(float)arg1 ;
-(float)maximumValue;
-(void)setMaximumValue:(float)arg1 ;
-(void)setSecondaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)secondaryStrideInFeatureChannels;
-(BOOL)isSecondarySourceFilter;
-(unsigned long long)secondaryStrideInPixelsX;
-(unsigned long long)secondaryStrideInPixelsY;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 isSecondarySourceFilter:(BOOL)arg4 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 isSecondarySourceFilter:(BOOL)arg3 ;
@end

