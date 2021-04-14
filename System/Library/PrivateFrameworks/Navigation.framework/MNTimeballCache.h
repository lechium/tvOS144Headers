/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOSQLiteDB;

@interface MNTimeballCache : NSObject {

	GEOSQLiteDB* _db;

}
-(void)dealloc;
-(id)initWithDBFilePath:(id)arg1 ;
-(void)clearCache:(/*^block*/id)arg1 ;
-(void)setRouteUpdate:(id)arg1 forDestination:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getEntriesUpdatedAfter:(id)arg1 entryBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getEntryForDestination:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNextRefreshDate:(id)arg1 forDestination:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getEntriesScheduledForRefreshAfter:(id)arg1 entryBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_setupDBWithDrop:(BOOL)arg1 ;
-(/*^block*/id)_errorBlockWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleResult:(BOOL)arg1 forStatement:(id)arg2 error:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)deleteRouteUpdateForDestination:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pruneCache:(/*^block*/id)arg1 ;
@end

