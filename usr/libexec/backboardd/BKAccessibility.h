//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKAccessibility : NSObject
{
}

+ (void)_setCapsLockLightOn:(_Bool)arg1;	// IMP=0x0000000100043e40
+ (id)_eventRoutingClientConnectionManager;	// IMP=0x0000000100043e3c
+ (_Bool)_isDisplayBacklightOff;	// IMP=0x0000000100043df4
+ (_Bool)_objectWithinProximity;	// IMP=0x0000000100043d68
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x0000000100043cac
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x0000000100043bf0
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1;	// IMP=0x0000000100043be8
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1;	// IMP=0x0000000100043be0
+ (CDUnknownFunctionPointerType)_accessibilityHIDEventTapCallback;	// IMP=0x0000000100043bdc
+ (void)_accessibilitySetHIDEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000100043bd4
+ (CDUnknownFunctionPointerType)_accessibilityEventTapCallback;	// IMP=0x0000000100043bd0
+ (void)_accessibilitySetEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000100043bc8
+ (void)_accessibilityProcessExternHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100043b78

@end

