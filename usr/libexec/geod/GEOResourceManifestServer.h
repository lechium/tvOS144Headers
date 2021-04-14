//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

#import "GEOResourceManifestServerProxyDelegate-Protocol.h"

@class GEOXPCActivity, NSMapTable, NSMutableSet, NSString, geo_isolater;
@protocol GEOResourceManifestUpdateAssertionRecord;

@interface GEOResourceManifestServer : GEOServer <GEOResourceManifestServerProxyDelegate>
{
    _Bool _isUpdatingResourceManifest;	// 16 = 0x10
    _Bool _isLoadingResources;	// 17 = 0x11
    NSMapTable *_peerToConfiguration;	// 24 = 0x18
    NSMutableSet *_alreadyRegisteredConfigurations;	// 32 = 0x20
    GEOXPCActivity *_activity;	// 40 = 0x28
    geo_isolater *_constrainedNetworkUpdateAssertionIsolation;	// 48 = 0x30
    id <GEOResourceManifestUpdateAssertionRecord> _constrainedNetworkUpdateAssertion;	// 56 = 0x38
}

+ (_Bool)shouldStartImmediately;	// IMP=0x00000001000123a8
+ (id)identifier;	// IMP=0x000000010001239c
- (void).cxx_destruct;	// IMP=0x000000010003a874
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;	// IMP=0x000000010003a550
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000100039c00
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;	// IMP=0x0000000100039948
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;	// IMP=0x000000010003968c
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;	// IMP=0x00000001000393d4
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;	// IMP=0x0000000100039118
- (void)_forEachPeerMatchingConfiguration:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038f34
- (void)getResourceManifestWithMessage:(id)arg1;	// IMP=0x0000000100038b60
- (void)getMaximumZoomLevelWithMessage:(id)arg1;	// IMP=0x0000000100038860
- (void)deactivateScenarioWithMessage:(id)arg1;	// IMP=0x0000000100038718
- (void)activateScenarioWithMessage:(id)arg1;	// IMP=0x00000001000385ec
- (void)deactivateScaleWithMessage:(id)arg1;	// IMP=0x00000001000384a4
- (_Bool)_checkIfCanDeactivateResourceFilter:(id)arg1;	// IMP=0x0000000100038288
- (void)activateScaleWithMessage:(id)arg1;	// IMP=0x000000010003815c
- (void)setRequestTokenWithMessage:(id)arg1;	// IMP=0x0000000100037de8
- (void)resetActiveTileGroupWithMessage:(id)arg1;	// IMP=0x0000000100037d50
- (void)forceUpdateWithMessage:(id)arg1;	// IMP=0x0000000100037b84
- (void)updateIfNecessaryWithMessage:(id)arg1;	// IMP=0x0000000100037a18
- (void)setActiveTileGroupIdentifierWithMessage:(id)arg1;	// IMP=0x00000001000375e4
- (void)setConfigurationWithMessage:(id)arg1;	// IMP=0x0000000100037320
- (void)_fireOpportunisticResourceLoads;	// IMP=0x000000010003724c
- (id)_configurationForPeer:(id)arg1;	// IMP=0x00000001000371b8
- (id)_manifestManagerForPeer:(id)arg1;	// IMP=0x000000010003714c
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x00000001000370c8
- (void)peerDidConnect:(id)arg1;	// IMP=0x0000000100036cfc
- (void)_configureConstrainedNetworkUpdateAssertion;	// IMP=0x0000000100036b60
- (void)dealloc;	// IMP=0x00000001000369dc
- (id)init;	// IMP=0x000000010003673c
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00000001000123b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
