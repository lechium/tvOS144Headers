/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class IDSCKDatabase, NSObject;

@interface IDSCloudKitKeyElectionStore : NSObject {

	IDSCKDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(BOOL)isItemNotFoundError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKDatabase *)database;
-(void)setDatabase:(IDSCKDatabase *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_recordID;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(id)_itemFromRecord:(id)arg1 error:(id*)arg2 ;
-(id)_recordFromItem:(id)arg1 ;
-(void)fetchAccountIdentityItemWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAccountIdentityItemWithCompletion:(/*^block*/id)arg1 ;
-(void)storeAccountIdentityItem:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

