//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCPlatformBluetoothStatusAccessory, NSMutableDictionary, NSString;

@interface _ACCBTConnectionStatusAccessory : NSObject
{
    NSString *_accessoryUID;	// 8 = 0x8
    NSMutableDictionary *_components;	// 16 = 0x10
    ACCPlatformBluetoothStatusAccessory *_pluginAccessory;	// 24 = 0x18
}

+ (id)accessoryList;	// IMP=0x00000001000f2c5c
- (void).cxx_destruct;	// IMP=0x00000001000f2cf8
@property(retain, nonatomic) ACCPlatformBluetoothStatusAccessory *pluginAccessory; // @synthesize pluginAccessory=_pluginAccessory;
@property(readonly, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
@property(retain, nonatomic) NSString *accessoryUID; // @synthesize accessoryUID=_accessoryUID;
- (void)componentUpdate:(id)arg1;	// IMP=0x00000001000f27e8
- (void)dealloc;	// IMP=0x00000001000f2748
- (id)initWithUID:(id)arg1;	// IMP=0x00000001000f2664

@end

