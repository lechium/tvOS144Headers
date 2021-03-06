//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCViewModel-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ASCAdamID, ASCArtwork, ASCScreenshots, ASCTrailers, ASCViewMetrics, NSArray, NSSet, NSString;
@protocol ASCOffer;

@interface ASCLockup : NSObject <NSSecureCoding, NSCopying, ASCViewModel>
{
    ASCAdamID *_id;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    ASCViewMetrics *_metrics;	// 24 = 0x18
    ASCArtwork *_icon;	// 32 = 0x20
    NSString *_heading;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    NSString *_ageRating;	// 64 = 0x40
    id <ASCOffer> _offer;	// 72 = 0x48
    NSArray *_features;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100006f5c
- (void).cxx_destruct;	// IMP=0x000000010000873c
@property(readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, copy, nonatomic) id <ASCOffer> offer; // @synthesize offer=_offer;
@property(readonly, copy, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, copy, nonatomic) ASCArtwork *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) ASCViewMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
- (id)lockupWithOffer:(id)arg1;	// IMP=0x00000001000084dc
- (id)lockupByAddingFeature:(id)arg1;	// IMP=0x00000001000081d0
- (id)featureWithClass:(Class)arg1;	// IMP=0x0000000100008098
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000776c
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100007504
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000726c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100006f64
- (id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9;	// IMP=0x0000000100006e1c
- (id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 features:(id)arg10;	// IMP=0x0000000100006ba0
- (id)lockupWithSignpostTags:(id)arg1;	// IMP=0x0000000100004fc0
@property(readonly, copy, nonatomic) NSSet *signpostTags;
- (id)initWithID:(id)arg1 kind:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8;	// IMP=0x00000001000087cc
@property(readonly, nonatomic) _Bool hasMedia;
@property(readonly, copy, nonatomic) ASCTrailers *trailers;
@property(readonly, copy, nonatomic) ASCScreenshots *screenshots;
@property(readonly, copy, nonatomic) NSString *productDescription;
@property(readonly, copy, nonatomic) NSString *productRatingBadge;
@property(readonly, nonatomic) float productRating;
@property(readonly, nonatomic) _Bool isEditorsChoice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

