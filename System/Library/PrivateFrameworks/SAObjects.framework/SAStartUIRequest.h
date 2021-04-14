/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SAStartRequest, SAStartLocalRequest, NSString, NSArray;

@interface SAStartUIRequest : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SAStartRequest * startRequest; 
@property (nonatomic,retain) SAStartLocalRequest * startLocalRequest; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startUIRequest;
+(id)startUIRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAStartRequest *)startRequest;
-(void)setStartRequest:(SAStartRequest *)arg1 ;
-(SAStartLocalRequest *)startLocalRequest;
-(void)setStartLocalRequest:(SAStartLocalRequest *)arg1 ;
@end

