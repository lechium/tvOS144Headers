//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCGestureEvent.h>

@class AXEventRepresentation;

@interface VOTGestureEvent : SCRCGestureEvent
{
    AXEventRepresentation *_eventRepresentation;	// 8 = 0x8
}

+ (id)gestureEventWithEventRepresentation:(id)arg1;	// IMP=0x000000010005b88c
- (void).cxx_destruct;	// IMP=0x000000010005c1cc
@property(retain, nonatomic) AXEventRepresentation *eventRepresentation; // @synthesize eventRepresentation=_eventRepresentation;
- (_Bool)didFallThruToDevice;	// IMP=0x000000010005c190
- (void)_addFingerInformation;	// IMP=0x000000010005bf08
- (_Bool)isStylusEvent;	// IMP=0x000000010005beb0
- (_Bool)isMovedEvent;	// IMP=0x000000010005be34
- (_Bool)isDownEvent;	// IMP=0x000000010005bdb8
- (_Bool)isNonLiftingInRangeEvent;	// IMP=0x000000010005bd34
- (_Bool)_isBogusTouchEvent;	// IMP=0x000000010005bca0
- (_Bool)_eventMaskHasTouch;	// IMP=0x000000010005bbdc
- (_Bool)isLiftEvent;	// IMP=0x000000010005bb44
- (_Bool)isCancelEvent;	// IMP=0x000000010005bae8
- (id)description;	// IMP=0x000000010005b9cc
- (void)dealloc;	// IMP=0x000000010005b97c
- (id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2;	// IMP=0x000000010005b8fc

@end

