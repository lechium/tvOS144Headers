//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSUninstallAlert.h"

@class NSArray, NSString;

@interface IXSAppUninstallAlert : IXSUninstallAlert
{
    struct __CFBundle *_appStringsBundle;	// 8 = 0x8
    NSString *_appStringsTableName;	// 16 = 0x10
    NSArray *_fontFamilies;	// 24 = 0x18
}

+ (id)_loadHBMCloudSyncUtilityClass;	// IMP=0x00000001000259d8
- (void).cxx_destruct;	// IMP=0x0000000100026454
@property(readonly, nonatomic) NSArray *fontFamilies; // @synthesize fontFamilies=_fontFamilies;
@property(readonly, nonatomic) NSString *appStringsTableName; // @synthesize appStringsTableName=_appStringsTableName;
@property(readonly, nonatomic) struct __CFBundle *appStringsBundle; // @synthesize appStringsBundle=_appStringsBundle;
- (void)dealloc;	// IMP=0x00000001000263c4
- (void)otherButtonActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000263b0
- (id)otherButtonLabel;	// IMP=0x000000010002635c
- (id)cancelButtonLabel;	// IMP=0x0000000100026348
- (id)defaultButtonLabel;	// IMP=0x0000000100026334
- (id)message;	// IMP=0x0000000100026000
- (id)title;	// IMP=0x0000000100025ef4
- (id)appInstalledFonts;	// IMP=0x0000000100025e84
- (id)localizedStringForKey:(id)arg1;	// IMP=0x0000000100025d68
@property(readonly, nonatomic) long long installedFontCount; // @dynamic installedFontCount;
@property(readonly, nonatomic) _Bool needsShowFontsButton; // @dynamic needsShowFontsButton;
@property(readonly, nonatomic) _Bool appHasInstalledFonts; // @dynamic appHasInstalledFonts;
@property(readonly, nonatomic) _Bool deviceHasOneHomeEnabled; // @dynamic deviceHasOneHomeEnabled;
@property(readonly, nonatomic) _Bool appHasiCloudDataOrDocuments; // @dynamic appHasiCloudDataOrDocuments;
- (id)initWithAppRecord:(id)arg1 bundleIdentifier:(id)arg2 isRemovable:(_Bool)arg3;	// IMP=0x00000001000254d0

@end

