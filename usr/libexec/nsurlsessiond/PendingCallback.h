//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface PendingCallback : NSObject <NSSecureCoding>
{
    _Bool _hasBeenDrained;	// 8 = 0x8
    int _type;	// 12 = 0xc
    unsigned long long _taskIdentifier;	// 16 = 0x10
    NSArray *_args;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000510e0
- (void).cxx_destruct;	// IMP=0x00000001000510d4
@property _Bool hasBeenDrained; // @synthesize hasBeenDrained=_hasBeenDrained;
@property(copy) NSArray *args; // @synthesize args=_args;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property int type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100050f78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100050e84
- (id)initWithCallbackType:(int)arg1 taskIdentifier:(unsigned long long)arg2 args:(id)arg3;	// IMP=0x0000000100050da0

@end

