//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioSampleRateConverter : NSObject
{
    struct OpaqueAudioConverter *_sampleRateConverter;	// 8 = 0x8
    float _outBufferScaleFactor;	// 16 = 0x10
    struct AudioStreamBasicDescription _inASBD;	// 24 = 0x18
    struct AudioStreamBasicDescription _outASBD;	// 64 = 0x40
}

+ (id)downsampler;	// IMP=0x00000001000071f8
+ (id)upsampler;	// IMP=0x0000000100007184
- (id)convertSampleRateOfBuffer:(id)arg1;	// IMP=0x0000000100007570
- (struct OpaqueAudioConverter *)_createSampleRateConverterWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x0000000100007374
- (void)dealloc;	// IMP=0x0000000100007324
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x000000010000726c

@end

