/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioSampleRateConverter : NSObject {

	OpaqueAudioConverterRef _sampleRateConverter;
	float _outBufferScaleFactor;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;

}
+(id)upsampler;
+(id)downsampler;
-(void)dealloc;
-(id)convertSampleRateOfBuffer:(id)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(OpaqueAudioConverterRef)_createSampleRateConverterWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
@end
