//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDSignedManifest;
@protocol OS_os_transaction;

@interface MSDHOperations : NSObject
{
    MSDSignedManifest *_signedManifest;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100019da8
- (void).cxx_destruct;	// IMP=0x000000010001d680
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) MSDSignedManifest *signedManifest; // @synthesize signedManifest=_signedManifest;
- (_Bool)quitHelper;	// IMP=0x000000010001d650
- (_Bool)restoreAttributesUnder:(id)arg1 fromManifest:(id)arg2;	// IMP=0x000000010001d344
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010001cfc0
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000010001cecc
- (_Bool)reboot;	// IMP=0x000000010001ce24
- (_Bool)cleanupStagingArea:(id)arg1;	// IMP=0x000000010001c97c
- (_Bool)switchToBackupFolder;	// IMP=0x000000010001c8cc
- (void)moveFilesFromPath:(id)arg1 inList:(id)arg2 toCache:(id)arg3;	// IMP=0x000000010001c148
- (_Bool)moveFilesFromStagingPath:(id)arg1 toCache:(id)arg2;	// IMP=0x000000010001bf48
- (_Bool)moveStagingToFinal:(id)arg1 finalPath:(id)arg2;	// IMP=0x000000010001b8c0
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x000000010001b62c
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x000000010001b4e8
- (_Bool)manageDataVolume:(id)arg1;	// IMP=0x000000010001b2b8
- (_Bool)writeNVRam:(id)arg1 withValue:(id)arg2;	// IMP=0x000000010001b0b8
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010001af58
- (_Bool)cloneFile:(id)arg1 stagingPath:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x000000010001ae80
- (_Bool)touchFile:(id)arg1 fileAttributes:(id)arg2;	// IMP=0x000000010001ad08
- (_Bool)writeDictionary:(id)arg1 toFile:(id)arg2;	// IMP=0x000000010001ab68
- (_Bool)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000010001a7c0
- (_Bool)removeDirectory:(id)arg1;	// IMP=0x000000010001a728
- (_Bool)prepareDirectory:(id)arg1 writableByNonRoot:(_Bool)arg2;	// IMP=0x000000010001a320
- (_Bool)migratePreferencesFile;	// IMP=0x000000010001a060
- (void)dealloc;	// IMP=0x0000000100019e78
- (id)init;	// IMP=0x0000000100019e14

@end
