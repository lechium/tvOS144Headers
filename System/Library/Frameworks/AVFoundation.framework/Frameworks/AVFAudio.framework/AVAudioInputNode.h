/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVAudioIONode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (assign,getter=isVoiceProcessingBypassed,nonatomic) BOOL voiceProcessingBypassed; 
@property (assign,getter=isVoiceProcessingAGCEnabled,nonatomic) BOOL voiceProcessingAGCEnabled; 
@property (assign,getter=isVoiceProcessingInputMuted,nonatomic) BOOL voiceProcessingInputMuted; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)setManualRenderingInputPCMFormat:(id)arg1 inputBlock:(/*^block*/id)arg2 ;
-(BOOL)isVoiceProcessingBypassed;
-(void)setVoiceProcessingBypassed:(BOOL)arg1 ;
-(BOOL)isVoiceProcessingAGCEnabled;
-(void)setVoiceProcessingAGCEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceProcessingInputMuted;
-(void)setVoiceProcessingInputMuted:(BOOL)arg1 ;
@end

