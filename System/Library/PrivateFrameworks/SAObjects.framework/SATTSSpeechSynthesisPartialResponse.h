/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAudioData, SATTSSpeechSynthesisAudioInfo;

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAudioData * aceAudioData; 
@property (nonatomic,retain) SATTSSpeechSynthesisAudioInfo * aceAudioInfo; 
@property (assign,nonatomic) long long currentPacketNumber; 
+(id)speechSynthesisPartialResponse;
+(id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAUIAudioData *)aceAudioData;
-(void)setAceAudioData:(SAUIAudioData *)arg1 ;
-(SATTSSpeechSynthesisAudioInfo *)aceAudioInfo;
-(void)setAceAudioInfo:(SATTSSpeechSynthesisAudioInfo *)arg1 ;
-(long long)currentPacketNumber;
-(void)setCurrentPacketNumber:(long long)arg1 ;
@end

