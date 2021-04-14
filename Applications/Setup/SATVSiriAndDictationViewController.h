//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVSiriAndDictationViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000010001cac0
- (void).cxx_destruct;	// IMP=0x000000010001d1b8
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_enableSiriAndDictation:(_Bool)arg1;	// IMP=0x000000010001d0f4
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010001d07c
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010001d004
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010001cfec
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001cf6c
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001ceec
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001ce6c
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001cdec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001cd84
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001cd2c
- (void)viewDidLoad;	// IMP=0x000000010001cc24
- (void)dealloc;	// IMP=0x000000010001cbac
- (id)init;	// IMP=0x000000010001cb24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
