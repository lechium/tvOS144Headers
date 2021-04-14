/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray, NSString, NSMutableSet;

@interface WAClient : NSObject {

	NSMutableDictionary* _interestedMessageIdentifiers;
	NSMutableDictionary* _configuredMessageIdentifiers;
	unsigned char _daemonConnectionValid;
	unsigned char _blockDaemonConnection;
	NSXPCConnection* _conn;
	NSMutableDictionary* _configChangeDelegatesPerGroupType;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _queryableQueue;
	NSMutableArray* _queuedInvocations;
	NSMutableDictionary* _registeredQueryableHandlerBlocks;
	double _connectionRecoveryStartTime;
	/*^block*/id _recoveryTickBlock;
	NSString* _tokenForThisClient;
	NSString* _identifierForThisClient;
	NSMutableSet* _registeredGroupTypes;

}

@property (nonatomic,retain) NSXPCConnection * conn;                                               //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configChangeDelegatesPerGroupType;              //@synthesize configChangeDelegatesPerGroupType=_configChangeDelegatesPerGroupType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> replyQueue;                              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                           //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryableQueue;                          //@synthesize queryableQueue=_queryableQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedInvocations;                                   //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredQueryableHandlerBlocks;               //@synthesize registeredQueryableHandlerBlocks=_registeredQueryableHandlerBlocks - In the implementation block
@property (assign,nonatomic) double connectionRecoveryStartTime;                                   //@synthesize connectionRecoveryStartTime=_connectionRecoveryStartTime - In the implementation block
@property (assign,nonatomic) unsigned char daemonConnectionValid;                                  //@synthesize daemonConnectionValid=_daemonConnectionValid - In the implementation block
@property (assign,nonatomic) unsigned char blockDaemonConnection;                                  //@synthesize blockDaemonConnection=_blockDaemonConnection - In the implementation block
@property (nonatomic,copy) id recoveryTickBlock;                                                   //@synthesize recoveryTickBlock=_recoveryTickBlock - In the implementation block
@property (nonatomic,retain) NSString * tokenForThisClient;                                        //@synthesize tokenForThisClient=_tokenForThisClient - In the implementation block
@property (nonatomic,retain) NSString * identifierForThisClient;                                   //@synthesize identifierForThisClient=_identifierForThisClient - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredGroupTypes;                                  //@synthesize registeredGroupTypes=_registeredGroupTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configuredMessageIdentifiers; 
@property (nonatomic,retain) NSMutableDictionary * interestedMessageIdentifiers; 
+(id)sharedClient;
+(id)sharedClientWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_initPrivate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)_reregister;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)conn;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConn:(NSXPCConnection *)arg1 ;
-(void)triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)submitWiFiAnalyticsMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 ;
-(void)killDaemonAndReply:(/*^block*/id)arg1 ;
-(void)clearMessageStoreAndReply:(/*^block*/id)arg1 ;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)trigger11axPerfStudyAndReply:(/*^block*/id)arg1 ;
-(void)setDeviceAnalyticsConfiguration:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getDeviceAnalyticsConfigurationAndReply:(/*^block*/id)arg1 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)setIdentifierForThisClient:(NSString *)arg1 ;
-(void)_registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(NSMutableSet *)registeredGroupTypes;
-(NSMutableArray *)queuedInvocations;
-(unsigned char)daemonConnectionValid;
-(/*^block*/id)_getConnectionIssueHandlerBlock;
-(void)_dequeueInvocation:(id)arg1 ;
-(void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_submitWiFiAnalyticsMessage:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(/*^block*/id)arg3 andReply:(/*^block*/id)arg4 queuedInvocation:(id)arg5 ;
-(NSMutableDictionary *)registeredQueryableHandlerBlocks;
-(void)_triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_killDaemonAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)setDaemonConnectionValid:(unsigned char)arg1 ;
-(void)_clearMessageStoreAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)_getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queryableQueue;
-(NSMutableDictionary *)configuredMessageIdentifiers;
-(NSMutableDictionary *)interestedMessageIdentifiers;
-(NSMutableDictionary *)configChangeDelegatesPerGroupType;
-(NSString *)tokenForThisClient;
-(NSString *)identifierForThisClient;
-(void)setTokenForThisClient:(NSString *)arg1 ;
-(unsigned char)blockDaemonConnection;
-(void)_removeAllQueuedInvocations;
-(void)_wakeUpNotificationForThisClientReceived:(id)arg1 ;
-(void)_startConnectionRecovery;
-(void)_replyAllWithTimeoutErrorAndRemove;
-(double)connectionRecoveryStartTime;
-(void)setConnectionRecoveryStartTime:(double)arg1 ;
-(id)recoveryTickBlock;
-(void)_connectionRecoveryTick;
-(void)setRecoveryTickBlock:(id)arg1 ;
-(void)_connectionRecovered;
-(void)_connectionTimedOut;
-(void)_establishDaemonConnection;
-(void)_setConfigChangeDelegateForGroupType:(long long)arg1 queuedInvocation:(id)arg2 ;
-(void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_trigger11axPerfStudyAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)_setDeviceAnalyticsConfiguration:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_getDeviceAnalyticsConfigurationAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)setBlockDaemonConnection:(unsigned char)arg1 ;
-(void)registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(/*^block*/id)arg3 andReply:(/*^block*/id)arg4 ;
-(void)submitQueriedMetricWithIdentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)configuredMessagesDidChange:(id)arg1 andInterestedMessageIDs:(id)arg2 forGroupType:(long long)arg3 ;
-(void)setInterestedMessageIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setConfiguredMessageIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setConfigChangedDelegate:(id)arg1 forGroupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)fakeDaemonConnectionDead:(unsigned char)arg1 ;
-(void)setConfigChangeDelegatesPerGroupType:(NSMutableDictionary *)arg1 ;
-(void)setQueryableQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(void)setRegisteredQueryableHandlerBlocks:(NSMutableDictionary *)arg1 ;
-(void)setRegisteredGroupTypes:(NSMutableSet *)arg1 ;
@end

