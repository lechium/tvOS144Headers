//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VOTAppLauncherDelegate-Protocol.h"

@class NSDictionary, NSString, VOTAppLauncher, VOTElement;
@protocol VOTGesturedTextInputManagerDelegate;

@interface VOTGesturedTextInputManager : NSObject <VOTAppLauncherDelegate>
{
    _Bool _active;	// 8 = 0x8
    id <VOTGesturedTextInputManagerDelegate> _delegate;	// 16 = 0x10
    long long _rotorType;	// 24 = 0x18
    NSDictionary *_localizedWebRotorMap;	// 32 = 0x20
    VOTAppLauncher *_appLauncher;	// 40 = 0x28
    VOTElement *_appLauncherManitorElement;	// 48 = 0x30
    NSString *_currentInputString;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010005a8cc
@property(copy, nonatomic) NSString *currentInputString; // @synthesize currentInputString=_currentInputString;
@property(retain, nonatomic) VOTElement *appLauncherManitorElement; // @synthesize appLauncherManitorElement=_appLauncherManitorElement;
@property(retain, nonatomic) VOTAppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
@property(retain, nonatomic) NSDictionary *localizedWebRotorMap; // @synthesize localizedWebRotorMap=_localizedWebRotorMap;
@property(nonatomic) long long rotorType; // @synthesize rotorType=_rotorType;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <VOTGesturedTextInputManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appLauncher:(id)arg1 didLaunchAppOrNil:(id)arg2;	// IMP=0x000000010005a6c4
- (void)appLauncher:(id)arg1 didFilterApps:(id)arg2 didSwitchAppFocus:(id)arg3 withPrefix:(id)arg4;	// IMP=0x000000010005a3d4
- (unsigned long long)_numberOfCharactersToDeleteStartingAtIndex:(unsigned long long)arg1 toDesiredLength:(unsigned long long)arg2 fromString:(id)arg3;	// IMP=0x000000010005a2a8
- (unsigned long long)_numberOfCharactersToDeleteToDesiredLength:(unsigned long long)arg1 fromString:(id)arg2;	// IMP=0x000000010005a238
- (void)_updateLocalizedResources;	// IMP=0x0000000100059f58
- (_Bool)_processLaunchEvent:(id)arg1 forElement:(id)arg2;	// IMP=0x0000000100059c24
- (_Bool)_processRawInputEvent:(id)arg1 forElement:(id)arg2 withAttributes:(id)arg3;	// IMP=0x000000010005997c
- (_Bool)_performWordBackspaceForElement:(id)arg1;	// IMP=0x00000001000597f8
- (void)_deleteFromCurrentInputStringIfNeeded;	// IMP=0x00000001000596c8
- (_Bool)_processWebRotorEvent:(id)arg1;	// IMP=0x00000001000595b8
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00000001000595b4
- (id)hintForAppLaunch;	// IMP=0x00000001000595ac
- (_Bool)shouldAllowRotorEvents;	// IMP=0x00000001000595a4
- (void)didInputWordBackspace;	// IMP=0x00000001000595a0
- (void)didInputBackspace;	// IMP=0x000000010005959c
- (_Bool)performNextBrailleTableCommand;	// IMP=0x0000000100059594
- (_Bool)performNextKeyboardLanguage;	// IMP=0x000000010005958c
- (_Bool)performCustomWordBackspace;	// IMP=0x0000000100059584
- (_Bool)performCustomBackspace;	// IMP=0x000000010005957c
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x000000010010b728
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x000000010010b6f8
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x000000010010b6cc
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x000000010010b6a0
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x000000010010b674
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x000000010010b648
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x000000010010b61c
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x000000010010b5f0
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x000000010010b5c4
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x000000010010b598
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x000000010010b56c
- (void)clearCurrentString;	// IMP=0x0000000100059568
- (id)currentString;	// IMP=0x000000010005955c
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x0000000100059524
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x00000001000594ec
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x0000000100059478
- (_Bool)processEvent:(id)arg1;	// IMP=0x0000000100058e80
- (id)currentElementAttributes;	// IMP=0x0000000100058d1c
- (void)updateWithString:(id)arg1;	// IMP=0x0000000100058424
- (long long)valueChangeOriginator;	// IMP=0x000000010010b544
- (void)appendString:(id)arg1;	// IMP=0x0000000100058384
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x0000000100058304
- (id)init;	// IMP=0x0000000100058280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
