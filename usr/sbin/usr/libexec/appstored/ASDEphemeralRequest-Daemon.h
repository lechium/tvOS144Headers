//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDEphemeralRequest.h>

#import "RequestController-Protocol.h"

@interface ASDEphemeralRequest (Daemon) <RequestController>
+ (id)_newOperationForClient:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000001000feb48
- (void)startUsingProxy:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe7b4
- (void)cancelUsingProxy:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe7b0
@end

