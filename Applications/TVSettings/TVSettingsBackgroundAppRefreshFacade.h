//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVSettingsBackgroundAppRefreshFacade : NSObject
{
    _Bool _needsUpdate;	// 8 = 0x8
    NSArray *_backgroundAppRefreshSettings;	// 16 = 0x10
}

+ (id)_allowedSystemApps;	// IMP=0x000000010002fc48
+ (id)sharedInstance;	// IMP=0x000000010002fbdc
- (void).cxx_destruct;	// IMP=0x00000001000305b4
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) NSArray *backgroundAppRefreshSettings; // @synthesize backgroundAppRefreshSettings=_backgroundAppRefreshSettings;
- (void)_updateAppsCoalesced;	// IMP=0x0000000100030498
- (void)_updateApps;	// IMP=0x00000001000300b8
@property(readonly, nonatomic) _Bool backgroundAppRefreshEnabled;
- (void)setBackgroundAppRefreshEnabled:(_Bool)arg1;	// IMP=0x000000010002ff28
- (id)backgroundAppRefreshSettingForIdentifier:(id)arg1;	// IMP=0x000000010002fd94
- (id)init;	// IMP=0x000000010002fcd8

@end
