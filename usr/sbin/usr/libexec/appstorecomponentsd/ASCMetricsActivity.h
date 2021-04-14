//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000b040
+ (id)defaultFields;	// IMP=0x000000010000adf4
- (void).cxx_destruct;	// IMP=0x000000010000b670
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x000000010000b5b4
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b4e8
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010000b414
- (id)description;	// IMP=0x000000010000b370
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000b260
- (unsigned long long)hash;	// IMP=0x000000010000b1dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000b1d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000b160
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000b048
- (id)init;	// IMP=0x000000010000b02c
- (id)initWithFields:(id)arg1;	// IMP=0x000000010000af54

@end

