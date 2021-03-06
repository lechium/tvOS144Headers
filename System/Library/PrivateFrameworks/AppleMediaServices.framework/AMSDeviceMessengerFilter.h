/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject {

	ACAccount* _account;
	long long _deviceType;
	long long _messageType;

}

@property (assign,nonatomic) long long messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long deviceType;               //@synthesize deviceType=_deviceType - In the implementation block
-(long long)messageType;
-(void)setMessageType:(long long)arg1 ;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)matchesMessage:(id)arg1 ;
@end

