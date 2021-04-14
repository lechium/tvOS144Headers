/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVCKStoreContentMetadataFetchOperationDelegate.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoritesFactoryDataSource.h>
#import <TVContentPartnerKitUI/TVCKRemoteNotifierDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoritesServerProtocol.h>

@class NSOperationQueue, TVCKStoreContentMetadataCache, TVCKStoreFavoritesFactory, NSNumber, NSMutableSet, TVCKSyncingKeyValueStore, TVCKRemoteNotifier, NSTimer, NSString;

@interface TVCKStoreFavoritesService : NSObject <TVCKStoreContentMetadataFetchOperationDelegate, TVCKStoreFavoritesFactoryDataSource, TVCKRemoteNotifierDelegate, NSXPCListenerDelegate, TVCKStoreFavoritesServerProtocol> {

	BOOL _shouldSynchronizeKeyValueStore;
	NSOperationQueue* _operationQueue;
	TVCKStoreContentMetadataCache* _metadataCache;
	TVCKStoreFavoritesFactory* _itemFactory;
	NSNumber* _highestUserOrder;
	NSMutableSet* _activeClients;
	TVCKSyncingKeyValueStore* _keyValueStore;
	unsigned long long _numberOfPendingSyncCalls;
	id _preferencesObserver;
	TVCKRemoteNotifier* _remoteNotifier;
	NSTimer* _pollingTimer;

}

@property (retain) NSOperationQueue * operationQueue;                                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) TVCKStoreContentMetadataCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
@property (nonatomic,retain) TVCKStoreFavoritesFactory * itemFactory;                    //@synthesize itemFactory=_itemFactory - In the implementation block
@property (nonatomic,retain) NSNumber * highestUserOrder;                                //@synthesize highestUserOrder=_highestUserOrder - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeClients;                               //@synthesize activeClients=_activeClients - In the implementation block
@property (nonatomic,retain) TVCKSyncingKeyValueStore * keyValueStore;                   //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (assign) unsigned long long numberOfPendingSyncCalls;                          //@synthesize numberOfPendingSyncCalls=_numberOfPendingSyncCalls - In the implementation block
@property (nonatomic,retain) id preferencesObserver;                                     //@synthesize preferencesObserver=_preferencesObserver - In the implementation block
@property (nonatomic,retain) TVCKRemoteNotifier * remoteNotifier;                        //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (assign,nonatomic) BOOL shouldSynchronizeKeyValueStore;                        //@synthesize shouldSynchronizeKeyValueStore=_shouldSynchronizeKeyValueStore - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * pollingTimer;                              //@synthesize pollingTimer=_pollingTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(TVCKSyncingKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(TVCKSyncingKeyValueStore *)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(TVCKRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(TVCKRemoteNotifier *)arg1 ;
-(void)addClient:(id)arg1 ;
-(void)setMetadataCache:(TVCKStoreContentMetadataCache *)arg1 ;
-(TVCKStoreContentMetadataCache *)metadataCache;
-(void)_removeClient:(id)arg1 ;
-(void)_addClient:(id)arg1 ;
-(NSMutableSet *)activeClients;
-(void)fetchStatusOfItemInContentCategory:(unsigned long long)arg1 withAdamID:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)fetchCountOfItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)fetchItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)fetchInfoForShowsWithAdamIDs:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)endMonitoringForChanges;
-(void)beginMonitoringForChanges;
-(void)moveItemInCategory:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)addItemWithAdamID:(id)arg1 ;
-(void)removeItemWithAdamID:(id)arg1 ;
-(void)removeAllItemsInCategory:(unsigned long long)arg1 ;
-(void)fetchLightWeightItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)fetchLookupItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_fetchLookupItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_keyValueStoreVersionDidChange:(id)arg1 ;
-(void)_keyValueStoreDidReset:(id)arg1 ;
-(void)_updateLastKnownSortMode;
-(unsigned long long)numberOfPendingSyncCalls;
-(void)setNumberOfPendingSyncCalls:(unsigned long long)arg1 ;
-(BOOL)shouldSynchronizeKeyValueStore;
-(void)setShouldSynchronizeKeyValueStore:(BOOL)arg1 ;
-(void)_beginIgnoringKeyValueStoreChanges;
-(void)_endIgnoringKeyValueStoreChanges;
-(void)_enqueueOperationWithBlock:(/*^block*/id)arg1 ;
-(TVCKStoreFavoritesFactory *)itemFactory;
-(NSNumber *)highestUserOrder;
-(void)setHighestUserOrder:(NSNumber *)arg1 ;
-(void)_obtainKeyValueStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_sendChangeNotificationToActiveClients;
-(BOOL)_doesItem:(id)arg1 belongToCategory:(unsigned long long)arg2 ;
-(void)_updateItems:(id)arg1 sendingChangeNotification:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_synchronizeKeyValueStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateLastKnownSortModeInCategory:(unsigned long long)arg1 sendingChangeNotification:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_fetchRealAdamIDsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_pollingTimerFired:(id)arg1 ;
-(void)setPollingTimer:(NSTimer *)arg1 ;
-(NSTimer *)pollingTimer;
-(void)fetchStatusOfItemsInContentCategory:(unsigned long long)arg1 withAdamIDs:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)_items:(id)arg1 containsItemWithAdamID:(id)arg2 ;
-(void)_fetchItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_sendNotificationToActiveClientsForAddingItem:(id)arg1 ;
-(void)_ensureAuthenticatedAccountExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_sendNotificationToActiveClientsForRemovingItems:(id)arg1 ;
-(void)_fetchRealAdamIDForAdamID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)storeContentMetadataFetchOperation:(id)arg1 obtainedLookupItems:(id)arg2 withExpirationDate:(id)arg3 ;
-(void)setItemFactory:(TVCKStoreFavoritesFactory *)arg1 ;
-(void)setActiveClients:(NSMutableSet *)arg1 ;
-(id)preferencesObserver;
-(void)setPreferencesObserver:(id)arg1 ;
@end

