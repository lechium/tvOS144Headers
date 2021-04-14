/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFProxyKeychainOperation : WFOperation {

	NSString* _password;
	long long _type;
	NSString* _host;
	NSString* _username;
	NSString* _port;

}

@property (assign) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * host;                  //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * port;                  //@synthesize port=_port - In the implementation block
+(id)removePasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 ;
+(id)savePassswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 ;
+(id)getPasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 ;
-(void)setType:(long long)arg1 ;
-(NSString *)host;
-(NSString *)port;
-(NSString *)password;
-(long long)type;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(NSString *)arg1 ;
-(void)start;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 type:(long long)arg5 ;
-(id)_credentialsForProtectionSpace:(id)arg1 ;
@end

