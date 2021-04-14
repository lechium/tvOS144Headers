/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSURL;

@interface ENSQLiteConnection : NSObject {

	sqlite3Ref _db;
	CFDictionaryRef _statementCache;
	BOOL _isInTransaction;
	int _additionalOpenFlags;
	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (assign,nonatomic) int additionalOpenFlags;                    //@synthesize additionalOpenFlags=_additionalOpenFlags - In the implementation block
-(id)init;
-(void)dealloc;
-(void)close;
-(NSURL *)fileURL;
-(BOOL)isOpen;
-(int)openWithError:(id*)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(long long)lastInsertedRowID;
-(id)_initWithDatabaseURL:(id)arg1 ;
-(id)_lastErrorWithResultCode:(int)arg1 ;
-(BOOL)executeUncachedSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeSQL:(id)arg1 cacheStatement:(BOOL)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 enumerationHandler:(/*^block*/id)arg5 ;
-(BOOL)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)_prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 statementHandler:(/*^block*/id)arg4 ;
-(BOOL)setIntegerValue:(long long)arg1 forPragma:(id)arg2 error:(id*)arg3 ;
-(BOOL)getIntegerValue:(long long*)arg1 forPragma:(id)arg2 error:(id*)arg3 ;
-(BOOL)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeUncachedSQLStatements:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(BOOL)setUserVersion:(long long)arg1 error:(id*)arg2 ;
-(BOOL)getUserVersion:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)truncateWithError:(id*)arg1 ;
-(int)additionalOpenFlags;
-(void)setAdditionalOpenFlags:(int)arg1 ;
@end
