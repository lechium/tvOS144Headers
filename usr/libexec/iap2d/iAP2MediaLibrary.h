//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, MPRadioLibrary, NSDictionary, NSMutableDictionary, iAP2Connection, iAP2MediaLibraryInfo;
@protocol OS_dispatch_queue;

@interface iAP2MediaLibrary : NSObject
{
    iAP2Connection *connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *libraryInfoUpdateQ;	// 16 = 0x10
    NSMutableDictionary *libraryList;	// 24 = 0x18
    NSDictionary *_libraries;	// 32 = 0x20
    MPMediaLibrary *_deviceMediaLibrary;	// 40 = 0x28
    MPRadioLibrary *_mpRadioLibrary;	// 48 = 0x30
    _Bool _enableLibraryInfoUpdate;	// 56 = 0x38
    _Bool _isShuttingDown;	// 57 = 0x39
    _Bool _radioIsEnabled;	// 58 = 0x3a
    _Bool _subscribedToAppleMusic;	// 59 = 0x3b
    _Bool _isSubscribedToAppleMusic;	// 60 = 0x3c
    iAP2MediaLibraryInfo *_deviceLibrary;	// 64 = 0x40
    iAP2MediaLibraryInfo *_radioLibrary;	// 72 = 0x48
}

+ (_Bool)isMusicAppVisible;	// IMP=0x000000010003f444
+ (_Bool)allowCachedTracksForAppleMusic;	// IMP=0x000000010003f3f8
+ (id)__getMediaLibraryFromConnectionID:(unsigned int)arg1;	// IMP=0x000000010003f390
@property(nonatomic) _Bool isSubscribedToAppleMusic; // @synthesize isSubscribedToAppleMusic=_isSubscribedToAppleMusic;
@property(readonly, nonatomic) _Bool subscribedToAppleMusic; // @synthesize subscribedToAppleMusic=_subscribedToAppleMusic;
@property(readonly, nonatomic) _Bool radioIsEnabled; // @synthesize radioIsEnabled=_radioIsEnabled;
@property(readonly, nonatomic) iAP2MediaLibraryInfo *radioLibrary; // @synthesize radioLibrary=_radioLibrary;
@property(readonly, nonatomic) iAP2MediaLibraryInfo *deviceLibrary; // @synthesize deviceLibrary=_deviceLibrary;
@property(readonly, nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(readonly, nonatomic) NSMutableDictionary *libraryList; // @synthesize libraryList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *libraryInfoUpdateQ; // @synthesize libraryInfoUpdateQ;
@property(readonly, nonatomic) iAP2Connection *connection; // @synthesize connection;
- (_Bool)isGeniusMixesSupported;	// IMP=0x0000000100041090
- (void)stopSendingMediaLibraryInfomationUpdates;	// IMP=0x0000000100041018
- (void)startSendingMediaLibraryInfomationUpdates;	// IMP=0x0000000100040f98
- (void)_updateMediaLibraryInfomationUpdates:(_Bool)arg1;	// IMP=0x0000000100040da0
- (void)_sendLibraryInfoList;	// IMP=0x0000000100040788
- (_Bool)_checkForDifferentRadioLibrary;	// IMP=0x0000000100040620
- (_Bool)_checkForDifferentMediaLibraries;	// IMP=0x000000010004040c
- (void)dealloc;	// IMP=0x0000000100040120
- (void)shuttingDown;	// IMP=0x000000010003fea8
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010003fb10
- (id)description;	// IMP=0x000000010003fa70
- (void)_setupNewLibraries:(id)arg1;	// IMP=0x000000010003f770
- (void)_handlMediaLibraryNeedFilterChange:(id)arg1;	// IMP=0x000000010003f6e8
- (void)_mediaLibrariesAvailableChanged:(id)arg1;	// IMP=0x000000010003f5fc
- (void)_handleSubscribedToAppleMusicChanged:(id)arg1;	// IMP=0x000000010003f5ec
- (void)_updateSubscribedToAppleMusicStatus:(_Bool)arg1;	// IMP=0x000000010003f48c

@end

