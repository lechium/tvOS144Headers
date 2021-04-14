//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictionaryConvertible-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface ADAudioSessionCoordinationMessageBeginAudioSessionRequest : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    NSDate *_effectiveDate;	// 8 = 0x8
    double _expirationDuration;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001b7e5c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b8428
- (void).cxx_destruct;	// IMP=0x00000001001b8224
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
- (id)buildDictionaryRepresentation;	// IMP=0x00000001001b8148
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001001b7fec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001b7f54
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001b7e64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001b7e58
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001b7d5c
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001001b7afc
@property(readonly, copy) NSString *description;
- (id)initWithEffectiveDate:(id)arg1 expirationDuration:(double)arg2;	// IMP=0x00000001001b7a5c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b84a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
