/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSState.h>

@interface MPSCNNNormalizationMeanAndVarianceState : MPSState {

	BOOL _initialized;

}

@property (nonatomic,readonly) id<MTLBuffer> mean; 
@property (nonatomic,readonly) id<MTLBuffer> variance; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id<MTLBuffer>)mean;
-(id<MTLBuffer>)variance;
-(id)initWithMean:(id)arg1 variance:(id)arg2 ;
@end
