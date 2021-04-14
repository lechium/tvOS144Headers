//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString;

@interface SATVCloudConfigViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100012308
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_obliterate;	// IMP=0x000000010001222c
- (void)_leaveRemoteManagementAndErase;	// IMP=0x0000000100011df0
- (void)_showEraseDeviceAlert;	// IMP=0x0000000100011b94
- (void)showLeaveRemoteManagementAlert;	// IMP=0x0000000100011938
- (void)_presentEraseAlertWithTitle:(id)arg1 message:(id)arg2 eraseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000116cc
- (void)_applyConfiguration:(_Bool)arg1;	// IMP=0x0000000100011608
- (id)_aboutText;	// IMP=0x0000000100011034
- (_Bool)consentViewControllerCanSelectDissent:(id)arg1;	// IMP=0x0000000100010fe0
- (void)consentViewControllerDidSelectAuxiliary:(id)arg1;	// IMP=0x0000000100010fd4
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x0000000100010eb0
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100010e2c
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100010da8
- (id)auxiliaryButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010cd4
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010b88
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010b08
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000109e4
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000108bc
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010704
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010684
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100010610
- (void)viewDidLoad;	// IMP=0x0000000100010508
- (void)autoAdvance;	// IMP=0x00000001000104f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
