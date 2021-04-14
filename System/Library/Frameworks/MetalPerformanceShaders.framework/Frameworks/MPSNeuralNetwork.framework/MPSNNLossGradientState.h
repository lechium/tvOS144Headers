/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNLossLabels;

@interface MPSNNLossGradientState : MPSNNGradientState {

	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	MPSCNNLossLabels* _lossLabels;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithResource:(id)arg1 ;
@end

