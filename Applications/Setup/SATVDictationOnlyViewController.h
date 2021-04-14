//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVDictationOnlyViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005be9c
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_completeWithConsentSelection:(_Bool)arg1;	// IMP=0x000000010005bdd8
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010005bd68
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010005bcf8
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010005bce0
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010005bc60
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010005bbe0
- (id)attributedSubtitleStringForConsentViewController;	// IMP=0x000000010005b924
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010005b8a4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010005b83c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010005b7e4
- (void)viewDidLoad;	// IMP=0x000000010005b6dc
- (void)dealloc;	// IMP=0x000000010005b664
- (id)init;	// IMP=0x000000010005b5dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

