//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADTimerStoring-Protocol.h"

@class NSString;

@interface ADUnavailableTimerStore : NSObject <ADTimerStoring>
{
}

- (void)dismissTimersWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e808c
- (void)setTimer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e8014
- (void)getTimerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7fa0
- (id)_createUnavailableError;	// IMP=0x00000001000e7f88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

