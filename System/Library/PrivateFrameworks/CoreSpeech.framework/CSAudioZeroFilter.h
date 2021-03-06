/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioZeroFilter : NSObject {

	unique_ptr<CSAudioZeroFilterImpl<float>, std::__1::default_delete<CSAudioZeroFilterImpl<float> > >* _audioZeroFilterImpl;

}
-(id)metrics;
-(id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(float)arg2 numHostTicksPerAudioSample:(double)arg3 ;
-(unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id*)arg3 ;
-(unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id*)arg1 ;
@end

