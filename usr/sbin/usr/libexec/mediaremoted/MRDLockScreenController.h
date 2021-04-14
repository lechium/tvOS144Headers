//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDLockScreenContentControllerDelegate-Protocol.h"
#import "MRDPersonalDeviceControllerDelegate-Protocol.h"

@class MRDDisplayMonitor, MRDLockScreenAssertion, MRDLockScreenContentController, MRDNowPlayingServerResult, MRDPersonalDeviceController, MRPlayerPath, MSVTimer, NSString;
@protocol MRDLockScreenControllerDelegate, OS_dispatch_queue;

@interface MRDLockScreenController : NSObject <MRDPersonalDeviceControllerDelegate, MRDLockScreenContentControllerDelegate>
{
    MRDDisplayMonitor *_displayMonitor;	// 8 = 0x8
    MRDNowPlayingServerResult *_playerResult;	// 16 = 0x10
    MRPlayerPath *_playerPath;	// 24 = 0x18
    MRPlayerPath *_previousPlayerPath;	// 32 = 0x20
    id _playerPathInvalidationToken;	// 40 = 0x28
    id _previousPlayerPathInvalidationToken;	// 48 = 0x30
    MSVTimer *_timer;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    id <MRDLockScreenControllerDelegate> _delegate;	// 72 = 0x48
    MRDLockScreenAssertion *_assertion;	// 80 = 0x50
    MRPlayerPath *_electedPlayerPath;	// 88 = 0x58
    long long _changeType;	// 96 = 0x60
    long long _eventType;	// 104 = 0x68
    MRDPersonalDeviceController *_personalDeviceController;	// 112 = 0x70
    MRDLockScreenContentController *_contentController;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010004fa74
@property(retain, nonatomic) MRDLockScreenContentController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) MRDPersonalDeviceController *personalDeviceController; // @synthesize personalDeviceController=_personalDeviceController;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) MRPlayerPath *electedPlayerPath; // @synthesize electedPlayerPath=_electedPlayerPath;
@property(retain, nonatomic) MRDLockScreenAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain, nonatomic) MRPlayerPath *previousPlayerPath; // @synthesize previousPlayerPath=_previousPlayerPath;
@property(retain, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) id <MRDLockScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_onQueue_calculateShouldShowLockScreenForReason:(id *)arg1;	// IMP=0x000000010004f918
- (void)_onQueue_reevaluateShouldShowLockScreenForReason:(id)arg1;	// IMP=0x000000010004f748
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x000000010004f580
- (void)_handleElectedPlayerDidChangeNotification:(id)arg1;	// IMP=0x000000010004f37c
- (void)_handleLayoutDidChangeNotification:(id)arg1;	// IMP=0x000000010004f30c
- (void)lockScreenContentControllerStateDidChange:(id)arg1;	// IMP=0x000000010004f29c
- (void)personalDeviceControllerStateDidChange:(id)arg1;	// IMP=0x000000010004f22c
- (void)_onSerialQueue_restoreElectedPlayer;	// IMP=0x000000010004f12c
@property(readonly, nonatomic, getter=isLockScreenWidgetVisible) _Bool lockScreenWidgetVisible;
@property(readonly, nonatomic, getter=isLockScreenWidgetActive) _Bool lockScreenWidgetActive;
- (id)init;	// IMP=0x000000010004e5d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

