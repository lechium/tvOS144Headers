//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDateInterval, NSMutableSet, NSSet;

@interface ASCSignpostSpan : NSObject <NSSecureCoding>
{
    unsigned long long _primaryTag;	// 8 = 0x8
    NSMutableSet *_mutableSupplementaryTags;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001112c
- (void).cxx_destruct;	// IMP=0x00000001000119a0
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSMutableSet *mutableSupplementaryTags; // @synthesize mutableSupplementaryTags=_mutableSupplementaryTags;
@property(readonly, nonatomic) unsigned long long primaryTag; // @synthesize primaryTag=_primaryTag;
- (id)description;	// IMP=0x0000000100011814
- (void)endEmitting;	// IMP=0x0000000100011714
- (void)beginEmitting;	// IMP=0x0000000100011664
- (void)addSupplementaryTag:(unsigned long long)arg1;	// IMP=0x00000001000115ec
@property(readonly, copy, nonatomic) NSDateInterval *dateRange;
@property(readonly, copy, nonatomic) NSSet *supplementaryTags;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100011318
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100011134
- (id)init;	// IMP=0x00000001000110c0

@end
