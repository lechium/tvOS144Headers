//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CacheDeleteOperation.h"

#import "CacheDeleteOperation-Protocol.h"

@class CDPurgeOperationResult, NSArray, NSString;
@protocol CDPurgeableResultCache;

__attribute__((visibility("hidden")))
@interface CacheDeletePurgeOperation : CacheDeleteOperation <CacheDeleteOperation>
{
    _Bool _cancel;	// 8 = 0x8
    unsigned long long _purge_amount_needed;	// 16 = 0x10
    unsigned long long _purge_amount_reported;	// 24 = 0x18
    CDPurgeOperationResult *_purgeResult;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003c0e8
@property(retain, nonatomic) CDPurgeOperationResult *purgeResult; // @synthesize purgeResult=_purgeResult;
@property unsigned long long purge_amount_reported; // @synthesize purge_amount_reported=_purge_amount_reported;
@property(readonly) unsigned long long purge_amount_needed; // @synthesize purge_amount_needed=_purge_amount_needed;
@property _Bool cancel; // @synthesize cancel=_cancel;
- (void)serviceRequest:(id)arg1 volume:(id)arg2 urgency:(int)arg3 donation:(unsigned long long)arg4 info:(id)arg5 optionalTestInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010003b2d0
- (void)oneShot:(id)arg1 volume:(id)arg2 urgency:(int)arg3 donation:(unsigned long long)arg4 currentRoundResults:(id)arg5 timeout:(unsigned long long)arg6 info:(id)arg7 optionalTestInfo:(id)arg8;	// IMP=0x000000010003a688
- (void)_startOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035084
- (id)filterServices:(id)arg1;	// IMP=0x0000000100034ea8
- (unsigned long long)volumeContribution:(id)arg1 urgency:(int)arg2 isTargetVolume:(_Bool)arg3;	// IMP=0x0000000100034d44
- (void)batchServicesForVolume:(id)arg1 atUrgency:(int)arg2 services:(id)arg3 batchSize:(int)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000100034290
- (id)purgeSentinel:(_Bool)arg1 outInode:(unsigned long long *)arg2;	// IMP=0x0000000100033e14
- (void)tryFSPurge:(unsigned long long)arg1 atUrgency:(int)arg2 onVolume:(id)arg3 orderedServices:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100033b08
- (void)cancelOperation;	// IMP=0x00000001000338c8
- (id)initWithInfo:(id)arg1 services:(id)arg2 volumes:(id)arg3;	// IMP=0x0000000100033558

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <CDPurgeableResultCache> resultCache;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *volumes;

@end

