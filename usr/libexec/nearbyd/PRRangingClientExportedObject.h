//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRAidedRangingClientProtocol-Protocol.h"
#import "PRRangingClientProtocol-Protocol.h"

@class NSString;
@protocol PRRangingClientProtocol;

@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol>
{
    id <PRRangingClientProtocol> _rangingClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100146050
@property(nonatomic) __weak id <PRRangingClientProtocol> rangingClient; // @synthesize rangingClient=_rangingClient;
- (void)sendDataToPeers:(id)arg1;	// IMP=0x0000000100145fc0
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x0000000100145f4c
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x0000000100145ef4
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x0000000100145e88
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;	// IMP=0x0000000100145e3c
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000100145dec
- (id)initWithRangingClient:(id)arg1;	// IMP=0x0000000100145d80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

