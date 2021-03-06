//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, RPPeopleDiscovery, SDXPCHelperConnection;

__attribute__((visibility("hidden")))
@interface SDRapportBrowser : NSObject
{
    long long _startCount;	// 8 = 0x8
    NSMutableDictionary *_cachedNodes;	// 16 = 0x10
    RPPeopleDiscovery *_peopleDiscovery;	// 24 = 0x18
    SDXPCHelperConnection *_helperConnection;	// 32 = 0x20
}

+ (id)deviceTypeFromModelIdentifier:(id)arg1;	// IMP=0x00000001000b1338
+ (id)deviceImageNameFromModelIdentifier:(id)arg1;	// IMP=0x00000001000b0ef4
+ (_Bool)deviceIsEligibleForAirDrop:(id)arg1;	// IMP=0x00000001000b0e04
+ (_Bool)personHasAirDropEligibleDevice:(id)arg1;	// IMP=0x00000001000b0cc0
+ (id)identifiersForPerson:(id)arg1;	// IMP=0x00000001000b0bc0
+ (unsigned long long)defaultSFNodeFlags;	// IMP=0x00000001000b0398
+ (void)updateRangingMeasurementForDevice:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x00000001000b02f8
+ (void)updateRangingMeasurementForPerson:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x00000001000b00b4
+ (id)sharedRapportBrowser;	// IMP=0x00000001000aea78
- (void).cxx_destruct;	// IMP=0x00000001000b1488
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (struct __SFNode *)createSFNodeFromMyRPDevice:(id)arg1;	// IMP=0x00000001000b0a98
- (struct __SFNode *)createSFNodeFromRPPerson:(id)arg1;	// IMP=0x00000001000b08d4
- (struct __SFNode *)createSFNodeFromCNContact:(id)arg1 identifier:(id)arg2 device:(id)arg3;	// IMP=0x00000001000b03a0
- (void)resumeHandoffAdvertisingIfAppropriate;	// IMP=0x00000001000b0020
- (void)stopHandoffAdvertisingIfAppropriate;	// IMP=0x00000001000aff8c
- (_Bool)shouldStopHandoffAdvertising;	// IMP=0x00000001000aff60
- (id)assertionIdentifier;	// IMP=0x00000001000aff28
- (void)removeNodesForPerson:(id)arg1;	// IMP=0x00000001000afeb4
- (void)addOrUpdateNodesForPerson:(id)arg1 withChanges:(unsigned int)arg2;	// IMP=0x00000001000af928
@property(readonly, copy) NSArray *nodes;
- (void)removeObservers;	// IMP=0x00000001000af8c8
- (void)addObservers;	// IMP=0x00000001000af860
- (void)contactsChanged:(id)arg1;	// IMP=0x00000001000af6d8
- (void)_stop;	// IMP=0x00000001000af62c
- (void)_start;	// IMP=0x00000001000aecb8
- (void)stop;	// IMP=0x00000001000aebe4
- (void)start;	// IMP=0x00000001000aeb18
- (id)init;	// IMP=0x00000001000aeae4

@end

