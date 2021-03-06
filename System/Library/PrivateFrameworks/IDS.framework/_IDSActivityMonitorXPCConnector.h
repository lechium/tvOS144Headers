/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSXPCActivityMonitorClient.h>

@class NSMutableDictionary, IDSXPCDaemonController, NSString;

@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient> {

	NSMutableDictionary* _listenersByActivity;
	IDSXPCDaemonController* _daemonController;
	IDSXPCDaemonController* _syncDaemonController;
	/*^block*/id _syncDaemonControllerBuilder;
	/*^block*/id _daemonControllerBuilder;

}

@property (nonatomic,retain) NSMutableDictionary * listenersByActivity;                  //@synthesize listenersByActivity=_listenersByActivity - In the implementation block
@property (nonatomic,retain) IDSXPCDaemonController * daemonController;                  //@synthesize daemonController=_daemonController - In the implementation block
@property (nonatomic,retain) IDSXPCDaemonController * syncDaemonController;              //@synthesize syncDaemonController=_syncDaemonController - In the implementation block
@property (nonatomic,copy) id syncDaemonControllerBuilder;                               //@synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder - In the implementation block
@property (nonatomic,copy) id daemonControllerBuilder;                                   //@synthesize daemonControllerBuilder=_daemonControllerBuilder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakSharedInstance;
-(void)dealloc;
-(void)removeListener:(id)arg1 forTopic:(id)arg2 ;
-(void)addListener:(id)arg1 forTopic:(id)arg2 ;
-(void)performAction:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performSyncAction:(/*^block*/id)arg1 ;
-(void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(IDSXPCDaemonController *)daemonController;
-(IDSXPCDaemonController *)syncDaemonController;
-(void)setSyncDaemonController:(IDSXPCDaemonController *)arg1 ;
-(id)syncDaemonControllerBuilder;
-(void)setSyncDaemonControllerBuilder:(id)arg1 ;
-(id)initWithSyncDaemonControllerBuilder:(/*^block*/id)arg1 daemonControllerBuilder:(/*^block*/id)arg2 ;
-(void)_handleInterruption;
-(void)_updateActivity:(id)arg1 isSupported:(BOOL)arg2 ;
-(NSMutableDictionary *)listenersByActivity;
-(void)setListenersByActivity:(NSMutableDictionary *)arg1 ;
-(void)setDaemonController:(IDSXPCDaemonController *)arg1 ;
-(id)daemonControllerBuilder;
-(void)setDaemonControllerBuilder:(id)arg1 ;
@end

