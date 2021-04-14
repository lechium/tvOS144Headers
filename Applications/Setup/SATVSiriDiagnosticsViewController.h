//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVSiriDiagnosticsViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001e70c
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_enableSiriDiagnostics:(_Bool)arg1;	// IMP=0x000000010001e648
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x000000010001e590
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010001e580
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010001e570
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e4f0
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e470
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e3f0
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e370
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e2f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001e288
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001e230
- (void)viewDidLoad;	// IMP=0x000000010001e100
- (id)init;	// IMP=0x000000010001e078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
