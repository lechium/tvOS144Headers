//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_stringValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000128e0
+ (id)invalidAdamID;	// IMP=0x00000001000128bc
- (void).cxx_destruct;	// IMP=0x0000000100012d00
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) long long int64value;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
- (id)description;	// IMP=0x0000000100012b8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100012a7c
- (unsigned long long)hash;	// IMP=0x0000000100012a30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100012a2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000129b4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000128e8
- (id)initWithInt64:(long long)arg1;	// IMP=0x0000000100012848
- (id)initWithNumberValue:(id)arg1;	// IMP=0x00000001000127ec
- (id)initWithStringValue:(id)arg1;	// IMP=0x000000010001276c

@end

