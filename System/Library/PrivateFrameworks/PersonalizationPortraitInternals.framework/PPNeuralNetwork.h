/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSData;

@interface PPNeuralNetwork : NSObject {

	NSData* _data;
	const char* _dataBytes;
	unsigned long long _nlayers;
	const SCD_Struct_PP16* _layers;

}

@property (nonatomic,readonly) unsigned long long inputSize; 
@property (nonatomic,readonly) unsigned long long outputSize; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)inputSize;
-(unsigned long long)outputSize;
-(double)predictWithDoubles:(const double*)arg1 ;
-(double)predictWithFloats:(const float*)arg1 ;
-(float*)_runOnInputs:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(double)_predict:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(void)forInputs:(const float*)arg1 computeOutputLayer:(float*)arg2 ;
@end
