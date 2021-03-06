//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

@class NSString, SATVDialogueColumnHeaderView, UILabel;

@interface SATVTapToSetupViewController : TVSKViewController
{
    UILabel *_footerLabel;	// 8 = 0x8
    NSString *_setupDeviceName;	// 16 = 0x10
    NSString *_setupNetworkName;	// 24 = 0x18
    SATVDialogueColumnHeaderView *_bannerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002a01c
@property(retain, nonatomic) SATVDialogueColumnHeaderView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSString *setupNetworkName; // @synthesize setupNetworkName=_setupNetworkName;
@property(copy, nonatomic) NSString *setupDeviceName; // @synthesize setupDeviceName=_setupDeviceName;
- (void)addConstraintsForHeaderView;	// IMP=0x0000000100029db4
- (void)_updateBannerViewSubtitleLabel:(id)arg1;	// IMP=0x0000000100029a04
- (void)_removeFooterLabelHint;	// IMP=0x00000001000299a4
- (void)_showFooterLabelHint;	// IMP=0x0000000100029918
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100029820
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000296e8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100029694
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010002963c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000295b8
- (void)viewDidLoad;	// IMP=0x0000000100029190
- (void)tapToSetupWillAttemptAuthentication;	// IMP=0x0000000100029030
- (void)tapToSetupWiFiNetworkConnectionStateDidChange:(long long)arg1;	// IMP=0x0000000100028cac
- (void)tapToSetupWillConnectToWiFiNetworkWithName:(id)arg1;	// IMP=0x0000000100028c50
- (void)tapToSetupDidBeginConfigurationPhase:(long long)arg1 withMetadata:(id)arg2;	// IMP=0x000000010002889c
- (void)tapToSetupDidBeginWithDeviceName:(id)arg1 isNewFlow:(_Bool)arg2;	// IMP=0x0000000100028454
- (void)tapToSetupDidPromptToBegin;	// IMP=0x0000000100028418

@end

