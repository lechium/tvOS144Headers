//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HBTopShelfFetchTimerConfiguration : NSObject
{
    NSString *_mode;	// 8 = 0x8
    double _activeContentFirstFetchInterval;	// 16 = 0x10
    double _activeContentRefetchInterval;	// 24 = 0x18
    double _inactiveContentFirstFetchInterval;	// 32 = 0x20
    double _inactiveContentRefetchInterval;	// 40 = 0x28
    double _contentDidChangeFirstFetchInterval;	// 48 = 0x30
    double _contentDidChangeDefaultRefetchInterval;	// 56 = 0x38
    double _contentDidChangeThrottledRefetchInterval;	// 64 = 0x40
    double _minimumRefetchInterval;	// 72 = 0x48
}

+ (id)_fastFetchConfiguration;	// IMP=0x0000000100016d90
+ (id)_noRefetchingConfiguration;	// IMP=0x0000000100016d48
+ (id)_defaultFetchConfiguration;	// IMP=0x0000000100016c5c
+ (id)sharedConfiguration;	// IMP=0x0000000100016aac
- (void).cxx_destruct;	// IMP=0x0000000100016f0c
@property(nonatomic) double minimumRefetchInterval; // @synthesize minimumRefetchInterval=_minimumRefetchInterval;
@property(nonatomic) double contentDidChangeThrottledRefetchInterval; // @synthesize contentDidChangeThrottledRefetchInterval=_contentDidChangeThrottledRefetchInterval;
@property(nonatomic) double contentDidChangeDefaultRefetchInterval; // @synthesize contentDidChangeDefaultRefetchInterval=_contentDidChangeDefaultRefetchInterval;
@property(nonatomic) double contentDidChangeFirstFetchInterval; // @synthesize contentDidChangeFirstFetchInterval=_contentDidChangeFirstFetchInterval;
@property(nonatomic) double inactiveContentRefetchInterval; // @synthesize inactiveContentRefetchInterval=_inactiveContentRefetchInterval;
@property(nonatomic) double inactiveContentFirstFetchInterval; // @synthesize inactiveContentFirstFetchInterval=_inactiveContentFirstFetchInterval;
@property(nonatomic) double activeContentRefetchInterval; // @synthesize activeContentRefetchInterval=_activeContentRefetchInterval;
@property(nonatomic) double activeContentFirstFetchInterval; // @synthesize activeContentFirstFetchInterval=_activeContentFirstFetchInterval;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, nonatomic, getter=isContentRefetchAllowed) _Bool contentRefetchAllowed;
- (id)initWithFetchMode:(id)arg1;	// IMP=0x0000000100016a2c

@end

