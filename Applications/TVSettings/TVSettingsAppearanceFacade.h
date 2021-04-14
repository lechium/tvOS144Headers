//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSKMappingFormatter;

@interface TVSettingsAppearanceFacade : NSObject
{
    long long _systemAppearance;	// 8 = 0x8
    _Bool _systemAppearanceNeedsUpdate;	// 16 = 0x10
    TSKMappingFormatter *_userInterfaceStyleFormatter;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010001cc3c
- (void).cxx_destruct;	// IMP=0x000000010001d30c
@property(retain, nonatomic) TSKMappingFormatter *userInterfaceStyleFormatter; // @synthesize userInterfaceStyleFormatter=_userInterfaceStyleFormatter;
@property(readonly, nonatomic) NSArray *appearanceOptions;
- (void)_updateSystemAppearance;	// IMP=0x000000010001cee0
- (void)invalidateSystemAppearance;	// IMP=0x000000010001ced4
@property(nonatomic) long long systemAppearance;
- (id)init;	// IMP=0x000000010001cca8

@end

