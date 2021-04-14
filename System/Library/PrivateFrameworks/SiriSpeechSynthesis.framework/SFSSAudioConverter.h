/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@interface SFSSAudioConverter : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _srcAsbd;
	AudioStreamBasicDescription _dstAsbd;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)reset;
-(id)convertChunks:(id)arg1 srcAsbd:(AudioStreamBasicDescription)arg2 dstAsbd:(AudioStreamBasicDescription)arg3 outError:(id*)arg4 ;
-(id)createAudioConverter:(AudioStreamBasicDescription)arg1 dstAsbd:(AudioStreamBasicDescription)arg2 ;
@end

