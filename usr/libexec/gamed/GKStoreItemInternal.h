//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class NSDate, NSNumber, NSString, NSURL;

@interface GKStoreItemInternal : GKInternalRepresentation
{
    NSNumber *_adamID;	// 8 = 0x8
    NSString *_artistName;	// 16 = 0x10
    NSString *_priceDisplay;	// 24 = 0x18
    NSURL *_viewItemURL;	// 32 = 0x20
    NSURL *_shortViewItemURL;	// 40 = 0x28
    NSURL *_tellAFriendMessageContentsUrl;	// 48 = 0x30
    NSDate *_expirationDate;	// 56 = 0x38
    unsigned int _numberOfUserRatings;	// 64 = 0x40
    float _averageUserRating;	// 68 = 0x44
    _Bool _owned;	// 72 = 0x48
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012a354
@property(nonatomic) _Bool owned; // @synthesize owned=_owned;
@property(nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
@property(nonatomic) unsigned int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSURL *tellAFriendMessageContentsUrl; // @synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl;
@property(retain, nonatomic) NSURL *shortViewItemURL; // @synthesize shortViewItemURL=_shortViewItemURL;
@property(retain, nonatomic) NSURL *viewItemURL; // @synthesize viewItemURL=_viewItemURL;
@property(retain, nonatomic) NSString *priceDisplay; // @synthesize priceDisplay=_priceDisplay;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
- (void)storeItemURLForGamePlatform:(long long)arg1 withContext:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012a62c
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(long long)arg2 extraQueryParams:(id)arg3;	// IMP=0x000000010012a5cc
- (_Bool)isValid;	// IMP=0x000000010012a5a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010012a524
- (unsigned long long)hash;	// IMP=0x000000010012a50c
- (void)dealloc;	// IMP=0x000000010012a2a4
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100142008
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100141c28
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100141910

@end

