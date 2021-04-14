//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDTaskAssertion, MRPlayerPath;
@protocol MRTransactionDelegate;

@interface MRTransaction : NSObject
{
    unsigned long long _bytesInUse;	// 8 = 0x8
    MRDTaskAssertion *_taskAssertion;	// 16 = 0x10
    id <MRTransactionDelegate> _delegate;	// 24 = 0x18
    unsigned long long _name;	// 32 = 0x20
    MRPlayerPath *_playerPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100038b6c
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
@property(nonatomic) __weak id <MRTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_calculateMemory;	// IMP=0x0000000100038af0
- (void)_transactionEnded;	// IMP=0x0000000100038a58
- (void)_query:(id)arg1;	// IMP=0x00000001000385f4
- (void)_processMessage:(id)arg1;	// IMP=0x00000001000383d0
- (void)cancel;	// IMP=0x000000010003835c
- (void)send:(id)arg1 toConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038154
- (void)dealloc;	// IMP=0x00000001000380b8
- (double)outOfMemoryWaitDuration;	// IMP=0x0000000100038028
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2;	// IMP=0x0000000100037f5c
- (id)initWithName:(unsigned long long)arg1 fromMessage:(id)arg2 withDelegate:(id)arg3;	// IMP=0x0000000100037cbc

@end
