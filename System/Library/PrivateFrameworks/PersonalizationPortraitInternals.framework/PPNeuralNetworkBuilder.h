/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData, NSMutableArray;

@interface PPNeuralNetworkBuilder : NSObject {

	unsigned long long _prevSize;
	unsigned long long _nlayers;
	NSMutableData* _descriptors;
	NSMutableArray* _weightsAndBiases;
	BOOL _haveOutputLayer;
	BOOL _done;

}
-(id)init;
-(id)serialize;
-(id)initWithInputSize:(unsigned long long)arg1 ;
-(void)addHiddenLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 skip:(BOOL)arg5 ;
-(void)addOutputLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 softmax:(BOOL)arg5 ;
@end
