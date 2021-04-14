//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCOffer-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ASCAppOffer : NSObject <ASCOffer, NSSecureCoding, NSCopying>
{
    ASCAdamID *_id;	// 8 = 0x8
    NSDictionary *_titles;	// 16 = 0x10
    NSDictionary *_subtitles;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    NSNumber *_ageRating;	// 40 = 0x28
    NSArray *_metrics;	// 48 = 0x30
    NSString *_baseBuyParams;	// 56 = 0x38
    NSString *_metricsBuyParams;	// 64 = 0x40
    NSDictionary *_additionalHeaders;	// 72 = 0x48
    NSURL *_preflightPackageURL;	// 80 = 0x50
    NSString *_bundleID;	// 88 = 0x58
    NSString *_itemName;	// 96 = 0x60
    NSString *_vendorName;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000e4f0
- (void).cxx_destruct;	// IMP=0x000000010000fe04
@property(readonly, copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSURL *preflightPackageURL; // @synthesize preflightPackageURL=_preflightPackageURL;
@property(readonly, copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(readonly, copy, nonatomic) NSString *metricsBuyParams; // @synthesize metricsBuyParams=_metricsBuyParams;
@property(readonly, copy, nonatomic) NSString *baseBuyParams; // @synthesize baseBuyParams=_baseBuyParams;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000f2a0
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x000000010000ed54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000ed50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000ea14
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000e4f8
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 baseBuyParams:(id)arg7 metricsBuyParams:(id)arg8 additionalHeaders:(id)arg9 preflightPackageURL:(id)arg10 bundleID:(id)arg11 itemName:(id)arg12 vendorName:(id)arg13;	// IMP=0x000000010000e214

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

