/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClient.h>

@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;
@class NSCountedSet, NSMutableDictionary, NSObject, NSHashTable, NSString;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient> {

	id<FBApplicationDataStoreRepository> _dataStore;
	NSCountedSet* _prefetchedKeys;
	NSMutableDictionary* _prefetchedKeyValues;
	NSObject*<OS_dispatch_queue> _prefetchQueue;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observersLock_observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id)_observers;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)addPrefetchedKeys:(id)arg1 ;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(id)availableDataStores;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithDataStore:(id)arg1 ;
-(void)_repositoryInvalidated:(id)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(void)_prefetchQueue_updateNotificationListeners;
-(id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1 ;
-(void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)_updateNotificationListeners;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
@end

