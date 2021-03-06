/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_os_transaction;
@class ENArchive, NSObject, NSArray, ENFile;

@interface ENFileSessionDaemon : NSObject {

	ENArchive* _archive;
	NSObject*<OS_xpc_object> _nextTEKBatch;
	NSArray* _signatures;
	NSObject*<OS_os_transaction> _transaction;
	unsigned _flags;
	unsigned long long _batchSize;
	ENFile* _file;
	unsigned long long _invalidKeyCount;

}

@property (assign,nonatomic) unsigned long long batchSize;                      //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) ENFile * file;                                   //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long invalidKeyCount;              //@synthesize invalidKeyCount=_invalidKeyCount - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)flags;
-(void)invalidate;
-(ENFile *)file;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)_createTransaction;
-(id)readTEKBatchAndReturnError:(id*)arg1 ;
-(unsigned long long)invalidKeyCount;
-(BOOL)activateWithArchiveFD:(int)arg1 error:(id*)arg2 ;
-(BOOL)activateWithFileFD:(int)arg1 signatureData:(id)arg2 error:(id*)arg3 ;
-(id)readSignaturesAndReturnError:(id*)arg1 ;
-(void)prepareNextTEKBatchIfNecessary;
-(BOOL)_resetAndAdvanceArchive:(id)arg1 toPathWithExtension:(id)arg2 error:(id*)arg3 ;
-(id)_readTEKBatchAndReturnError:(id*)arg1 ;
@end

