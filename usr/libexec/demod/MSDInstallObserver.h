//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXAppInstallCoordinatorObserver-Protocol.h"

@class NSError, NSString;
@protocol OS_dispatch_semaphore;

@interface MSDInstallObserver : NSObject <IXAppInstallCoordinatorObserver>
{
    NSError *_error;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_completeSemaphore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004b3f4
@property(readonly) NSObject<OS_dispatch_semaphore> *completeSemaphore; // @synthesize completeSemaphore=_completeSemaphore;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x000000010004b254
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;	// IMP=0x000000010004b208
- (id)init;	// IMP=0x000000010004b19c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

