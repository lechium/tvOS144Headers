//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADFanInfo : NSObject
{
    unsigned long long _fanId;	// 8 = 0x8
    long long _currentSpeed;	// 16 = 0x10
    long long _targetSpeed;	// 24 = 0x18
}

@property(nonatomic) long long targetSpeed; // @synthesize targetSpeed=_targetSpeed;
@property(nonatomic) long long currentSpeed; // @synthesize currentSpeed=_currentSpeed;
@property(nonatomic) unsigned long long fanId; // @synthesize fanId=_fanId;

@end

