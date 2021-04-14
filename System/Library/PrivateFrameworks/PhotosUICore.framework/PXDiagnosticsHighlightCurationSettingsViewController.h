/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol PXDiagnosticsHighlightCurationSettingsViewControllerDelegate;
@class UISwitch, UITextField, NSDictionary;

@interface PXDiagnosticsHighlightCurationSettingsViewController : UIViewController {

	id<PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> _delegate;
	UISwitch* _doIdenticalDedupingSwitch;
	UITextField* _identicalDedupingTimeIntervalTextField;
	UITextField* _identicalDedupingTimeIntervalForPeopleTextField;
	UITextField* _identicalDedupingMaximumTimeGroupExtensionTextField;
	UITextField* _maximumNumberOfItemsPerIdenticalClusterTextField;
	UITextField* _identicalDedupingThresholdTextField;
	UITextField* _identicalDedupingThresholdForPeopleTextField;
	UITextField* _identicalDedupingThresholdForBestItemsTextField;
	UISwitch* _useFaceprintsForIdenticalDedupingSwitch;
	UITextField* _identicalDedupingFaceprintDistanceTextField;
	UISwitch* _doSemanticalDedupingSwitch;
	UITextField* _semanticalDedupingTimeIntervalTextField;
	UITextField* _semanticalDedupingTimeIntervalForPeopleTextField;
	UITextField* _semanticalDedupingTimeIntervalForPersonsTextField;
	UITextField* _semanticalDedupingMaximumTimeGroupExtensionTextField;
	UITextField* _maximumNumberOfItemsPerSemanticalClusterTextField;
	UITextField* _semanticalDedupingThresholdTextField;
	UITextField* _semanticalDedupingThresholdForPeopleTextField;
	UITextField* _semanticalDedupingThresholdForPersonsTextField;
	UISwitch* _doNotSemanticallyDedupePeopleSwitch;
	UISwitch* _doNotSemanticallyDedupePersonsSwitch;
	UISwitch* _allowAdaptiveForSemanticalDedupingSwitch;
	UISwitch* _useOnlyScenesForDedupingSwitch;
	UISwitch* _useAllPersonsForDedupingSwitch;
	UISwitch* _useFaceQualityForElectionSwitch;
	UISwitch* _doNotDedupeVideosSwitch;
	UISwitch* _doNotDedupeInterestingPortraitsAndLivePicturesSwitch;
	UISwitch* _onlyDedupeContiguousItemsSwitch;
	UISwitch* _doDejunkSwitch;
	UISwitch* _returnDedupedJunkIfOnlyJunkSwitch;
	UISwitch* _doFinalPassSwitch;
	UITextField* _finalPassTimeIntervalTextField;
	UITextField* _finalPassMaximumTimeGroupExtensionTextField;
	UITextField* _finalPassDedupingThresholdTextField;
	NSDictionary* _options;

}

@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)_cancel:(id)arg1 ;
-(void)_applySettingsGlobally:(id)arg1 ;
-(void)_resetSettings:(id)arg1 ;
-(void)_done:(id)arg1 ;
@end

