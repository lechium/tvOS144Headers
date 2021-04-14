/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BYClientDaemonCloudSyncProtocol.h>

@protocol BYClientDaemonCloudSyncProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol> {

	BOOL _syncDidStart;
	BOOL _syncDidComplete;
	id<BYClientDaemonCloudSyncProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL syncDidStart;                               //@synthesize syncDidStart=_syncDidStart - In the implementation block
@property (assign,nonatomic) BOOL syncDidComplete;                            //@synthesize syncDidComplete=_syncDidComplete - In the implementation block
@property (__weak) id<BYClientDaemonCloudSyncProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(id)init;
-(id<BYClientDaemonCloudSyncProtocol>)delegate;
-(void)setDelegate:(id<BYClientDaemonCloudSyncProtocol>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)connectToDaemon;
-(void)cancelSync;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)needsToSync:(/*^block*/id)arg1 ;
-(void)setSyncDidStart:(BOOL)arg1 ;
-(void)setSyncDidComplete:(BOOL)arg1 ;
-(void)isSyncInProgress:(/*^block*/id)arg1 ;
-(BOOL)syncDidStart;
-(BOOL)syncDidComplete;
-(void)startSync;
-(void)fetchCurrentSyncState:(/*^block*/id)arg1 ;
-(void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3 ;
@end

