//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NRDKeyManager : NSObject
{
    unsigned char _currentDataProtectionClass;	// 8 = 0x8
    _Bool _wasUnlockedOnce;	// 9 = 0x9
    _Bool _hasCheckedUnlockOnce;	// 10 = 0xa
    int _lockStateNotifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _idsKeyManagerUpdateBlock;	// 24 = 0x18
    CDUnknownBlockType _localDeviceClassCUnlockedBlock;	// 32 = 0x20
    NSMutableArray *_classCUnlockedBlocks;	// 40 = 0x28
    NSMutableArray *_classAUnlockedBlocks;	// 48 = 0x30
}

+ (id)copySharedKeyManager;	// IMP=0x00000001000bcd20
- (void).cxx_destruct;	// IMP=0x00000001000bcc70
@property(retain, nonatomic) NSMutableArray *classAUnlockedBlocks; // @synthesize classAUnlockedBlocks=_classAUnlockedBlocks;
@property(retain, nonatomic) NSMutableArray *classCUnlockedBlocks; // @synthesize classCUnlockedBlocks=_classCUnlockedBlocks;
@property(copy, nonatomic) CDUnknownBlockType localDeviceClassCUnlockedBlock; // @synthesize localDeviceClassCUnlockedBlock=_localDeviceClassCUnlockedBlock;
@property(copy, nonatomic) CDUnknownBlockType idsKeyManagerUpdateBlock; // @synthesize idsKeyManagerUpdateBlock=_idsKeyManagerUpdateBlock;
@property(nonatomic) _Bool hasCheckedUnlockOnce; // @synthesize hasCheckedUnlockOnce=_hasCheckedUnlockOnce;
@property(nonatomic) _Bool wasUnlockedOnce; // @synthesize wasUnlockedOnce=_wasUnlockedOnce;
@property(nonatomic) unsigned char currentDataProtectionClass; // @synthesize currentDataProtectionClass=_currentDataProtectionClass;
@property(nonatomic) int lockStateNotifyToken; // @synthesize lockStateNotifyToken=_lockStateNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reportEvent:(int)arg1;	// IMP=0x00000001000bcbbc
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x00000001000bcb28
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x00000001000bcb14
- (id)copyStatusString;	// IMP=0x00000001000bca74
- (id)readNRUUIDDictionaryOfClass:(Class)arg1 fromKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3;	// IMP=0x00000001000bc56c
- (void)saveNRUUIDDictionary:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3 retryBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000bc42c
- (_Bool)saveNRUUIDDictionary:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3;	// IMP=0x00000001000bc31c
- (_Bool)_saveNRUUIDDictionary:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3 retryBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000bbfd4
- (id)readFromKeychainWithName:(id)arg1 keychainLocked:(_Bool *)arg2 dataProtectionClass:(unsigned char)arg3;	// IMP=0x00000001000bbc18
- (_Bool)saveData:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3 keychainLocked:(_Bool *)arg4;	// IMP=0x00000001000bb5bc
- (void)stopWatchingLockStateIfThereAreNoClients;	// IMP=0x00000001000bb594
- (void)stopWatchingLockState;	// IMP=0x00000001000bb4e4
- (void)startWatchingLockState;	// IMP=0x00000001000bb384
- (void)handleLockStateChange;	// IMP=0x00000001000bb0b8
- (void)checkIfDeviceHasBeenUnlockedOnceSinceBoot;	// IMP=0x00000001000baf78
- (void)reportDataProtectionClassChange;	// IMP=0x00000001000bac88
- (void)runAfterNextClassAUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000baad4
- (void)runAfterClassAUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000baa08
- (void)runForLocalDeviceAfterClassCUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ba874
- (void)runAfterClassCUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ba69c
@property(readonly, nonatomic) _Bool isClassAUnlocked;
@property(readonly, nonatomic) _Bool isClassCUnlocked;
- (void)unregisterForIDSKeyManagerUpdates;	// IMP=0x00000001000ba554
- (void)registerForIDSKeyManagerUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ba46c
- (id)initInternal;	// IMP=0x00000001000ba318

@end

