/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol DEDXPCConnectorDaemonDelegate, OS_os_log;
@class NSXPCConnection, NSObject, DEDXPCInbound, NSXPCListener, NSString;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate> {

	BOOL _isDaemon;
	BOOL _started;
	NSXPCConnection* _connection;
	id<DEDXPCConnectorDaemonDelegate> _daemonDelegate;
	NSObject*<OS_os_log> _log;
	DEDXPCInbound* _inbound;
	NSXPCListener* _listener;
	unsigned long long _connType;

}

@property (retain) NSObject*<OS_os_log> log;                                      //@synthesize log=_log - In the implementation block
@property (retain) DEDXPCInbound * inbound;                                       //@synthesize inbound=_inbound - In the implementation block
@property (retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (assign) unsigned long long connType;                                   //@synthesize connType=_connType - In the implementation block
@property (assign) BOOL isDaemon;                                                 //@synthesize isDaemon=_isDaemon - In the implementation block
@property (assign) BOOL started;                                                  //@synthesize started=_started - In the implementation block
@property (__weak) id<DEDXPCConnectorDaemonDelegate> daemonDelegate;              //@synthesize daemonDelegate=_daemonDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)started;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setIsDaemon:(BOOL)arg1 ;
-(BOOL)isDaemon;
-(void)setStarted:(BOOL)arg1 ;
-(void)configureXPCInbound:(id)arg1 ;
-(void)configureConnectionType:(unsigned long long)arg1 ;
-(void)configureDaemonModeWithDelegate:(id)arg1 ;
-(void)setInbound:(DEDXPCInbound *)arg1 ;
-(DEDXPCInbound *)inbound;
-(void)setConnType:(unsigned long long)arg1 ;
-(void)setDaemonDelegate:(id<DEDXPCConnectorDaemonDelegate>)arg1 ;
-(void)startForDaemon;
-(void)startForApp;
-(unsigned long long)connType;
-(BOOL)validateConnection:(id)arg1 ;
-(id<DEDXPCConnectorDaemonDelegate>)daemonDelegate;
-(id)_whitelistedXPCInterface;
-(id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2 ;
@end

