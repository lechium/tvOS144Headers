/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary;

@interface BWAudioConverterNode : BWNode {

	NSDictionary* _settings;
	OpaqueFigSampleBufferProcessorRef _audioCompressionSBP;

}

@property (nonatomic,readonly) NSDictionary * gaplessPlaybackInfo; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)settings;
-(void)setSettings:(id)arg1 ;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)_teardownAudioCompressionSBP;
-(int)_setupAudioCompressionSBPForInputFormat:(id)arg1 ;
-(void)_handleUpdatedRecordingSettings:(id)arg1 ;
-(void)acquireHardware;
-(void)relinquishHardware;
-(NSDictionary *)gaplessPlaybackInfo;
@end

