/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVSpeechSynthesisVoice, NSString, NSAttributedString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {

	AVSpeechSynthesisVoice* _voice;
	BOOL _prefersAssistiveTechnologySettings;
	float _rate;
	float _pitchMultiplier;
	float _volume;
	NSString* _speechString;
	NSAttributedString* _attributedSpeechString;
	double _preUtteranceDelay;
	double _postUtteranceDelay;

}

@property (assign,nonatomic) BOOL processEmoticons; 
@property (assign,nonatomic) BOOL useMonarchStyleSpeechRate; 
@property (nonatomic,copy) id audioBufferCallback; 
@property (nonatomic,retain) NSString * speechString;                                  //@synthesize speechString=_speechString - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedSpeechString;              //@synthesize attributedSpeechString=_attributedSpeechString - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesisVoice * voice;                           //@synthesize voice=_voice - In the implementation block
@property (assign,nonatomic) float rate;                                               //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitchMultiplier;                                    //@synthesize pitchMultiplier=_pitchMultiplier - In the implementation block
@property (assign,nonatomic) float volume;                                             //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL prefersAssistiveTechnologySettings;                  //@synthesize prefersAssistiveTechnologySettings=_prefersAssistiveTechnologySettings - In the implementation block
@property (assign,nonatomic) double preUtteranceDelay;                                 //@synthesize preUtteranceDelay=_preUtteranceDelay - In the implementation block
@property (assign,nonatomic) double postUtteranceDelay;                                //@synthesize postUtteranceDelay=_postUtteranceDelay - In the implementation block
+(id)speechUtteranceWithString:(id)arg1 ;
+(id)speechUtteranceWithAttributedString:(id)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)speechUtteranceWithString:(id)arg1 ;
+(id)speechUtteranceWithAttributedString:(id)arg1 ;
+(id)speechUtteranceWithSSMLRepresentation:(id)arg1 ;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setAudioBufferCallback:(id)arg1 ;
-(id)audioBufferCallback;
-(BOOL)useMonarchStyleSpeechRate;
-(void)setUseMonarchStyleSpeechRate:(BOOL)arg1 ;
-(void)setProcessEmoticons:(BOOL)arg1 ;
-(BOOL)processEmoticons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(AVSpeechSynthesisVoice *)voice;
-(void)setVoice:(AVSpeechSynthesisVoice *)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)initWithSSMLRepresentation:(id)arg1 ;
-(void)setPitchMultiplier:(float)arg1 ;
-(NSString *)speechString;
-(void)setSpeechString:(NSString *)arg1 ;
-(NSAttributedString *)attributedSpeechString;
-(void)setAttributedSpeechString:(NSAttributedString *)arg1 ;
-(float)pitchMultiplier;
-(BOOL)prefersAssistiveTechnologySettings;
-(void)setPrefersAssistiveTechnologySettings:(BOOL)arg1 ;
-(double)preUtteranceDelay;
-(void)setPreUtteranceDelay:(double)arg1 ;
-(double)postUtteranceDelay;
-(void)setPostUtteranceDelay:(double)arg1 ;
@end

