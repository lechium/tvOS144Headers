//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2IdentificationParameter.h"

@class NSNumber, NSString;

@interface iAP2VehicleInfo : iAP2IdentificationParameter
{
    NSNumber *componentID;	// 24 = 0x18
    NSString *componentName;	// 32 = 0x20
    unsigned long long engineTypeBitmask;	// 40 = 0x28
    NSNumber *year;	// 48 = 0x30
    NSString *make;	// 56 = 0x38
    NSString *model;	// 64 = 0x40
    NSString *displayName;	// 72 = 0x48
    NSString *mapsDisplayName;	// 80 = 0x50
    NSString *siriName;	// 88 = 0x58
}

@property(retain) NSString *siriName; // @synthesize siriName;
@property(retain) NSString *mapsDisplayName; // @synthesize mapsDisplayName;
@property(retain) NSString *displayName; // @synthesize displayName;
@property(retain) NSString *model; // @synthesize model;
@property(retain) NSString *make; // @synthesize make;
@property(retain) NSNumber *year; // @synthesize year;
@property unsigned long long engineTypeBitmask; // @synthesize engineTypeBitmask;
@property(retain) NSString *componentName; // @synthesize componentName;
@property(retain) NSNumber *componentID; // @synthesize componentID;
- (void)addEngineTypeBitmask:(int)arg1;	// IMP=0x000000010002d78c
- (_Bool)isVehicleInfoSupported:(int)arg1;	// IMP=0x000000010002d768
- (void)dealloc;	// IMP=0x000000010002d6a8
- (id)init;	// IMP=0x000000010002d660

@end

