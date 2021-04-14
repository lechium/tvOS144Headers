//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDNetworkTask.h"

@class PDSecureConnectionManager;

@interface PDNetworkConnectionTask : PDNetworkTask
{
    PDSecureConnectionManager *_connectionManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000e4740
- (void)handleError:(id)arg1;	// IMP=0x00000001000e4734
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000001000e4728
- (id)request;	// IMP=0x00000001000e4720
- (void)_destroyConnectionManager;	// IMP=0x00000001000e46bc
- (void)_handleConnectionFailureWithError:(id)arg1;	// IMP=0x00000001000e46b0
- (void)_handleConnectionSuccessWithResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000001000e4660
- (void)_startConnection:(_Bool)arg1;	// IMP=0x00000001000e4364
- (void)performReset;	// IMP=0x00000001000e4314
- (void)performCancel;	// IMP=0x00000001000e42fc
- (void)performStart:(_Bool)arg1;	// IMP=0x00000001000e42f0
- (void)dealloc;	// IMP=0x00000001000e42a4

@end
