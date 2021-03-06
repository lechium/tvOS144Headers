/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAUIDelayedActionCommand : SADomainCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timerValue; 
+(id)delayedActionCommand;
+(id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
@end

