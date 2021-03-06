//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSMultiUserServiceProtocol-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AMSDMultiUserService : NSObject <AMSMultiUserServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)_sanitizeError:(id)arg1;	// IMP=0x0000000100022558
+ (id)sharedService;	// IMP=0x000000010001f250
+ (Class)machService;	// IMP=0x000000010001f244
- (void).cxx_destruct;	// IMP=0x0000000100022808
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)multiUserTokenForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000226e4
- (void)setiTunesAccount:(id)arg1 forHomeWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000224e0
- (void)refreshAfterTimeInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000220d4
- (void)multiUserTokenForAccount:(id)arg1 homeUserIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021138
- (void)invalidateMultiUserTokenForAccount:(id)arg1 homeUserIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000208bc
- (void)generateInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f348
- (id)init;	// IMP=0x000000010001f2bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

