/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageString; 
@property (nonatomic,copy) NSString * masteredVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * quality; 
@property (assign,nonatomic) long long resourceContentVersion; 
@property (nonatomic,copy) NSString * resourceMasteredVersion; 
@property (assign,nonatomic) long long voiceContentVersion; 
@property (nonatomic,copy) NSString * voiceType; 
+(id)voice;
+(id)voiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setQuality:(NSString *)arg1 ;
-(NSString *)quality;
-(id)encodedClassName;
-(NSString *)languageString;
-(void)setLanguageString:(NSString *)arg1 ;
-(NSString *)masteredVersion;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(long long)resourceContentVersion;
-(void)setResourceContentVersion:(long long)arg1 ;
-(NSString *)resourceMasteredVersion;
-(void)setResourceMasteredVersion:(NSString *)arg1 ;
-(long long)voiceContentVersion;
-(void)setVoiceContentVersion:(long long)arg1 ;
-(NSString *)voiceType;
-(void)setVoiceType:(NSString *)arg1 ;
@end
