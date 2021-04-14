//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "PBSOSUpdateServiceDelegate-Protocol.h"
#import "TVSettingsBetaTermsViewControllerDelegate-Protocol.h"

@class NSArray, NSString, PBSAssertion, SDBetaProgram, TSKSettingItem;

@interface TVSettingsSoftwareUpdatesViewController : TSKViewController <PBSOSUpdateServiceDelegate, TVSettingsBetaTermsViewControllerDelegate>
{
    _Bool _checkingForUpdates;	// 8 = 0x8
    PBSAssertion *_downloadPriorityAssertion;	// 16 = 0x10
    NSString *_lastProgressText;	// 24 = 0x18
    TSKSettingItem *_advancedSettingsItem;	// 32 = 0x20
    TSKSettingItem *_updateSoftwareItem;	// 40 = 0x28
    TSKSettingItem *_betaSoftwareItem;	// 48 = 0x30
    SDBetaProgram *_selectedBetaSeedProgram;	// 56 = 0x38
    NSArray *_availableBetaSeedPrograms;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002f7b0
@property(copy, nonatomic) NSArray *availableBetaSeedPrograms; // @synthesize availableBetaSeedPrograms=_availableBetaSeedPrograms;
@property(retain, nonatomic) SDBetaProgram *selectedBetaSeedProgram; // @synthesize selectedBetaSeedProgram=_selectedBetaSeedProgram;
@property(nonatomic) __weak TSKSettingItem *betaSoftwareItem; // @synthesize betaSoftwareItem=_betaSoftwareItem;
@property(nonatomic) __weak TSKSettingItem *updateSoftwareItem; // @synthesize updateSoftwareItem=_updateSoftwareItem;
@property(nonatomic) __weak TSKSettingItem *advancedSettingsItem; // @synthesize advancedSettingsItem=_advancedSettingsItem;
@property(copy, nonatomic) NSString *lastProgressText; // @synthesize lastProgressText=_lastProgressText;
@property(retain, nonatomic) PBSAssertion *downloadPriorityAssertion; // @synthesize downloadPriorityAssertion=_downloadPriorityAssertion;
@property(nonatomic) _Bool checkingForUpdates; // @synthesize checkingForUpdates=_checkingForUpdates;
- (void)_showAlertForAccessoriesUpdate;	// IMP=0x000000010002f308
- (void)_setShouldShowInternalSettings:(_Bool)arg1;	// IMP=0x000000010002f21c
- (_Bool)_shouldShowInternalSettings;	// IMP=0x000000010002f160
- (void)_showConfirmationForEnrollmentInProgram:(id)arg1;	// IMP=0x000000010002ebfc
- (void)_selectBetaSeedProgram;	// IMP=0x000000010002e598
- (void)_toggleBetaEnrollment:(id)arg1;	// IMP=0x000000010002e470
- (void)_updateBetaSoftwareItem:(id)arg1;	// IMP=0x000000010002e2a8
- (void)_initializeBetaSeedPrograms;	// IMP=0x000000010002df44
- (void)_updateSWUpdateItem:(id)arg1;	// IMP=0x000000010002dd44
- (void)_updateInternalSettingsItem:(id)arg1;	// IMP=0x000000010002dcec
- (void)_toggleInternalSettingsItem:(id)arg1;	// IMP=0x000000010002dca4
- (void)betaTermsViewController:(id)arg1 didAcceptAllTerms:(_Bool)arg2;	// IMP=0x000000010002daa0
- (void)osUpdateServiceDidFinishApplyWithData:(id)arg1;	// IMP=0x000000010002da9c
- (void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x000000010002da98
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x000000010002da94
- (void)osUpdateServiceDidStartApplyWithData:(id)arg1;	// IMP=0x000000010002da90
- (void)osUpdateServiceDidStartRedownloadWithData:(id)arg1;	// IMP=0x000000010002da8c
- (void)osUpdateServiceDidFinishDownloadWithData:(id)arg1;	// IMP=0x000000010002d978
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x000000010002d548
- (void)osUpdateServiceDidStartDownloadWithData:(id)arg1;	// IMP=0x000000010002d4bc
- (void)osUpdateServiceDidFinishCheckWithData:(id)arg1;	// IMP=0x000000010002d430
- (void)osUpdateServiceDidStartCheckWithData:(id)arg1;	// IMP=0x000000010002d3a4
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x000000010002d264
- (void)_handleCheckForUpdates:(_Bool)arg1;	// IMP=0x000000010002cee4
- (void)checkForUpdates:(id)arg1;	// IMP=0x000000010002ccd8
- (id)loadSettingGroups;	// IMP=0x000000010002c1e8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002c140
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002c03c
- (void)viewDidLoad;	// IMP=0x000000010002bdac
- (void)dealloc;	// IMP=0x000000010002bd54
- (id)init;	// IMP=0x000000010002bca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
