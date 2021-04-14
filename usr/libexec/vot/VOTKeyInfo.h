//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AXEventRepresentation, NSString;

@interface VOTKeyInfo : NSObject <NSCopying>
{
    AXEventRepresentation *_eventRecord;	// 8 = 0x8
    struct {
        unsigned int keyDown:1;
        unsigned int keyUp:1;
        unsigned int modifiersChanged:1;
    } _flags;	// 16 = 0x10
    unsigned int _changedModifiers;	// 20 = 0x14
    NSString *_characters;	// 24 = 0x18
    NSString *_originalCharacters;	// 32 = 0x20
    long long _eventOrigin;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000eaaf8
@property(nonatomic) unsigned int changedModifiers; // @synthesize changedModifiers=_changedModifiers;
@property(nonatomic) long long eventOrigin; // @synthesize eventOrigin=_eventOrigin;
@property(retain, nonatomic) NSString *originalCharacters; // @synthesize originalCharacters=_originalCharacters;
@property(retain, nonatomic) NSString *characters; // @synthesize characters=_characters;
@property(retain, nonatomic) AXEventRepresentation *eventRecord; // @synthesize eventRecord=_eventRecord;
- (id)description;	// IMP=0x00000001000ea884
@property(readonly, nonatomic) _Bool isEscapeKey;
@property(readonly, nonatomic) _Bool isBrightnessKey;
@property(readonly, nonatomic) _Bool isAppleVendorKey;
@property(readonly, nonatomic) _Bool isMediaKey; // @dynamic isMediaKey;
@property(readonly, nonatomic) _Bool isArrowKey;
@property(readonly, nonatomic) int mediaKeyCode; // @dynamic mediaKeyCode;
@property(readonly, nonatomic) _Bool isKeyboardSelectKey;
@property(readonly, nonatomic) _Bool isCapsLockKeyUp;
@property(readonly, nonatomic) _Bool isCapsLockKeyDown;
@property(readonly, nonatomic) _Bool isCapsLockKeyToggledOn; // @dynamic isCapsLockKeyToggledOn;
@property(readonly, nonatomic) _Bool isControlKeyPressed; // @dynamic isControlKeyPressed;
@property(readonly, nonatomic) _Bool isOptionKeyPressed; // @dynamic isOptionKeyPressed;
@property(readonly, nonatomic) _Bool isCommandKeyPressed; // @dynamic isCommandKeyPressed;
@property(readonly, nonatomic) _Bool isShiftKeyPressed; // @dynamic isShiftKeyPressed;
@property(readonly, nonatomic) _Bool isFNKeyPressed;
@property(readonly, nonatomic) _Bool isFNKey;
@property(nonatomic) unsigned short keyCode; // @dynamic keyCode;
@property(nonatomic) _Bool keyUp; // @dynamic keyUp;
@property(nonatomic) _Bool keyDown; // @dynamic keyDown;
@property(nonatomic) _Bool modifiersChanged; // @dynamic modifiersChanged;
@property(readonly, nonatomic) unsigned int modifierState; // @dynamic modifierState;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ea218
- (id)initWithEventRepresentation:(id)arg1;	// IMP=0x00000001000ea0ac
- (void)_setCommandKeyPressed:(_Bool)arg1;	// IMP=0x00000001000eab34

@end

