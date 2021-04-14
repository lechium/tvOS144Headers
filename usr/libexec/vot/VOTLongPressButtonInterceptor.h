//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VOTButtonInterceptor.h"

@class AXEventRepresentation, SCRCTargetSelectorTimer;

@interface VOTLongPressButtonInterceptor : VOTButtonInterceptor
{
    _Bool _clickDown;	// 9 = 0x9
    CDUnknownBlockType _longPressHandler;	// 16 = 0x10
    SCRCTargetSelectorTimer *_timer;	// 24 = 0x18
    double _longPressDelay;	// 32 = 0x20
    AXEventRepresentation *_pendingDownEvent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100106d58
@property(retain, nonatomic) AXEventRepresentation *pendingDownEvent; // @synthesize pendingDownEvent=_pendingDownEvent;
@property(nonatomic) double longPressDelay; // @synthesize longPressDelay=_longPressDelay;
@property(retain, nonatomic) SCRCTargetSelectorTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType longPressHandler; // @synthesize longPressHandler=_longPressHandler;
- (void)_timerFired;	// IMP=0x0000000100106c54
- (void)buttonUpOccurred:(id)arg1;	// IMP=0x0000000100106adc
- (void)buttonDownOccurred:(id)arg1;	// IMP=0x0000000100106a00
- (void)dealloc;	// IMP=0x0000000100106994
- (id)initWithThreadKey:(id)arg1 longPressDelay:(double)arg2 longPressHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001068a8

@end

