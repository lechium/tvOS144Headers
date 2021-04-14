/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupProtobufMessage * handledIntent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * handledIntentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedHandledIntent; 
@property (nonatomic,copy) NSString * jsonEncodedHandledIntentResponse; 
+(id)launchAppWithIntent;
+(id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupProtobufMessage *)handledIntent;
-(void)setHandledIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)handledIntentResponse;
-(void)setHandledIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedHandledIntent;
-(void)setJsonEncodedHandledIntent:(NSString *)arg1 ;
-(NSString *)jsonEncodedHandledIntentResponse;
-(void)setJsonEncodedHandledIntentResponse:(NSString *)arg1 ;
@end

