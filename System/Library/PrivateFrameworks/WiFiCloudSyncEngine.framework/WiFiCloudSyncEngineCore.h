/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSThread, NSObject;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	NSObject*<OS_dispatch_queue> clientQueue;
	BOOL iCloudSyncingEnabled;
	BOOL isKVSEncrypted;

}

@property (assign) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (assign) NSThread * clientThread; 
@property (assign) NSObject*<OS_dispatch_queue> clientQueue; 
@property (assign) BOOL iCloudSyncingEnabled; 
@property (assign) BOOL isKVSEncrypted; 
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsKVSEncrypted:(BOOL)arg1 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)unSubscribeKVStoreNotfications;
-(BOOL)iCloudSyncingEnabled;
-(BOOL)isKVSEncrypted;
-(void)synchronizeKVS;
-(NSThread *)clientThread;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg1 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)removeFromKVStore:(id)arg1 ;
-(void)relayPruneKVSStore:(id)arg1 ;
-(void)relayMergeNetworks:(id)arg1 ;
-(void)relayKeychainSyncState:(id)arg1 ;
-(id)initWithEncryptedKVS:(BOOL)arg1 ;
-(void)registerCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)registerCallback:(/*function pointer*/void*)arg1 queue:(id)arg2 context:(void*)arg3 ;
-(void)addToKVStore:(id)arg1 ;
-(void)readStoreValueForKey:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)clearKVS;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)pruneKVSStore;
-(void)synchronizeAndCallMergeNetworks;
-(void)queryKeychainSyncState;
@end

