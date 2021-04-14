/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVRMSService, NSNetService;

@interface _RMSBonjourService : NSObject {

	BOOL _available;
	TVRMSService* _service;
	NSNetService* _netService;
	long long _state;

}

@property (nonatomic,retain) TVRMSService * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                      //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(TVRMSService *)service;
-(void)setService:(TVRMSService *)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(void)setNetService:(NSNetService *)arg1 ;
-(NSNetService *)netService;
@end

