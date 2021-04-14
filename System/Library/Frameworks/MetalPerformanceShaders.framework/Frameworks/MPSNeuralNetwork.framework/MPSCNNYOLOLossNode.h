/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSNNLabelsNode, MPSCNNYOLOLossDescriptor;

@interface MPSCNNYOLOLossNode : MPSNNFilterNode {

	MPSNNLabelsNode* _labels;
	MPSCNNYOLOLossDescriptor* _descriptor;

}

@property (nonatomic,retain,readonly) MPSNNLabelsNode * inputLabels;              //@synthesize labels=_labels - In the implementation block
+(id)nodeWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(void)dealloc;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)initWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(MPSNNLabelsNode *)inputLabels;
@end

