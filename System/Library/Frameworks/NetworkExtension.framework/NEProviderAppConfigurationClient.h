/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEUtilConfigurationClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol NEConfigurationCommandHandling;
@class NSXPCListener, NEVPNManager, NEFilterManager, NEDNSProxyManager, NEDNSSettingsManager, NSMutableArray, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {

	BOOL _isServerMode;
	NSXPCListener* _listener;
	NEVPNManager* _currentManager;
	NEFilterManager* _filterManager;
	NEDNSProxyManager* _dnsProxyManager;
	NEDNSSettingsManager* _dnsSettingsManager;
	NSMutableArray* _createdManagers;
	NSMutableArray* _currentManagers;
	NSString* _targetAppBundleID;
	NSXPCConnection* _connection;
	id<NEConfigurationCommandHandling> _remoteObject;

}

@property (readonly) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (retain) NEVPNManager * currentManager;                                //@synthesize currentManager=_currentManager - In the implementation block
@property (retain) NEFilterManager * filterManager;                              //@synthesize filterManager=_filterManager - In the implementation block
@property (retain) NEDNSProxyManager * dnsProxyManager;                          //@synthesize dnsProxyManager=_dnsProxyManager - In the implementation block
@property (retain) NEDNSSettingsManager * dnsSettingsManager;                    //@synthesize dnsSettingsManager=_dnsSettingsManager - In the implementation block
@property (retain) NSMutableArray * createdManagers;                             //@synthesize createdManagers=_createdManagers - In the implementation block
@property (retain) NSMutableArray * currentManagers;                             //@synthesize currentManagers=_currentManagers - In the implementation block
@property (retain) NSString * targetAppBundleID;                                 //@synthesize targetAppBundleID=_targetAppBundleID - In the implementation block
@property (assign) BOOL isServerMode;                                            //@synthesize isServerMode=_isServerMode - In the implementation block
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (retain) id<NEConfigurationCommandHandling> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCListener *)listener;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)onDemandRules;
-(BOOL)isAlwaysOn;
-(id<NEConfigurationCommandHandling>)remoteObject;
-(void)setRemoteObject:(id<NEConfigurationCommandHandling>)arg1 ;
-(void)setOnDemandRules:(id)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(id)filterConfiguration;
-(BOOL)onDemandEnabled;
-(void)handleConfigChanged:(id)arg1 ;
-(void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCurrentManager:(NEVPNManager *)arg1 ;
-(void)setCurrentManagers:(NSMutableArray *)arg1 ;
-(void)setCreatedManagers:(NSMutableArray *)arg1 ;
-(NEFilterManager *)filterManager;
-(NEDNSProxyManager *)dnsProxyManager;
-(NEDNSSettingsManager *)dnsSettingsManager;
-(NEVPNManager *)currentManager;
-(NSMutableArray *)createdManagers;
-(id)protocolForParameters:(id)arg1 ;
-(int)setKeychainItemData:(id)arg1 withName:(id)arg2 persistentReference:(id*)arg3 ;
-(int)deleteKeychainItemWithPersistentReference:(id)arg1 ;
-(NSMutableArray *)currentManagers;
-(void)loadAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isServerMode;
-(NSString *)targetAppBundleID;
-(void)setFilterManager:(NEFilterManager *)arg1 ;
-(void)setDnsProxyManager:(NEDNSProxyManager *)arg1 ;
-(void)setDnsSettingsManager:(NEDNSSettingsManager *)arg1 ;
-(BOOL)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(void)loadConfigurationWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientName:(id)arg1 ;
-(id)initForServerMode;
-(id)dnsProxyConfiguration;
-(id)dnsSettingsBundle;
-(BOOL)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(void)setTargetAppBundleID:(NSString *)arg1 ;
-(void)setIsServerMode:(BOOL)arg1 ;
@end

