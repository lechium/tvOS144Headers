//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (GKVersioning)
+ (_Bool)_gkMainBundleIsGameCenterSystemProcess;	// IMP=0x00000001000bd168
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000001000bcc7c
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000001000bcb54
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;	// IMP=0x00000001000bcaa8
+ (id)_gkBundleIdentifierOrProcessNameForPID:(int)arg1;	// IMP=0x00000001000bbb6c
+ (id)_gkBundleWithPID:(int)arg1;	// IMP=0x00000001000bba20
+ (id)_gkBundleWithIdentifier:(id)arg1;	// IMP=0x00000001000bb9d8
- (id)_gkFrameworkVersionDescription;	// IMP=0x0000000100074d08
- (_Bool)_gkIsDaemon;	// IMP=0x00000001000bd138
- (_Bool)_gkIsFirstParty;	// IMP=0x00000001000bcfb8
- (_Bool)_gkIsPreferences;	// IMP=0x00000001000bcec4
- (_Bool)_gkIsGameCenterExtension;	// IMP=0x00000001000bcda4
- (_Bool)_gkIsGameCenter;	// IMP=0x00000001000bcd74
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;	// IMP=0x00000001000bc984
- (id)_gkLocalizedStringFromLocaleName:(id)arg1 key:(id)arg2 tableName:(id)arg3 value:(id)arg4;	// IMP=0x00000001000bc878
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;	// IMP=0x00000001000bc5ec
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x00000001000bc4e8
- (id)_gkPreferredSystemLanguage;	// IMP=0x00000001000bc450
- (id)_gkPreferredLanguage;	// IMP=0x00000001000bc408
- (id)_gkLocalizedName;	// IMP=0x00000001000bc390
- (id)_gkBundleShortVersion;	// IMP=0x00000001000bc364
- (id)_gkBundleVersion;	// IMP=0x00000001000bc334
- (id)_gkPathForChallengeSound;	// IMP=0x00000001000bc320
- (id)_gkPathForInviteSound;	// IMP=0x00000001000bc30c
- (id)_gkPathForMessageImage;	// IMP=0x00000001000bc2f8
- (id)_gkPathForImageWithName:(id)arg1;	// IMP=0x00000001000bc2e4
- (id)_gkPathForSoundWithName:(id)arg1;	// IMP=0x00000001000bc260
- (_Bool)_gkIsBadgingEnabled;	// IMP=0x00000001000bc214
- (_Bool)_gkIsGameCenterEnabled;	// IMP=0x00000001000bbb18
@end
