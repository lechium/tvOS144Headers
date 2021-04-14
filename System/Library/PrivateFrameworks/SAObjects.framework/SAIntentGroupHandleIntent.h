/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL allowsPunchOut; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
+(id)handleIntent;
+(id)handleIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(BOOL)allowsPunchOut;
-(void)setAllowsPunchOut:(BOOL)arg1 ;
@end

