/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WPDaemon/WPDClient.h>

@class WPDObjectDiscoveryManager, WPDSearchPartyAgent, WPDObjectDiscoveryData;

@interface WPDObjectDiscoveryClient : WPDClient {

	BOOL _pendingSent;
	WPDObjectDiscoveryManager* _objectDiscoveryManager;
	WPDSearchPartyAgent* _spAgent;
	WPDObjectDiscoveryData* _keyAddressAndPayload;
	unsigned long long _keyRequestID;
	unsigned long long _tokenRequestID;

}

@property (assign) BOOL pendingSent;                                                //@synthesize pendingSent=_pendingSent - In the implementation block
@property (__weak) WPDObjectDiscoveryManager * objectDiscoveryManager;              //@synthesize objectDiscoveryManager=_objectDiscoveryManager - In the implementation block
@property (retain) WPDSearchPartyAgent * spAgent;                                   //@synthesize spAgent=_spAgent - In the implementation block
@property (readonly) WPDObjectDiscoveryData * keyAddressAndPayload;                 //@synthesize keyAddressAndPayload=_keyAddressAndPayload - In the implementation block
@property (assign) unsigned long long keyRequestID;                                 //@synthesize keyRequestID=_keyRequestID - In the implementation block
@property (assign) unsigned long long tokenRequestID;                               //@synthesize tokenRequestID=_tokenRequestID - In the implementation block
-(void)dealloc;
-(void)destroy;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 holdVouchers:(long long)arg4 ;
-(id)generateStateDump;
-(id)initWithXPCConnection:(id)arg1 server:(id)arg2 ;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(void)setPendingSent:(BOOL)arg1 ;
-(BOOL)pendingSent;
-(void)endTestMode;
-(void)setSpAgent:(WPDSearchPartyAgent *)arg1 ;
-(WPDSearchPartyAgent *)spAgent;
-(WPDObjectDiscoveryData *)keyAddressAndPayload;
-(unsigned long long)keyRequestID;
-(void)setKeyRequestID:(unsigned long long)arg1 ;
-(unsigned long long)tokenRequestID;
-(void)setTokenRequestID:(unsigned long long)arg1 ;
@end

