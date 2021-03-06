/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNNDefaultPadding.h>
#import <MPSNeuralNetwork/MPSNNPadding.h>

@class NSString;

@interface ExplicitZeroPadding : MPSNNDefaultPadding <MPSNNPadding> {

	unsigned long long _paddingLeft;
	unsigned long long _paddingRight;
	unsigned long long _paddingTop;
	unsigned long long _paddingBottom;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(unsigned long long)paddingMethod;
-(id)initWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4 ;
@end

