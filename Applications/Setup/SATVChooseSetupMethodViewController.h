//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVBluetoothKeyboardManagerDelegate-Protocol.h"
#import "SATVChooseOptionViewDataSource-Protocol.h"
#import "SATVChooseOptionViewDelegate-Protocol.h"
#import "TVSUIDigitEntryViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController, SATVBluetoothKeyboardManager, SATVChooseOptionView, TVSKLabel, TVSUIDigitEntryViewController;

@interface SATVChooseSetupMethodViewController : TVSKViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate, SATVBluetoothKeyboardManagerDelegate, TVSUIDigitEntryViewControllerDelegate>
{
    _Bool _bluetoothPairing;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    SATVChooseOptionView *_chooseOptionView;	// 24 = 0x18
    TVSKLabel *_keyboardPairingPromptLabel;	// 32 = 0x20
    SATVBluetoothKeyboardManager *_bluetoothKeyboardManager;	// 40 = 0x28
    TVSUIDigitEntryViewController *_digitEntryViewController;	// 48 = 0x30
    OBPrivacyLinkController *_privacyLink;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x000000010004483c
- (void).cxx_destruct;	// IMP=0x0000000100046570
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(nonatomic, getter=isBluetoothPairing) _Bool bluetoothPairing; // @synthesize bluetoothPairing=_bluetoothPairing;
@property(retain, nonatomic) TVSUIDigitEntryViewController *digitEntryViewController; // @synthesize digitEntryViewController=_digitEntryViewController;
@property(retain, nonatomic) SATVBluetoothKeyboardManager *bluetoothKeyboardManager; // @synthesize bluetoothKeyboardManager=_bluetoothKeyboardManager;
@property(retain, nonatomic) TVSKLabel *keyboardPairingPromptLabel; // @synthesize keyboardPairingPromptLabel=_keyboardPairingPromptLabel;
@property(retain, nonatomic) SATVChooseOptionView *chooseOptionView; // @synthesize chooseOptionView=_chooseOptionView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_callCompletionWithUseTapToSetup:(_Bool)arg1;	// IMP=0x00000001000463fc
- (void)_popDigitEntryController;	// IMP=0x000000010004639c
- (void)_stopBluetoothKeyboardPairing;	// IMP=0x0000000100046324
- (void)_beginBluetoothKeyboardPairing;	// IMP=0x00000001000462ac
- (void)_configureKeyboardPairingPromptLabel;	// IMP=0x0000000100045de0
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x0000000100045cac
- (void)willAttemptToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100045b58
- (void)didFailToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x00000001000459f4
- (void)didPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100045880
- (void)presentPIN:(long long)arg1 forKeyboardWithName:(id)arg2;	// IMP=0x0000000100045354
- (void)didSelectSecondOptionForView:(id)arg1;	// IMP=0x0000000100045288
- (void)didSelectFirstOptionForView:(id)arg1;	// IMP=0x00000001000451bc
- (id)secondOptionButtonFooterViewForView:(id)arg1;	// IMP=0x00000001000451a4
- (id)firstOptionButtonFooterViewForView:(id)arg1;	// IMP=0x000000010004518c
- (id)secondOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004510c
- (id)firstOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004508c
- (id)subtitleTextForView:(id)arg1;	// IMP=0x0000000100044fe4
- (id)titleTextForView:(id)arg1;	// IMP=0x0000000100044f64
- (id)preferredFocusEnvironments;	// IMP=0x0000000100044eb8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100044d90
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100044d40
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100044cec
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100044c94
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100044ad0
- (void)viewDidLoad;	// IMP=0x00000001000449a8
- (void)dealloc;	// IMP=0x000000010004495c
- (id)init;	// IMP=0x00000001000448a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

