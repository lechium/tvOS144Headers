//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface ADDeviceCountAndTimestamp : NSObject
{
    unsigned long long _deviceCount;	// 8 = 0x8
    NSDate *_timestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100112700
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long deviceCount; // @synthesize deviceCount=_deviceCount;

@end

