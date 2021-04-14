/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEPacketTunnelProvider.h>

@protocol OS_dispatch_source, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSArray, NSDictionary, NEIKEv2Server, NWResolver, NSObject, NEIKEv2Rekey, NEIKEv2MOBIKE, NWPath, NEUserNotification, NEIKEv2Session, NWPathEvaluator;

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider {

	BOOL _isIfCellular;
	BOOL _hasNAT;
	BOOL _dispose;
	BOOL _sessionDidConnect;
	BOOL _mobikeCapable;
	BOOL _authenticationPrompted;
	BOOL _isObserving;
	unsigned _flags;
	NSArray* _ikeConfig;
	NSArray* _localTrafficSelectors;
	NSArray* _remoteTrafficSelectors;
	NSDictionary* _options;
	NEVirtualInterface_sRef _virtualInterface;
	NEIKEv2Server* _server;
	NWResolver* _resolver;
	NSObject*<OS_dispatch_source> _resolverWaitTimer;
	NEIKEv2Rekey* _rekey;
	NSObject*<OS_dispatch_semaphore> _getSocketSemaphore;
	NEIKEv2MOBIKE* _mobikeHandle;
	/*^block*/id _startTunnelCompletionHandler;
	/*^block*/id _stopTunnelCompletionHandler;
	/*^block*/id _dnsResolverCompletionHandler;
	long long _tunnelKind;
	NWPath* _path;
	NEUserNotification* _g_notification;
	NEIKEv2Session* _session;
	unsigned long long _ifIndex;
	long long _pathStatus;
	NSObject*<OS_dispatch_queue> _queue;
	NWPathEvaluator* _scopedPathEvaluator;

}

@property (retain) NSArray * ikeConfig;                                              //@synthesize ikeConfig=_ikeConfig - In the implementation block
@property (retain) NSArray * localTrafficSelectors;                                  //@synthesize localTrafficSelectors=_localTrafficSelectors - In the implementation block
@property (retain) NSArray * remoteTrafficSelectors;                                 //@synthesize remoteTrafficSelectors=_remoteTrafficSelectors - In the implementation block
@property (retain) NSDictionary * options;                                           //@synthesize options=_options - In the implementation block
@property (assign) NEVirtualInterface_sRef virtualInterface;                         //@synthesize virtualInterface=_virtualInterface - In the implementation block
@property (assign) BOOL isIfCellular;                                                //@synthesize isIfCellular=_isIfCellular - In the implementation block
@property (assign) BOOL hasNAT;                                                      //@synthesize hasNAT=_hasNAT - In the implementation block
@property (retain) NEIKEv2Server * server;                                           //@synthesize server=_server - In the implementation block
@property (retain) NWResolver * resolver;                                            //@synthesize resolver=_resolver - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> resolverWaitTimer;                  //@synthesize resolverWaitTimer=_resolverWaitTimer - In the implementation block
@property (retain) NEIKEv2Rekey * rekey;                                             //@synthesize rekey=_rekey - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> getSocketSemaphore;              //@synthesize getSocketSemaphore=_getSocketSemaphore - In the implementation block
@property (retain) NEIKEv2MOBIKE * mobikeHandle;                                     //@synthesize mobikeHandle=_mobikeHandle - In the implementation block
@property (copy) id startTunnelCompletionHandler;                                    //@synthesize startTunnelCompletionHandler=_startTunnelCompletionHandler - In the implementation block
@property (copy) id stopTunnelCompletionHandler;                                     //@synthesize stopTunnelCompletionHandler=_stopTunnelCompletionHandler - In the implementation block
@property (copy) id dnsResolverCompletionHandler;                                    //@synthesize dnsResolverCompletionHandler=_dnsResolverCompletionHandler - In the implementation block
@property (assign) BOOL dispose;                                                     //@synthesize dispose=_dispose - In the implementation block
@property (assign) long long tunnelKind;                                             //@synthesize tunnelKind=_tunnelKind - In the implementation block
@property (assign) BOOL sessionDidConnect;                                           //@synthesize sessionDidConnect=_sessionDidConnect - In the implementation block
@property (assign) BOOL mobikeCapable;                                               //@synthesize mobikeCapable=_mobikeCapable - In the implementation block
@property (retain) NWPath * path;                                                    //@synthesize path=_path - In the implementation block
@property (assign) BOOL authenticationPrompted;                                      //@synthesize authenticationPrompted=_authenticationPrompted - In the implementation block
@property (retain) NEUserNotification * g_notification;                              //@synthesize g_notification=_g_notification - In the implementation block
@property (assign) BOOL isObserving;                                                 //@synthesize isObserving=_isObserving - In the implementation block
@property (retain) NEIKEv2Session * session;                                         //@synthesize session=_session - In the implementation block
@property (assign) unsigned long long ifIndex;                                       //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign) long long pathStatus;                                             //@synthesize pathStatus=_pathStatus - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned flags;                                                   //@synthesize flags=_flags - In the implementation block
@property (retain) NWPathEvaluator * scopedPathEvaluator;                            //@synthesize scopedPathEvaluator=_scopedPathEvaluator - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)flags;
-(NEIKEv2Session *)session;
-(NWPath *)path;
-(void)setPath:(NWPath *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reset:(BOOL)arg1 ;
-(NEIKEv2Server *)server;
-(NWResolver *)resolver;
-(void)setFlags:(unsigned)arg1 ;
-(void)setSession:(NEIKEv2Session *)arg1 ;
-(void)setServer:(NEIKEv2Server *)arg1 ;
-(void)stopObserving;
-(void)wake;
-(void)setResolver:(NWResolver *)arg1 ;
-(void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)dispose;
-(void)startTunnelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopTunnelWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTunnelNetworkSettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLocalTrafficSelectors:(NSArray *)arg1 ;
-(void)setRemoteTrafficSelectors:(NSArray *)arg1 ;
-(NSArray *)localTrafficSelectors;
-(NSArray *)remoteTrafficSelectors;
-(NSArray *)ikeConfig;
-(void)setIkeConfig:(NSArray *)arg1 ;
-(long long)tunnelKind;
-(id)stringForTunnelKind;
-(unsigned long long)ifIndex;
-(void)setIsObserving:(BOOL)arg1 ;
-(void)ignoreSigPipe;
-(NWPathEvaluator *)scopedPathEvaluator;
-(void)setScopedPathEvaluator:(NWPathEvaluator *)arg1 ;
-(BOOL)isObserving;
-(void)setTunnelKind:(long long)arg1 ;
-(long long)pathStatus;
-(void)invokeCancelTunnel:(int)arg1 ;
-(BOOL)NEIKEv2ProviderAuthenticate:(id)arg1 ;
-(void)setMobikeHandle:(NEIKEv2MOBIKE *)arg1 ;
-(void)setIfIndex:(unsigned long long)arg1 ;
-(void)setPathStatus:(long long)arg1 ;
-(int)tunnelBringup;
-(void)resolveServerAddressIfNeeded:(/*^block*/id)arg1 ;
-(void)setDispose:(BOOL)arg1 ;
-(void)setStartTunnelCompletionHandler:(id)arg1 ;
-(void)startIKEv2TunnelWithOptions:(id)arg1 ;
-(long long)tunnelTeardown;
-(void)setStopTunnelCompletionHandler:(id)arg1 ;
-(void)stopIKEv2TunnelWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)mobikeCapable;
-(NEIKEv2MOBIKE *)mobikeHandle;
-(BOOL)hasNAT;
-(void)wakeIKEv2;
-(BOOL)sessionDidConnect;
-(BOOL)tryAlternateServerAddresses;
-(void)watchIKESocketChange;
-(void)startRekeyTimer:(BOOL)arg1 ;
-(void)setSessionDidConnect:(BOOL)arg1 ;
-(void)handleAdditionalServerAddressesNotification:(id)arg1 ;
-(int)handleRedirectNotification:(id)arg1 ;
-(void)setVirtualInterface:(NEVirtualInterface_sRef)arg1 ;
-(NEVirtualInterface_sRef)virtualInterface;
-(void)setupIKEv2CallbackBlocks;
-(id)stopTunnelCompletionHandler;
-(id)startTunnelCompletionHandler;
-(void)setG_notification:(NEUserNotification *)arg1 ;
-(BOOL)invokeStartTunnelCompletionHandler:(id)arg1 ;
-(void)handleInterfaceDown;
-(void)setIsIfCellular:(BOOL)arg1 ;
-(BOOL)isIfCellular;
-(void)handleInterfaceChange:(BOOL)arg1 ;
-(id)dnsResolverCompletionHandler;
-(NSObject*<OS_dispatch_source>)resolverWaitTimer;
-(void)setResolverWaitTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDnsResolverCompletionHandler:(id)arg1 ;
-(void)handleDNSResolution;
-(void)handleConfigChange;
-(void)handleDefaultPathChange;
-(void)handleScopedPathChange;
-(BOOL)authenticationPrompted;
-(void)setAuthenticationPrompted:(BOOL)arg1 ;
-(NEUserNotification *)g_notification;
-(id)createPacketTunnelNetworkSettings;
-(void)setHasNAT:(BOOL)arg1 ;
-(NEIKEv2Rekey *)rekey;
-(void)setRekey:(NEIKEv2Rekey *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)getSocketSemaphore;
-(void)setGetSocketSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setMobikeCapable:(BOOL)arg1 ;
@end

