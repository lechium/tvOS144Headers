//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASCOfferMetadata.h"

@interface ASCProgressOfferMetadata : ASCOfferMetadata
{
    _Bool _indeterminate;	// 8 = 0x8
    double _percent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000dde8
@property(nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(readonly, nonatomic) double percent; // @synthesize percent=_percent;
- (_Bool)isProgress;	// IMP=0x000000010000e0c8
- (id)description;	// IMP=0x000000010000e03c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000df74
- (unsigned long long)hash;	// IMP=0x000000010000df04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000de78
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000ddf0
- (id)initIndeterminate;	// IMP=0x000000010000dda0
- (id)initWithPercent:(double)arg1;	// IMP=0x000000010000dd50

@end
