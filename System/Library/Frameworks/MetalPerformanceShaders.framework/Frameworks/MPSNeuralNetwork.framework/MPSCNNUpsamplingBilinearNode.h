/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode {

	double _scaleFactorX;
	double _scaleFactorY;
	BOOL _alignCorners;

}

@property (nonatomic,readonly) double scaleFactorX;              //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) double scaleFactorY;              //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
@property (nonatomic,readonly) BOOL alignCorners;                //@synthesize alignCorners=_alignCorners - In the implementation block
+(id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
+(id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(BOOL)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(double)scaleFactorX;
-(double)scaleFactorY;
-(BOOL)alignCorners;
-(id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
-(id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(BOOL)arg4 ;
@end

