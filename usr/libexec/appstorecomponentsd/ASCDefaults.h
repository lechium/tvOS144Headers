//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ASCDefaults : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (id)daemonDefaults;	// IMP=0x0000000100011cf8
- (void).cxx_destruct;	// IMP=0x0000000100012760
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x00000001000126b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000125a0
- (unsigned long long)hash;	// IMP=0x000000010001251c
@property(nonatomic) _Bool forceStandaloneWatch;
@property(nonatomic) _Bool enableWebInspector;
@property(copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property(copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property(copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property(nonatomic) _Bool disableShutdownTimer;
@property(nonatomic) _Bool forceRightToLeftLayout;
@property(copy, nonatomic) NSString *storefrontLocaleID;
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100011e84
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100011df8
- (id)initWithBundleID:(id)arg1;	// IMP=0x0000000100011d78

@end

