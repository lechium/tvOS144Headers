//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLEngineFileStorageImplementation-Protocol.h"
#import "NSFileManagerDelegate-Protocol.h"

@class NSCountedSet, NSFileManager, NSString, NSURL;

@interface CPLBucketFileStorage : CPLPlatformObject <CPLEngineFileStorageImplementation, NSFileManagerDelegate>
{
    NSURL *_urlForFiles;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    NSString *_logDomain;	// 24 = 0x18
    NSCountedSet *_temporarilyRetainedURLs;	// 32 = 0x20
    NSCountedSet *_temporarilyRetainedURLsAtTheStartOfTransaction;	// 40 = 0x28
    _Bool _trackAllStoresAndDeletes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100067428
@property(nonatomic) _Bool trackAllStoresAndDeletes; // @synthesize trackAllStoresAndDeletes=_trackAllStoresAndDeletes;
- (void)writeTransactionDidSucceed;	// IMP=0x00000001000673f0
- (void)writeTransactionDidFail;	// IMP=0x00000001000673a0
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;	// IMP=0x0000000100067280
- (_Bool)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;	// IMP=0x0000000100067130
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x0000000100066954
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066778
- (_Bool)markForDeleteFileWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006660c
- (_Bool)deleteFileWithIdentity:(id)arg1 includingOriginal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000660f0
- (_Bool)_markURLForDelete:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100065fb8
- (_Bool)discardAllRetainedFileURLsWithError:(id *)arg1;	// IMP=0x0000000100065ed0
- (_Bool)releaseFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100065d74
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100065ae8
- (void)checkFileSizeForIdentity:(id)arg1;	// IMP=0x00000001000659fc
- (_Bool)hasFileWithIdentity:(id)arg1;	// IMP=0x000000010006599c
- (_Bool)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010006540c
- (_Bool)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100064e88
- (_Bool)storeData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 needsCommit:(_Bool *)arg4 onNewFile:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x000000010006481c
- (_Bool)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 moveIfPossible:(_Bool)arg4 needsCommit:(_Bool *)arg5 onNewFile:(CDUnknownBlockType)arg6 error:(id *)arg7;	// IMP=0x0000000100064180
- (_Bool)_fixupStoredDestinationURL:(id)arg1 isOriginal:(_Bool)arg2 needsCommit:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000100063f64
- (_Bool)_getIsOriginal:(_Bool *)arg1 markedForDelete:(_Bool *)arg2 forDestinationURL:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100063d44
- (_Bool)_setIsOriginal:(_Bool *)arg1 markedForDelete:(_Bool *)arg2 onDestinationURL:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100063b20
- (id)_destinationURLForIdentity:(id)arg1;	// IMP=0x0000000100063944
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000010006393c
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000100063860
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0000000100063730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

