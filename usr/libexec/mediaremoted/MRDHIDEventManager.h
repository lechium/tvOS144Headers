//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRDHIDEventManager : NSObject
{
}

- (void)_dispatchKeypressEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2;	// IMP=0x0000000100013f28
- (void)dispatchUnicodeEventWithText:(id)arg1;	// IMP=0x0000000100013e48
- (void)dispatchKeypressEvent:(unsigned long long)arg1;	// IMP=0x0000000100013e1c
- (void)dispatchHomeButton;	// IMP=0x0000000100013e08
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100013de0

@end

