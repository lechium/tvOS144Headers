//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBActivatable-Protocol.h"
#import "CBLabelable-Protocol.h"

@class NSArray, NSData, NSString, NSUUID, WPAdvertisingRequest;
@protocol OS_dispatch_queue;

@interface CBAdvertiser : NSObject <CBActivatable, CBLabelable>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _changesPending;	// 9 = 0x9
    unsigned int _clientID;	// 12 = 0xc
    _Bool _invalidateCalled;	// 16 = 0x10
    _Bool _invalidateDone;	// 17 = 0x11
    struct LogCategory *_ucat;	// 24 = 0x18
    _Bool _wiproxObservering;	// 32 = 0x20
    WPAdvertisingRequest *_spatialInteractionAdvertisingRequest;	// 40 = 0x28
    _Bool _spatialInteractionChanged;	// 48 = 0x30
    NSData *_spatialInteractionPayloadData;	// 56 = 0x38
    NSUUID *_spatialInteractionWiProxUUID;	// 64 = 0x40
    unsigned char _spatialInteractionFlags;	// 72 = 0x48
    int _spatialInteractionAdvertiseRate;	// 76 = 0x4c
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 80 = 0x50
    CDUnknownBlockType _invalidationHandler;	// 88 = 0x58
    NSString *_label;	// 96 = 0x60
    NSArray *_spatialInteractionIdentifiers;	// 104 = 0x68
    NSData *_spatialInteractionUWBConfigData;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010002685c
@property(copy, nonatomic) NSData *spatialInteractionUWBConfigData; // @synthesize spatialInteractionUWBConfigData=_spatialInteractionUWBConfigData;
@property(copy, nonatomic) NSArray *spatialInteractionIdentifiers; // @synthesize spatialInteractionIdentifiers=_spatialInteractionIdentifiers;
@property(nonatomic) unsigned char spatialInteractionFlags; // @synthesize spatialInteractionFlags=_spatialInteractionFlags;
@property(nonatomic) int spatialInteractionAdvertiseRate; // @synthesize spatialInteractionAdvertiseRate=_spatialInteractionAdvertiseRate;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_updateSpatialInteractionPayload;	// IMP=0x00000001000264f4
- (void)_updateSpatialInteractionAdvertising;	// IMP=0x0000000100026130
- (void)_update;	// IMP=0x00000001000260a8
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025fc4
- (void)_invalidated;	// IMP=0x0000000100025f04
- (void)_invalidate;	// IMP=0x0000000100025d34
- (void)invalidate;	// IMP=0x0000000100025c34
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025a94
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002597c
- (void)_wiproxChanged:(id)arg1;	// IMP=0x00000001000258a8
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100025230
- (id)description;	// IMP=0x0000000100025220
- (void)dealloc;	// IMP=0x00000001000251c8
- (id)init;	// IMP=0x000000010002514c

@end

