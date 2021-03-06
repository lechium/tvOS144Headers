/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _environmentName;
	NSMutableDictionary* _parameterDictionary;
	long long _requestType;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSArray * mediaKinds; 
@property (nonatomic,copy) NSString * notificationType; 
@property (nonatomic,copy) NSDictionary * putParameters; 
@property (assign,nonatomic) long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)requestType;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setRequestType:(long long)arg1 ;
-(void)setNotificationType:(NSString *)arg1 ;
-(NSString *)notificationType;
-(NSString *)environmentName;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(NSArray *)mediaKinds;
-(NSDictionary *)putParameters;
-(void)setMediaKinds:(NSArray *)arg1 ;
-(void)setPutParameters:(NSDictionary *)arg1 ;
-(id)_copyParametersDictionary;
@end

