//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDPlatform : NSObject
{
    _Bool _watchOS;	// 8 = 0x8
    _Bool _tvOS;	// 9 = 0x9
    _Bool _iOS;	// 10 = 0xa
    _Bool _macOS;	// 11 = 0xb
    NSString *_platformType;	// 16 = 0x10
}

+ (_Bool)iOSHub;	// IMP=0x0000000100077efc
+ (id)sharedInstance;	// IMP=0x0000000100077e90
- (void).cxx_destruct;	// IMP=0x0000000100078878
@property(retain, nonatomic) NSString *platformType; // @synthesize platformType=_platformType;
@property _Bool macOS; // @synthesize macOS=_macOS;
@property _Bool iOS; // @synthesize iOS=_iOS;
@property _Bool tvOS; // @synthesize tvOS=_tvOS;
@property _Bool watchOS; // @synthesize watchOS=_watchOS;
- (void)raiseInvalidProductListExceptionWithReason:(id)arg1;	// IMP=0x0000000100078720
- (_Bool)isValidProductList:(id)arg1;	// IMP=0x0000000100078470
- (void)setPlatformWithManifestProductList:(id)arg1;	// IMP=0x00000001000781cc
- (id)init;	// IMP=0x0000000100077f68

@end

