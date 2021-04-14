/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClientObserver.h>

@protocol FBSApplicationDataStoreRepositoryClient;
@class NSHashTable, NSString;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {

	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2 ;
-(id)initWithClient:(id)arg1 ;
-(BOOL)_hasObserver:(id)arg1 ;
@end
