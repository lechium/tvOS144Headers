/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <SiriSpeechSynthesis/OPTTSTextToSpeechRouterStreamingStreamingRequest.h>

@class OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) OPTTSStartTextToSpeechStreamingRequest * contentAsOPTTSStartTextToSpeechStreamingRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setContent_type:(long long)arg1 ;
-(void)setContentAsOPTTSStartTextToSpeechStreamingRequest:(OPTTSStartTextToSpeechStreamingRequest *)arg1 ;
-(long long)content_type;
-(OPTTSStartTextToSpeechStreamingRequest *)contentAsOPTTSStartTextToSpeechStreamingRequest;
@end
