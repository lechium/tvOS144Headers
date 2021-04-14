/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>

@interface AVAudioIONode : AVAudioNode

@property (nonatomic,readonly) double presentationLatency; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit; 
@property (getter=isVoiceProcessingEnabled,nonatomic,readonly) BOOL voiceProcessingEnabled; 
-(id)initWithIOUnit:(AVAudioIOUnit*)arg1 isInput:(BOOL)arg2 ;
-(double)presentationLatency;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 error:(id*)arg2 ;
-(BOOL)isInManualRenderingMode;
-(long long)manualRenderingMode;
-(BOOL)setVoiceProcessingEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isVoiceProcessingEnabled;
-(BOOL)enableManualRenderingMode:(long long)arg1 isInput:(BOOL)arg2 ;
-(BOOL)enableRealtimeRenderingModeWithIOUnit:(AVAudioIOUnit*)arg1 isInput:(BOOL)arg2 forceIOUnitReset:(BOOL)arg3 ;
@end

