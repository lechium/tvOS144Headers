//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface _GCHapticEvent : NSObject <NSSecureCoding>
{
    _Bool _stopped;	// 8 = 0x8
    _Bool _transientBeganAsContinuousEvent;	// 9 = 0x9
    unsigned long long _identifier;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    long long _subtype;	// 32 = 0x20
    double _startTime;	// 40 = 0x28
    double _intensity;	// 48 = 0x30
    double _sharpness;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000280c
@property(nonatomic) _Bool transientBeganAsContinuousEvent; // @synthesize transientBeganAsContinuousEvent=_transientBeganAsContinuousEvent;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000000026c8
- (id)initWithSyntheticCommand:(id)arg1;	// IMP=0x00000000000024ac
- (void)evaluateDeviceNoteParams:(id)arg1;	// IMP=0x000000000000240c
- (pair_218a80e9)valueForNoteParam:(unsigned int)arg1 inParameters:(id)arg2;	// IMP=0x0000000000002258
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000295c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002814

@end
