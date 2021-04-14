//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVAppAnalyticsViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100006888
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_enableAppAnalytics:(_Bool)arg1;	// IMP=0x00000001000067c4
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100006740
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x00000001000066bc
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x00000001000066a4
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100006624
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000065a4
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100006524
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x00000001000064a4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100006450
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000063f8
- (void)viewDidLoad;	// IMP=0x00000001000062f0
- (id)init;	// IMP=0x0000000100006268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

