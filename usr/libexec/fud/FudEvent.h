//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AUDAccessory, NSDictionary, NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface FudEvent : NSObject
{
    int type;	// 8 = 0x8
    NSString *filterName;	// 16 = 0x10
    NSString *clientName;	// 24 = 0x18
    NSDictionary *clientOptions;	// 32 = 0x20
    NSObject<OS_xpc_object> *data;	// 40 = 0x28
    _Bool isConnectionEvent;	// 48 = 0x30
    _Bool synthesizedEvent;	// 49 = 0x31
    _Bool sendResponse;	// 50 = 0x32
    AUDAccessory *accessory;	// 56 = 0x38
    AUDAccessory *_accessory;	// 64 = 0x40
}

@property(retain) AUDAccessory *accessory; // @synthesize accessory=_accessory;
@property _Bool sendResponse; // @synthesize sendResponse;
@property _Bool synthesizedEvent; // @synthesize synthesizedEvent;
@property _Bool isConnectionEvent; // @synthesize isConnectionEvent;
@property(retain) NSDictionary *clientOptions; // @synthesize clientOptions;
@property(retain) NSString *clientName; // @synthesize clientName;
@property(readonly) NSObject<OS_xpc_object> *data; // @synthesize data;
@property(retain) NSString *filterName; // @synthesize filterName;
@property(readonly) int type; // @synthesize type;
- (void)dealloc;	// IMP=0x0000000100011ac4
- (id)description;	// IMP=0x0000000100011a38
- (_Bool)isInternalEvent;	// IMP=0x0000000100011a20
- (id)initWithEventType:(int)arg1 filter:(id)arg2 client:(id)arg3 data:(id)arg4;	// IMP=0x0000000100011794

@end

