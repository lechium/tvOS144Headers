//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioZeroFilter : NSObject
{
    struct unique_ptr<CSAudioZeroFilterImpl<float>, std::__1::default_delete<CSAudioZeroFilterImpl<float>>> _audioZeroFilterImpl;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000010001f0e4
- (void).cxx_destruct;	// IMP=0x000000010001f0d0
- (id)metrics;	// IMP=0x000000010001ec80
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)arg1;	// IMP=0x000000010001ea0c
- (unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id *)arg3;	// IMP=0x000000010001e464
- (id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(float)arg2 numHostTicksPerAudioSample:(double)arg3;	// IMP=0x000000010001e394

@end
