/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * clientVoiceKeyList; 
@property (nonatomic,retain) SATTSSpeechSynthesisVoice * filteredVoiceKey; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchSpeechSynthesisVoiceRequest;
+(id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)clientVoiceKeyList;
-(void)setClientVoiceKeyList:(NSArray *)arg1 ;
-(SATTSSpeechSynthesisVoice *)filteredVoiceKey;
-(void)setFilteredVoiceKey:(SATTSSpeechSynthesisVoice *)arg1 ;
@end
