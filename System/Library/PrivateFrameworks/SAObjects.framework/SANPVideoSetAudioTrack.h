/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredOptionId; 
@property (nonatomic,copy) NSString * languageOptionChangeUserSetting; 
+(id)setAudioTrack;
+(id)setAudioTrackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)desiredOptionId;
-(void)setDesiredOptionId:(NSString *)arg1 ;
-(NSString *)languageOptionChangeUserSetting;
-(void)setLanguageOptionChangeUserSetting:(NSString *)arg1 ;
@end

