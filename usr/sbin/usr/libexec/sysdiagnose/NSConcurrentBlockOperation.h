//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

__attribute__((visibility("hidden")))
@interface NSConcurrentBlockOperation : NSBlockOperation
{
    _Bool executing;	// 8 = 0x8
    _Bool finished;	// 9 = 0x9
}

- (void)completeOperation;	// IMP=0x000000010003ab00
- (void)main;	// IMP=0x000000010003a958
- (void)start;	// IMP=0x000000010003a8a8
- (_Bool)isAsynchronous;	// IMP=0x000000010003a8a0
- (_Bool)isFinished;	// IMP=0x000000010003a890
- (_Bool)isExecuting;	// IMP=0x000000010003a880

@end

