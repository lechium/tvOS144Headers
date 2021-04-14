/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSCache, NSHashTable;

@interface BSSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;
	NSHashTable* _queue_observers;

}
-(id)init;
-(void)dealloc;
-(void)close;
-(id)initWithInMemoryDatabase;
-(id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(id)prepareStatement:(id)arg1 ;
-(BOOL)truncateDatabaseAndReturnError:(out id*)arg1 ;
@end

