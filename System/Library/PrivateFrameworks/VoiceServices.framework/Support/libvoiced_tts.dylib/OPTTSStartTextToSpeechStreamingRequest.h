/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, OPTTSTextToSpeechRequestMeta;

@interface OPTTSStartTextToSpeechStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const StartTextToSpeechStreamingRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * stream_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) NSString * voice_name; 
@property (nonatomic,readonly) NSArray * context_info; 
@property (nonatomic,readonly) long long preferred_voice_type; 
@property (nonatomic,readonly) OPTTSTextToSpeechRequestMeta * meta_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)gender;
-(NSString *)text;
-(NSString *)language;
-(NSString *)stream_id;
-(NSString *)speech_id;
-(NSString *)session_id;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(NSArray *)context_info;
-(long long)preferred_voice_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartTextToSpeechStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartTextToSpeechStreamingRequest*)arg2 ;
@end

