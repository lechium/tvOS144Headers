/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <TVCoreSettings/TVCSTableViewDiffableDataSourceProxy.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFNetworkListing.h>

@protocol WFNetworkListRecord, TVCSWiFiNetworkDelegate, WFNetworkListDelegate;
@class NSString, UITableView, UINavigationController, UIGestureRecognizer, TVCSReachability, WFNetworkListController, NSArray, TVCSTableViewDiffableDataSource;

@interface TVCSWiFiNetworkViewController : UIViewController <TVCSTableViewDiffableDataSourceProxy, UITableViewDelegate, WFNetworkListing> {

	BOOL _showOtherNetwork;
	BOOL _disabled;
	BOOL _showsCurrentNetwork;
	BOOL _waitingForNetwork;
	BOOL _needsInitialFocusUpdate;
	float _currentNetworkScaledRSSI;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	long long _deviceCapability;
	NSString* _currentNetworkSubtitle;
	UITableView* _tableView;
	id<TVCSWiFiNetworkDelegate> _delegate;
	Class _networkDetailsViewControllerClass;
	UINavigationController* _navigationController;
	UIGestureRecognizer* _navigationMenuRecognizer;
	TVCSReachability* _reachability;
	WFNetworkListController* _wifiController;
	id<WFNetworkListDelegate> _listDelegate;
	NSArray* _infraNetworks;
	TVCSTableViewDiffableDataSource* _diffableDataSource;
	id<WFNetworkListRecord> _preferredFocusedNetwork;
	NSString* _otherNetworkIdentifier;

}

@property (nonatomic,retain) UITableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                     //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * navigationMenuRecognizer;                    //@synthesize navigationMenuRecognizer=_navigationMenuRecognizer - In the implementation block
@property (nonatomic,retain) TVCSReachability * reachability;                                   //@synthesize reachability=_reachability - In the implementation block
@property (assign,getter=isWaitingForNetwork,nonatomic) BOOL waitingForNetwork;                 //@synthesize waitingForNetwork=_waitingForNetwork - In the implementation block
@property (nonatomic,retain) WFNetworkListController * wifiController;                          //@synthesize wifiController=_wifiController - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkListDelegate> listDelegate;                     //@synthesize listDelegate=_listDelegate - In the implementation block
@property (nonatomic,retain) NSArray * infraNetworks;                                           //@synthesize infraNetworks=_infraNetworks - In the implementation block
@property (nonatomic,retain) TVCSTableViewDiffableDataSource * diffableDataSource;              //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) id<WFNetworkListRecord> preferredFocusedNetwork;                   //@synthesize preferredFocusedNetwork=_preferredFocusedNetwork - In the implementation block
@property (assign,nonatomic) BOOL needsInitialFocusUpdate;                                      //@synthesize needsInitialFocusUpdate=_needsInitialFocusUpdate - In the implementation block
@property (nonatomic,retain) NSString * otherNetworkIdentifier;                                 //@synthesize otherNetworkIdentifier=_otherNetworkIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSWiFiNetworkDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsCurrentNetwork;                                          //@synthesize showsCurrentNetwork=_showsCurrentNetwork - In the implementation block
@property (nonatomic,retain) Class networkDetailsViewControllerClass;                           //@synthesize networkDetailsViewControllerClass=_networkDetailsViewControllerClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork;                                             //@synthesize showOtherNetwork=_showOtherNetwork - In the implementation block
@property (assign) float currentNetworkScaledRSSI;                                              //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                                      //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                                               //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability;                                        //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle;                                   //@synthesize currentNetworkSubtitle=_currentNetworkSubtitle - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                     //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
+(id)_filteredInfraNetworksForNetworks:(id)arg1 ;
-(void)dealloc;
-(id<TVCSWiFiNetworkDelegate>)delegate;
-(void)setDelegate:(id<TVCSWiFiNetworkDelegate>)arg1 ;
-(id)title;
-(void)refresh;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)setNetworks:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(TVCSReachability *)reachability;
-(void)setReachability:(TVCSReachability *)arg1 ;
-(void)setScanning:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITableView *)tableView;
-(UINavigationController *)navigationController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setDiffableDataSource:(TVCSTableViewDiffableDataSource *)arg1 ;
-(TVCSTableViewDiffableDataSource *)diffableDataSource;
-(id<WFNetworkListDelegate>)listDelegate;
-(id)_currentNetworkCell;
-(NSArray *)infraNetworks;
-(void)_dumpSections;
-(void)updateViewsForNetworks:(id)arg1 ;
-(void)setInfraNetworks:(NSArray *)arg1 ;
-(NSString *)currentNetworkSubtitle;
-(long long)deviceCapability;
-(id)_currentNetworkCellIndexPath;
-(void)setListDelegate:(id<WFNetworkListDelegate>)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(BOOL)showOtherNetwork;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(float)currentNetworkScaledRSSI;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(long long)currentNetworkState;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(BOOL)supportsWiFiPasswordSharing;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setCurrentNetworkSubtitle:(NSString *)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)_currentNetworkDidChange:(BOOL)arg1 ;
-(void)_didPressMenu:(id)arg1 ;
-(void)_didStartAssociation:(id)arg1 ;
-(void)_didFinishAssociation:(id)arg1 ;
-(void)_reachabilityDidChange:(id)arg1 ;
-(Class)networkDetailsViewControllerClass;
-(void)setNetworkDetailsViewControllerClass:(Class)arg1 ;
-(id)_cellForRowAtIndexPath:(id)arg1 networkIdentifier:(id)arg2 ;
-(void)_networksDidChangeAnimated:(BOOL)arg1 ;
-(WFNetworkListController *)wifiController;
-(void)setWifiController:(WFNetworkListController *)arg1 ;
-(id)_hostingViewController;
-(void)_updateNetworksWithIdentifiers:(id)arg1 ;
-(BOOL)showsCurrentNetwork;
-(id)_sectionIdentifierAtSectionIndex:(long long)arg1 ;
-(id)_networkAtIndexPath:(id)arg1 ;
-(void)_updateTableViewAndReloadNetworksWithIdentifiers:(id)arg1 animateChanges:(BOOL)arg2 ;
-(BOOL)_canShowCurrentNetwork;
-(NSString *)otherNetworkIdentifier;
-(BOOL)needsInitialFocusUpdate;
-(void)setNeedsInitialFocusUpdate:(BOOL)arg1 ;
-(void)setPreferredFocusedNetwork:(id<WFNetworkListRecord>)arg1 ;
-(BOOL)isWaitingForNetwork;
-(void)setWaitingForNetwork:(BOOL)arg1 ;
-(UIGestureRecognizer *)navigationMenuRecognizer;
-(void)setNavigationMenuRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_insertSpinnerAboveHostingViewController;
-(void)_waitForNetwork;
-(void)_handleNetworkIsAvailable;
-(void)setShowsCurrentNetwork:(BOOL)arg1 ;
-(id<WFNetworkListRecord>)preferredFocusedNetwork;
-(void)setOtherNetworkIdentifier:(NSString *)arg1 ;
@end

