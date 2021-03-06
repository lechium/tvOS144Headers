//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSSet, NSURL;
@protocol PDTransactionReceiptFileManagerDelegate;

@interface PDTransactionReceiptFileManager : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    struct os_unfair_lock_s _fileAccessLock;	// 16 = 0x10
    id <PDTransactionReceiptFileManagerDelegate> _delegate;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100273784
- (id)_transactionReceiptUniqueIDFromFileURL:(id)arg1;	// IMP=0x0000000100273720
- (_Bool)_isTransactionReceiptFileURL:(id)arg1;	// IMP=0x000000010027369c
- (id)_fileURLForTransactionReceiptUniqueID:(id)arg1;	// IMP=0x000000010027362c
- (void)registerDatabaseTransactionReceipt:(id)arg1;	// IMP=0x0000000100273564
- (_Bool)deleteTransactionReceiptWithUniqueID:(id)arg1;	// IMP=0x0000000100273480
- (void)_downloadImageURLsForReceipt:(id)arg1 atURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100272e08
- (void)writeTransactionReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100272b08
- (id)transactionReceiptWithUniqueID:(id)arg1;	// IMP=0x0000000100272a3c
@property(readonly, nonatomic) NSSet *transactionReceipts;
@property(readonly, nonatomic) NSSet *uniqueIDs;
- (id)initWithDirectoryURL:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100272594

@end

