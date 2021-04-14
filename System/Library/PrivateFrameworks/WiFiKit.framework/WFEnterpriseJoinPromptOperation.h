/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFCredentialsProvider.h>

@class NSString;

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {

	NSString* password;
	NSString* username;
	SecIdentityRef TLSIdentity;

}

@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(SecIdentityRef)TLSIdentity;
@end

