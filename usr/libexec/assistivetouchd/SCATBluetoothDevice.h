//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCATBluetoothDevice : NSObject
{
    NSString *_addressString;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    _Bool _connected;	// 24 = 0x18
}

+ (id)scatBluetoothDeviceWithDevice:(struct BTDeviceImpl *)arg1 accessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x0000000100069e9c
- (void).cxx_destruct;	// IMP=0x000000010006a388
- (void)customMessageReceived:(int)arg1 withData:(id)arg2;	// IMP=0x000000010006a384
- (void)deviceDisappeared;	// IMP=0x000000010006a380
- (unsigned long long)deviceType;	// IMP=0x000000010006a378
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool connected;
@property(readonly, nonatomic) NSString *addressString;
- (_Bool)updateWithDevice:(struct BTDeviceImpl *)arg1 error:(id *)arg2;	// IMP=0x000000010006a354
- (id)initWithDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x000000010006a2d4
- (_Bool)_setPropertiesFromDevice:(struct BTDeviceImpl *)arg1 error:(id *)arg2;	// IMP=0x000000010006a0e0
- (id)description;	// IMP=0x000000010006a06c

@end

