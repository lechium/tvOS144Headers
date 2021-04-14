//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKEventEmitter, NSString;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject
{
    NSString *_udid;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_osVersion;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_gameKitVersion;	// 40 = 0x28
    _Bool _gameKitAvailable;	// 48 = 0x30
    GKEventEmitter<GKLockStatusObserver> *_emitter;	// 56 = 0x38
}

+ (id)currentDevice;	// IMP=0x00000001000859e0
@property(retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic, getter=isGameKitAvailable) _Bool gameKitAvailable; // @synthesize gameKitAvailable=_gameKitAvailable;
@property(readonly, nonatomic) NSString *gameKitVersion; // @synthesize gameKitVersion=_gameKitVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)removeLockStatusObserver:(id)arg1;	// IMP=0x00000001000862f4
- (void)addLockStatusObserver:(id)arg1;	// IMP=0x00000001000862e4
- (void)stopObservingKeyBagStatus;	// IMP=0x00000001000862b4
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000100086278
- (id)platformBuildVersion;	// IMP=0x00000001000861b4
- (id)buildVersionHeader;	// IMP=0x00000001000860e0
- (id)protocolVersionHeader;	// IMP=0x00000001000860b0
- (id)storeUserAgent;	// IMP=0x0000000100085f70
- (id)processNameHeader;	// IMP=0x0000000100085edc
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;	// IMP=0x0000000100085d20
- (id)userAgent;	// IMP=0x0000000100085d0c
- (void)dealloc;	// IMP=0x0000000100085c8c
@property(readonly, nonatomic) NSString *udid;
- (id)init;	// IMP=0x0000000100085a74
- (_Bool)isProductType:(unsigned int)arg1;	// IMP=0x00000001000d2e64
- (_Bool)isFocusDevice;	// IMP=0x00000001000d2df4
- (_Bool)isDevelopmentDevice;	// IMP=0x00000001000d2d78
- (id)_platformUDID;	// IMP=0x00000001000d2d0c
- (void)_initPlatform;	// IMP=0x00000001000d2a9c

@end
