/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDRemoteLoginAuthenticationRequest.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class ACAccount, AKDevice, NSString, NSDictionary;

@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol> {

	ACAccount* _account;
	AKDevice* _companionDevice;

}

@property (nonatomic,retain) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AKDevice * companionDevice;                    //@synthesize companionDevice=_companionDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)messageName;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(NSDictionary *)messagePayload;
-(NSString *)xpcMessageName;
@end

