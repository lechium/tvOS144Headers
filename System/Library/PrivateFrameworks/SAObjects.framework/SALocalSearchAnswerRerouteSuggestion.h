/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand

@property (nonatomic,copy) NSString * response; 
+(id)answerRerouteSuggestion;
+(id)answerRerouteSuggestionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResponse:(NSString *)arg1 ;
-(NSString *)response;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

