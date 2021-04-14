//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HIDBluetoothDevice.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface HIDGenericDevice : HIDBluetoothDevice
{
    struct __IOHIDUserDevice *_device;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002be20
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) struct __IOHIDUserDevice *device; // @synthesize device=_device;
- (int)setReport:(char *)arg1 reportLength:(long long)arg2 reportID:(unsigned char)arg3 reportType:(int)arg4;	// IMP=0x000000010002bdc4
- (int)getReport:(char *)arg1 reportLength:(long long *)arg2 reportID:(unsigned char)arg3 reportType:(int)arg4;	// IMP=0x000000010002bd9c
- (void)stop;	// IMP=0x000000010002bc98
- (void)start;	// IMP=0x000000010002bbcc
- (void)dealloc;	// IMP=0x000000010002bb68
- (id)initWithProperties:(id)arg1 reports:(id)arg2;	// IMP=0x000000010002ba58

@end
