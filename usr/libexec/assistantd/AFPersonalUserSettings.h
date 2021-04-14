//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFPersonalUserSettings : NSObject <NSSecureCoding>
{
    _Bool _twentyFourHourTimeDisplay;	// 8 = 0x8
    NSString *_temperatureUnit;	// 16 = 0x10
    NSString *_region;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    NSString *_preferredLanguage;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010013c4c4
- (void).cxx_destruct;	// IMP=0x000000010013c754
@property(copy, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(nonatomic) _Bool twentyFourHourTimeDisplay; // @synthesize twentyFourHourTimeDisplay=_twentyFourHourTimeDisplay;
@property(copy, nonatomic) NSString *temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010013c584
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010013c4cc

@end

