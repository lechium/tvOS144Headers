/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/OPTTSTextToSpeechRequestMeta.h>

@class NSString;

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (assign,nonatomic) long long channel_type; 
@property (nonatomic,copy) NSString * app_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setApp_id:(NSString *)arg1 ;
-(NSString *)app_id;
-(void)setChannel_type:(long long)arg1 ;
-(long long)channel_type;
@end

