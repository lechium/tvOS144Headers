/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSectionTableViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PKPassHeaderViewDelegate.h>

@protocol OS_dispatch_source, PKPassDeleteHandler;
@class PKPassDisplayProfile, PKPassColorProfile, PKLinkedAppView, UIView, PKSettingTableCell, UITableViewCell, PKBarcodeTableViewCell, NSMutableDictionary, NSObject, BluetoothManager, PKPassHeaderView, PKPass, NSString;

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <UITextViewDelegate, PKPassHeaderViewDelegate> {

	PKPassDisplayProfile* _displayProfile;
	PKPassColorProfile* _colorProfile;
	PKLinkedAppView* _linkedApp;
	UIView* _locationHelpView;
	PKSettingTableCell* _automaticUpdatesCell;
	PKSettingTableCell* _showNotificationsCell;
	PKSettingTableCell* _showInLockScreenCell;
	PKSettingTableCell* _automaticSelectionCell;
	UITableViewCell* _personalizePassCell;
	UITableViewCell* _deleteCell;
	PKBarcodeTableViewCell* _barcodeCell;
	NSMutableDictionary* _fieldCellsByRow;
	NSObject*<OS_dispatch_source> _refreshTimeout;
	BluetoothManager* _btManager;
	BOOL _isBluetoothEnabled;
	BOOL _isLocationEnabled;
	BOOL _isWifiEnabled;
	BOOL _showsLinks;
	double _headerHeight;
	UIEdgeInsets _headerContentInset;
	CGSize _previousLayoutTableViewBoundsSize;
	double _titleOpacity;
	CGRect _headerFrame;
	UIView* _headerView;
	PKPassHeaderView* _passHeaderView;
	BOOL _didRampScreenBrightness;
	unsigned char _visiblityState;
	BOOL _showDoneButton;
	PKPass* _pass;
	unsigned long long _suppressedContent;
	id<PKPassDeleteHandler> _deleteOverrider;

}

@property (nonatomic,readonly) PKPass * pass;                                             //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedContent;                        //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassDeleteHandler> deleteOverrider;              //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (assign,nonatomic) BOOL showDoneButton;                                         //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isWifiEnabled;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(PKPass *)pass;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithPass:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)_updateNavigationItem;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(id)_relevantBuckets;
-(id)linkedApp;
-(id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(unsigned long long)suppressedContent;
-(void)_updateStandardAppearance:(id)arg1 ;
-(void)_updatePassProperties;
-(void)_wifiChanged:(id)arg1 ;
-(void)_bluetoothPowerChanged:(id)arg1 ;
-(void)_passSettingsChanged:(id)arg1 ;
-(BOOL)shouldAllowRefresh;
-(BOOL)_updateHeaderHeight;
-(double)_offscreenHeaderHeight;
-(BOOL)_linkedAppAvailable;
-(BOOL)_settingsAvailable;
-(BOOL)_personalizeAvailable;
-(void)reloadSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForReloadingSection:(unsigned long long)arg1 ;
-(id)_locationHelpTextWithLink:(id*)arg1 linkRange:(NSRange*)arg2 ;
-(unsigned long long)_numberOfAvailableSettings;
-(id)_settingsCellForRow:(unsigned long long)arg1 ;
-(id)_automaticSelectionCell;
-(id)_personalizePassCell;
-(id)_deleteCell;
-(id)_barcodeCell;
-(id)_fieldCellForRow:(unsigned long long)arg1 ;
-(void)_deletePass;
-(id)_locationHelpViewForTableView:(id)arg1 ;
-(void)_reloadPassAndView;
-(void)_sharePass;
-(void)pushSettingsFromViewToModel;
-(unsigned long long)_settingForRow:(unsigned long long)arg1 ;
-(id)_fieldForRow:(unsigned long long)arg1 ;
-(void)passHeaderViewDidChangePass:(id)arg1 ;
-(void)setShowsLinks:(BOOL)arg1 ;
-(BOOL)_isBluetoothEnabled;
-(void)_refreshFinished:(BOOL)arg1 ;
-(id<PKPassDeleteHandler>)deleteOverrider;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(BOOL)showDoneButton;
@end

