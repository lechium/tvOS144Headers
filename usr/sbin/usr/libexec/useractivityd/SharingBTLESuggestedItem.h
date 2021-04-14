//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/UAUserActivityInfo.h>

@class NSData, NSDate, NSMutableSet, NSSet, SFActivityScanner, SharingBTLEAdvertisementPayload, UACornerActionManager, UASharingReceiver;

@interface SharingBTLESuggestedItem : UAUserActivityInfo
{
    unsigned int _optionBits;	// 8 = 0x8
    NSDate *_currentUntilDate;	// 16 = 0x10
    SFActivityScanner *_scanner;	// 24 = 0x18
    SharingBTLEAdvertisementPayload *_advertisementPayload;	// 32 = 0x20
    double _payloadAvailabilityDelay;	// 40 = 0x28
    NSMutableSet *_payloadRequestedCompletions;	// 48 = 0x30
    UASharingReceiver *_receiver;	// 56 = 0x38
    UACornerActionManager *_manager;	// 64 = 0x40
    NSSet *_teamIDs;	// 72 = 0x48
    NSDate *_dontPrefetchBefore;	// 80 = 0x50
    NSDate *_removeAfter;	// 88 = 0x58
}

+ (id)statusString;	// IMP=0x0000000100062c30
+ (id)cornerActionBTLEItemWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 scanner:(id)arg5 receiver:(id)arg6;	// IMP=0x000000010005da74
+ (id)cornerActionBTLEItemWithSFAdvertisement:(id)arg1 optionBits:(unsigned int)arg2 scanner:(id)arg3 receiver:(id)arg4;	// IMP=0x000000010005d940
- (void).cxx_destruct;	// IMP=0x0000000100062de4
@property(copy) NSDate *removeAfter; // @synthesize removeAfter=_removeAfter;
@property(copy) NSDate *dontPrefetchBefore; // @synthesize dontPrefetchBefore=_dontPrefetchBefore;
@property(copy) NSSet *teamIDs; // @synthesize teamIDs=_teamIDs;
@property unsigned int optionBits; // @synthesize optionBits=_optionBits;
@property(readonly, retain) UACornerActionManager *manager; // @synthesize manager=_manager;
@property(readonly, retain) UASharingReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain) NSMutableSet *payloadRequestedCompletions; // @synthesize payloadRequestedCompletions=_payloadRequestedCompletions;
@property double payloadAvailabilityDelay; // @synthesize payloadAvailabilityDelay=_payloadAvailabilityDelay;
@property(copy) SharingBTLEAdvertisementPayload *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly, retain) SFActivityScanner *scanner; // @synthesize scanner=_scanner;
@property(copy) NSDate *currentUntilDate; // @synthesize currentUntilDate=_currentUntilDate;
- (id)description;	// IMP=0x0000000100062ad0
- (void)setWhen:(id)arg1;	// IMP=0x00000001000629ac
- (id)when;	// IMP=0x00000001000628c4
- (id)statusString;	// IMP=0x00000001000622f0
- (void)clearPayload;	// IMP=0x00000001000620c8
- (void)resignCurrent;	// IMP=0x0000000100062050
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100060240
- (_Bool)updateFromSFAdvertisement:(id)arg1;	// IMP=0x000000010005fcac
- (id)initWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 type:(unsigned long long)arg5 activityType:(id)arg6 bundleIdentifier:(id)arg7 teamIDs:(id)arg8 advertisingOptions:(id)arg9 scanner:(id)arg10 receiver:(id)arg11;	// IMP=0x000000010005f05c
- (id)initWithPayload:(id)arg1 device:(id)arg2 options:(id)arg3 optionBits:(unsigned int)arg4 type:(unsigned long long)arg5 activityType:(id)arg6 bundleIdentifier:(id)arg7 teamIDs:(id)arg8 advertisingOptions:(id)arg9 scanner:(id)arg10 receiver:(id)arg11 dynamicIdentifier:(id)arg12;	// IMP=0x000000010005eed0

// Remaining properties
@property(readonly, copy) NSData *BTLEPayloadData; // @dynamic BTLEPayloadData;

@end
