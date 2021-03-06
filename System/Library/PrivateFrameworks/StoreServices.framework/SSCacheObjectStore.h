/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SSDatabaseCache, NSMutableSet, NSString, NSObject;

@interface SSCacheObjectStore : NSObject {

	SSDatabaseCache* _databaseCache;
	NSMutableSet* _factories;
	NSString* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)description;
-(void)dealloc;
-(id)_factoryForTypeIdentifier:(id)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(void)clearSession;
-(BOOL)addObject:(id)arg1 withItemIdentifier:(id)arg2 ;
-(BOOL)removeObjectWithItemIdentifier:(id)arg1 ;
-(id)cacheObjectWithItemIdentifier:(id)arg1 ;
-(void)addCacheObjectFactory:(id)arg1 ;
-(void)removeCacheObjectFactory:(id)arg1 ;
@end

