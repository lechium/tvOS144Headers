//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BLOperationQueueProtocol-Protocol.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface BLOperationQueue : NSObject <BLOperationQueueProtocol>
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100021858
@property(nonatomic) long long qualityOfService;
- (void)setSuspended:(_Bool)arg1;	// IMP=0x0000000100021828
- (void)setName:(id)arg1;	// IMP=0x0000000100021818
- (void)setMaxConcurrentOperationCount:(long long)arg1;	// IMP=0x0000000100021808
- (id)operations;	// IMP=0x00000001000217f8
- (id)name;	// IMP=0x00000001000217e8
- (long long)maxConcurrentOperationCount;	// IMP=0x00000001000217d8
- (long long)operationCount;	// IMP=0x00000001000217c8
- (void)cancelAllOperations;	// IMP=0x00000001000217b8
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x00000001000217a8
- (void)addOperation:(id)arg1;	// IMP=0x0000000100021798
- (void)dealloc;	// IMP=0x0000000100021748
- (id)init;	// IMP=0x00000001000216d0

@end

