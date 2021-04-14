//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PAMediaConversionServiceImageMetadataPolicy.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    NSString *_accessibilityDescription;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000a0bc
+ (id)policyWithAccessibilityDescription:(id)arg1;	// IMP=0x000000010000a06c
- (void).cxx_destruct;	// IMP=0x000000010000a4bc
@property(copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
- (id)processMetadata:(id)arg1;	// IMP=0x000000010000a30c
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000010000a1e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000a168
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000a0c4

@end
