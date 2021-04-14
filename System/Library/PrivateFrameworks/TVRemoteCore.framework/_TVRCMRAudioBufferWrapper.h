/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/_TVRCAudioBuffer.h>

@class NSString;

@interface _TVRCMRAudioBufferWrapper : NSObject <_TVRCAudioBuffer> {

	void* _buffer;
	float _gain;
	double _sampleRate;
	double _timestamp;

}

@property (assign,nonatomic) unsigned long long packetCount; 
@property (assign,nonatomic) double sampleRate;                           //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float gain;                                  //@synthesize gain=_gain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)gain;
-(void)setGain:(float)arg1 ;
-(unsigned long long)packetCount;
-(void)setPacketCount:(unsigned long long)arg1 ;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(void*)audioBuffer;
-(void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
@end

