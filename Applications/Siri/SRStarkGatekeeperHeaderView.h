//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SRCarPlayFocusable-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, NSString, SRStarkCancelButton, UIFocusContainerGuide;
@protocol SRStarkGatekeeperHeaderViewDelegate, UIFocusItem;

@interface SRStarkGatekeeperHeaderView : UIView <SRCarPlayFocusable>
{
    id <UIFocusItem> userFocusedItem;	// 8 = 0x8
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 16 = 0x10
    id <SRStarkGatekeeperHeaderViewDelegate> _delegate;	// 24 = 0x18
    UIFocusContainerGuide *_gatekeeperHeaderViewFocusContainerGuide;	// 32 = 0x20
    NSString *_appBundleIdentifier;	// 40 = 0x28
    SRStarkCancelButton *_cancelButton;	// 48 = 0x30
}

+ (id)gatekeeperForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x000000010003345c
+ (id)gatekeeperForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00000001000333c8
- (void).cxx_destruct;	// IMP=0x0000000100034488
@property(readonly, nonatomic) SRStarkCancelButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic, getter=_appBundleIdentifier, setter=_setAppBundleIdentifier:) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *gatekeeperHeaderViewFocusContainerGuide; // @synthesize gatekeeperHeaderViewFocusContainerGuide=_gatekeeperHeaderViewFocusContainerGuide;
@property(nonatomic) __weak id <SRStarkGatekeeperHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem;
- (_Bool)viewContainsFocusItem:(id)arg1;	// IMP=0x000000010003435c
- (id)updatedFocusItemForCurrentFocusItem:(id)arg1;	// IMP=0x00000001000342a4
- (id)preferredFocusEnvironments;	// IMP=0x000000010003422c
- (void)layoutSubviews;	// IMP=0x0000000100033ff4
- (unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1;	// IMP=0x0000000100033f50
- (void)_logGatekeeperDismissedManually;	// IMP=0x0000000100033e08
- (void)logGatekeeperAppeared;	// IMP=0x0000000100033cc0
- (void)_dismissalButtonTapped:(id)arg1;	// IMP=0x0000000100033a60
- (void)dealloc;	// IMP=0x000000010003394c
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00000001000338ec
- (id)initWithRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0000000100033834
- (id)_init;	// IMP=0x0000000100033688
- (void)updateGatekeeperWithCurrentTurnContext:(id)arg1;	// IMP=0x000000010003367c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

