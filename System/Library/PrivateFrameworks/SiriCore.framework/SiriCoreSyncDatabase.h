/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject {

	NSString* _path;
	SiriCoreSQLiteDatabase* _db;
	BOOL _inTransaction;
	BOOL _debugMode;

}

@property (assign,nonatomic) BOOL inTransaction;              //@synthesize inTransaction=_inTransaction - In the implementation block
@property (assign,nonatomic) BOOL debugMode;                  //@synthesize debugMode=_debugMode - In the implementation block
+(id)currentSyncDatabase;
+(void)removeCurrentSyncDatabase;
-(id)initWithPath:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)prepare;
-(BOOL)inTransaction;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(BOOL)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id*)arg3 ;
-(int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id*)arg4 ;
-(BOOL)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)succeedOrRollbackOnFail:(id)arg1 error:(id*)arg2 whileExecuting:(/*^block*/id)arg3 ;
-(BOOL)donate:(id)arg1 error:(id*)arg2 ;
-(BOOL)remove:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllItemsOfKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)markAsSent:(id)arg1 error:(id*)arg2 ;
-(int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setInTransaction:(BOOL)arg1 ;
@end

