//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HRHandleStateChange : NSObject
{
    long long _type;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    unsigned long long _name;	// 24 = 0x18
}

@property unsigned long long name; // @synthesize name=_name;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 andTimestamp:(unsigned long long)arg2 andName:(unsigned long long)arg3;	// IMP=0x00000001000061fc

@end

