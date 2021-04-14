//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictionaryConvertible-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADAudioSessionCoordinationMessageEndAudioSessionResponse : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001b1a8c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b1bb8
- (id)buildDictionaryRepresentation;	// IMP=0x00000001001b1ae4
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001001b1aa4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001b1aa0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001b1a94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001b1a88
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001b1a54
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001001b19e4
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000001001b19a0
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b1c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
