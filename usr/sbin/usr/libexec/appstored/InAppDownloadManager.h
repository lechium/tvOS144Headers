//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, NSMutableDictionary, NSOperationQueue;

@interface InAppDownloadManager : NSObject
{
    NSLock *_downloadLock;	// 8 = 0x8
    NSOperationQueue *_downloadQueue;	// 16 = 0x10
    NSMapTable *_observers;	// 24 = 0x18
    NSMutableDictionary *_pendingDownloads;	// 32 = 0x20
}

+ (id)manager;	// IMP=0x00000001000b8840
- (void).cxx_destruct;	// IMP=0x00000001000ba464
- (void)_notifyObserversDownloadStatusChanged:(id)arg1;	// IMP=0x00000001000ba2dc
- (id)processDownloadsForTransactions:(id)arg1;	// IMP=0x00000001000b9c8c
- (void)removeDownloadsForTransactionID:(id)arg1;	// IMP=0x00000001000b95d8
- (void)pauseDownloadWithID:(id)arg1;	// IMP=0x00000001000b935c
- (void)cancelDownloadWithID:(id)arg1;	// IMP=0x00000001000b90e0
- (_Bool)startDownloadWithID:(id)arg1 client:(id)arg2;	// IMP=0x00000001000b8b0c
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000b8a8c
- (id)addObserver:(id)arg1;	// IMP=0x00000001000b89c0
- (id)init;	// IMP=0x00000001000b88dc

@end
