/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * afterNotificationId; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSString * sourceAppId; 
@property (nonatomic,copy) NSNumber * supportsSpokenNotifications; 
+(id)notificationsSearch;
+(id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setSourceAppId:(NSString *)arg1 ;
-(NSString *)sourceAppId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)afterNotificationId;
-(void)setAfterNotificationId:(NSString *)arg1 ;
-(NSNumber *)supportsSpokenNotifications;
-(void)setSupportsSpokenNotifications:(NSNumber *)arg1 ;
@end

