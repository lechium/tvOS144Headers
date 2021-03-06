//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDHostedRoutingController.h"

@class MRAVConcreteRoutingDiscoverySession;

@interface MRDAVHostedRoutingController : MRDHostedRoutingController
{
}

- (void)_logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2;	// IMP=0x00000001000320cc
- (_Bool)_shouldUseOutputDeviceTransport;	// IMP=0x0000000100032078
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x0000000100032028
- (void)_onQueue_reloadEndpoints;	// IMP=0x0000000100031414
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x00000001000311cc
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000100030f28
- (id)createDiscoverySession;	// IMP=0x0000000100030e38

// Remaining properties
@property(retain, nonatomic) MRAVConcreteRoutingDiscoverySession *discoverySession; // @dynamic discoverySession;

@end

