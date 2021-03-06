/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCConnectionInfoPrivateDelegateProtocol, ACCConnectionInfoXPCServerProtocol;
@class NSDictionary, NSString, NSXPCConnection, NSLock, NSMutableDictionary;

@interface ACCConnectionInfo : NSObject {

	NSDictionary* _accessoryFilterDictionary;
	NSString* _providerUID;
	id<ACCConnectionInfoPrivateDelegateProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	id<ACCConnectionInfoXPCServerProtocol> _remoteObject;
	NSLock* _listLock;
	NSMutableDictionary* _connectionList;
	NSMutableDictionary* _endpointList;

}

@property (nonatomic,retain) NSString * providerUID;                                                    //@synthesize providerUID=_providerUID - In the implementation block
@property (assign,nonatomic,__weak) id<ACCConnectionInfoPrivateDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                                        //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCConnectionInfoXPCServerProtocol> remoteObject;                       //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSLock * listLock;                                                         //@synthesize listLock=_listLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionList;                                      //@synthesize connectionList=_connectionList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointList;                                        //@synthesize endpointList=_endpointList - In the implementation block
@property (readonly) NSDictionary * accessoryFilterDictionary;                                          //@synthesize accessoryFilterDictionary=_accessoryFilterDictionary - In the implementation block
+(id)sharedInstance;
+(id)accessoryDictionaryForLogging:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<ACCConnectionInfoPrivateDelegateProtocol>)delegate;
-(void)setDelegate:(id<ACCConnectionInfoPrivateDelegateProtocol>)arg1 ;
-(id<ACCConnectionInfoXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCConnectionInfoXPCServerProtocol>)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)serverConnection;
-(BOOL)registerDelegate:(id)arg1 ;
-(NSLock *)listLock;
-(void)connectToServer:(BOOL)arg1 ;
-(void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2 ;
-(void)accessoryConnectionDetached:(id)arg1 ;
-(void)accessoryEndpointsForConnection:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)accessoryInfoForConnection:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)accessoryInfoForEndpoint:(id)arg1 connection:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)accessoryProperty:(id)arg1 forConnection:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)accessoryProperty:(id)arg1 forEndpoint:(id)arg2 connection:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)interceptIncomingNTimes:(int)arg1 forEndpoint:(id)arg2 connection:(id)arg3 ;
-(void)sendData:(id)arg1 forEndpoint:(id)arg2 connection:(id)arg3 ;
-(void)accessoryConnectionAttached:(id)arg1 type:(int)arg2 info:(id)arg3 properties:(id)arg4 ;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5 ;
-(void)accessoryEndpointUpdate:(id)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4 ;
-(void)accessoryConnectionInfoPropertyChanged:(id)arg1 properties:(id)arg2 ;
-(void)accessoryEndpointInfoPropertyChanged:(id)arg1 properties:(id)arg2 forConnection:(id)arg3 ;
-(void)handleInterceptData:(id)arg1 forEndpoint:(id)arg2 connection:(id)arg3 ;
-(void)notifyDelegateOfServerDisconnectAndCleanup;
-(BOOL)registerDelegate:(id)arg1 withFilter:(id)arg2 ;
-(id)accessoryInfoForConnectionSync:(id)arg1 ;
-(id)accessoryInfoForEndpointSync:(id)arg1 connection:(id)arg2 ;
-(id)accessoryPropertySync:(id)arg1 forConnection:(id)arg2 ;
-(id)accessoryPropertySync:(id)arg1 forEndpoint:(id)arg2 connection:(id)arg3 ;
-(int)accessoryConnectionType:(id)arg1 ;
-(int)accessoryEndpointTransportType:(id)arg1 connection:(id)arg2 ;
-(int)accessoryEndpointProtocolType:(id)arg1 connection:(id)arg2 ;
-(int)getInterceptCountForEndpoint:(id)arg1 connection:(id)arg2 ;
-(NSDictionary *)accessoryFilterDictionary;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(void)setListLock:(NSLock *)arg1 ;
-(NSMutableDictionary *)connectionList;
-(void)setConnectionList:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)endpointList;
-(void)setEndpointList:(NSMutableDictionary *)arg1 ;
@end

