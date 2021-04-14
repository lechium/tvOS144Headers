/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentContactResolverDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKPhysicalCardActionControllerDelegate.h>
#import <libobjc.A.dylib/PKCreditAccountPaymentDetailsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountAutomaticPaymentsControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountBillPaymentObserver.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>
#import <libobjc.A.dylib/PKPassHeaderViewDelegate.h>
#import <libobjc.A.dylib/PKBalanceDetailsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentPassActionWidgetViewDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKSelectActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAMPEnrollmentManagerObserver.h>
#import <libobjc.A.dylib/PKGroupDelegate.h>
#import <libobjc.A.dylib/PKEditGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAppletSubcredentialSharingExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAMPEnrollmentManagerObserver.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@protocol PKPassLibraryDataProvider, PKPaymentDataProvider, OS_dispatch_source, PKGroupDelegate, OS_dispatch_group, PKPassDeleteHandler;
@class NSObject, PKPaymentPass, PKGroupsController, PKGroup, PKTransactionSource, PKLinkedApplication, PKPaymentApplication, PKPaymentWebService, PKPaymentVerificationController, PKPaymentPassDetailActivationFooterView, PKFooterHyperlinkView, PKSettingTableCell, PKPaymentTransactionCellController, NSArray, NSDateFormatter, NSNumberFormatter, PKDashboardTransactionFetcher, PKSharedCredentialsGroupController, LAContext, PKExpressPassController, PKTransitPassProperties, PKPaymentBalanceReminder, NSDictionary, NSMutableDictionary, UITableViewHeaderFooterView, UIImageView, PKPassHeaderView, UISegmentedControl, UIView, PKAnimatedNavigationBarTitleView, PKPassFaceViewRendererState, PKPeerPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentContactResolver, PKPeerPaymentPreferences, PKSpinnerHeaderView, PKPeerPaymentActionViewController, PKPaymentTransactionDetailsFactory, PKAccountServiceAccountResolutionController, PKAccountService, PKAccount, PKPhysicalCardController, PKPhysicalCardActionController, PKPeerPaymentAccountResolutionController, NSIndexPath, PKTransitBalanceModel, CNContact, CLInUseAssertion, NSMutableArray, PKPassPresentationContext, PKContactFormatValidator, PKPeerPaymentAssociatedAccountsController, NSMutableSet, PKFamilyMember, UIColor, NSString;

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <PKPeerPaymentContactResolverDelegate, PKPeerPaymentActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPhysicalCardActionControllerDelegate, PKCreditAccountPaymentDetailsViewControllerDelegate, PKAccountAutomaticPaymentsControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver, PKAccountServiceObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, PKBalanceDetailsViewControllerDelegate, PKPaymentPassActionWidgetViewDelegate, PKPerformActionViewControllerDelegate, PKSelectActionViewControllerDelegate, PKAMPEnrollmentManagerObserver, PKGroupDelegate, PKEditGroupViewControllerDelegate, PKAppletSubcredentialSharingExplanationViewControllerDelegate, PKAMPEnrollmentManagerObserver, PKLinkedApplicationObserver, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate> {

	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;
	NSObject*<OS_dispatch_source> _transactionTimer;
	BOOL _deepLinkingEnabled;
	PKPaymentPass* _pass;
	PKGroupsController* _groupsController;
	PKGroup* _group;
	id<PKGroupDelegate> _savedDelegate;
	PKTransactionSource* _transactionSource;
	PKLinkedApplication* _linkedApplication;
	PKPaymentApplication* _defaultPaymentApplication;
	PKPaymentWebService* _webService;
	PKPaymentVerificationController* _verificationController;
	PKPaymentPassDetailActivationFooterView* _activationFooter;
	PKFooterHyperlinkView* _associatedAccountPendingFooterView;
	NSObject*<OS_dispatch_source> _refreshTimeout;
	PKSettingTableCell* _messagesSwitch;
	PKSettingTableCell* _transactionsSwitch;
	PKSettingTableCell* _dailyCashSwitch;
	PKSettingTableCell* _notificationsSwitch;
	PKSettingTableCell* _automaticPresentationSwitch;
	PKSettingTableCell* _expressAccessSwitch;
	PKPaymentTransactionCellController* _transactionCellController;
	NSArray* _transactions;
	NSArray* _transactionCountAndYear;
	NSDateFormatter* _transactionYearFormatter;
	NSNumberFormatter* _transactionCountFormatter;
	PKDashboardTransactionFetcher* _transactionFetcher;
	NSArray* _devicePaymentApplications;
	NSArray* _contactlessPaymentApplications;
	PKSharedCredentialsGroupController* _credentialsGroupController;
	NSArray* _sharedCredentialGroups;
	LAContext* _authenticationContext;
	BOOL _expressModeEnabled;
	BOOL _expressModeSupported;
	PKExpressPassController* _expressPassController;
	BOOL _performingCardTransfer;
	PKTransitPassProperties* _transitProperties;
	PKPaymentBalanceReminder* _transitPropertiesBalanceReminder;
	NSArray* _commuterFields;
	NSArray* _commutePlanFields;
	NSArray* _commutePlans;
	NSArray* _balanceFields;
	NSArray* _arbitraryInfoFields;
	NSDictionary* _balances;
	NSDictionary* _actionForBalanceIdentifier;
	NSMutableDictionary* _reminderForBalanceIdentifier;
	NSArray* _displayableBalanceFields;
	NSArray* _tabBarSegments;
	double _headerHeight;
	double _tabBarHeight;
	UIEdgeInsets _headerContentInset;
	BOOL _changingDefaultPaymentApplication;
	double _previousLayoutTableViewWidth;
	CGSize _previousLayoutContentSize;
	NSMutableDictionary* _contextualActionHandlers;
	UITableViewHeaderFooterView* _headerView;
	UITableViewHeaderFooterView* _footerView;
	UIImageView* _logoView;
	PKPassHeaderView* _passHeaderView;
	UISegmentedControl* _tabBar;
	UIView* _passSnapshotView;
	PKAnimatedNavigationBarTitleView* _titleIconView;
	BOOL _showingTitleIconView;
	BOOL _hasTabBar;
	PKPassFaceViewRendererState* _rendererState;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentPreferences* _peerPaymentPreferences;
	BOOL _loadingPeerPaymentPreferences;
	PKSpinnerHeaderView* _peerPaymentPreferencesHeaderView;
	PKPeerPaymentActionViewController* _peerPaymentActionViewController;
	PKPaymentTransactionDetailsFactory* _transactionDetailsFactory;
	BOOL _loadingAMPEligibility;
	BOOL _isAmpEligible;
	PKAccountServiceAccountResolutionController* _resolutionController;
	PKAccountService* _accountService;
	PKAccount* _account;
	unsigned long long _accountFeatureIdentifier;
	BOOL _loadingPayments;
	PKSpinnerHeaderView* _scheduledPaymentsHeaderView;
	PKPhysicalCardController* _physicalCardController;
	PKPhysicalCardActionController* _physicalCardActionController;
	BOOL _loadingBankAccounts;
	BOOL _loadingAutomaticPayments;
	BOOL _loadingOrderPhysicalCard;
	BOOL _loadingEnableDisablePhysicalCard;
	BOOL _loadingReplacePhysicalCard;
	BOOL _loadingVirtualCard;
	BOOL _loadingAccountTermsAndConditions;
	BOOL _allowStatementCreditRedemption;
	unsigned long long _cashbackResolution;
	unsigned long long _redemptionStatus;
	NSArray* _recurringPayments;
	NSArray* _scheduledPayments;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionControllerForAccountService;
	NSIndexPath* _loadingPeerPaymentAccountActionIndexPath;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	unsigned long long _peerPaymentAccountResolution;
	BOOL _requestingStatement;
	BOOL _redeemingRewards;
	NSDateFormatter* _dueDateFormatter;
	NSDateFormatter* _dueTimeFormatter;
	BOOL _isAppleAccess;
	BOOL _isCredentialedPass;
	BOOL _canShareCredentials;
	NSObject*<OS_dispatch_group> _initialLoadGroup;
	BOOL _initialLoadTimedout;
	PKTransitBalanceModel* _transitBalanceModel;
	PKSpinnerHeaderView* _billingAddressHeaderView;
	CNContact* _billingContact;
	BOOL _loadingBillingContact;
	int _expressPassesInformationToken;
	CLInUseAssertion* _inUseAssertion;
	BOOL _allContentIsLoaded;
	NSMutableArray* _executionBlocksContentIsLoaded;
	PKPassPresentationContext* _context;
	PKContactFormatValidator* _contactFormatValidator;
	BOOL _peerPaymentGraduationInProgress;
	BOOL _loadingFamilyCircle;
	PKPeerPaymentAssociatedAccountsController* _peerPaymentAssociatedAccountsController;
	NSMutableSet* _familyMemberImageCompletions;
	NSDictionary* _familyMembersByAltDSID;
	NSDictionary* _familyMemberImageDataByAltDSID;
	PKFamilyMember* _currentUser;
	NSArray* _sortedFamilyMemberRows;
	id<PKPassDeleteHandler> _deleteOverrider;
	UIColor* _primaryTextColor;
	UIColor* _detailTextColor;
	UIColor* _linkTextColor;
	UIColor* _warningTextColor;
	UIColor* _highlightColor;

}

@property (assign,nonatomic,__weak) id<PKPassDeleteHandler> deleteOverrider;              //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor;                                  //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * detailTextColor;                                   //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (nonatomic,retain) UIColor * linkTextColor;                                     //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,retain) UIColor * warningTextColor;                                  //@synthesize warningTextColor=_warningTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                    //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(id)_availableActions;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2 ;
-(void)ampEnrollmentManager:(id)arg1 didEnrollPaymentPass:(id)arg2 success:(BOOL)arg3 ;
-(void)contactsDidChangeForContactResolver:(id)arg1 ;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1 ;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)reloadSections:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)peerPaymentActionViewControllerDidCancel:(id)arg1 ;
-(void)peerPaymentActionViewControllerDidPerformAction:(id)arg1 ;
-(void)_handleAccountServiceAccountDidChangeNotification:(id)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(id)contactResolver;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)accountAutomaticPaymentsController:(id)arg1 didSchedulePayment:(id)arg2 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 ;
-(id)_contactKeysToFetch;
-(void)accountBillPaymentViewController:(id)arg1 didSchedulePayments:(id)arg2 ;
-(id)_accountResolutionController;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeVerificationPresentation;
-(id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2 ;
-(void)subcredentialSharingExplanationViewControllerDidFinish;
-(UIColor *)linkTextColor;
-(void)contentIsLoaded;
-(void)_passSettingsChanged:(id)arg1 ;
-(BOOL)shouldAllowRefresh;
-(double)_offscreenHeaderHeight;
-(void)reloadSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForReloadingSection:(unsigned long long)arg1 ;
-(id)_barcodeCell;
-(void)_reloadPassAndView;
-(void)passHeaderViewDidChangePass:(id)arg1 ;
-(void)passHeaderViewPassWasDeleted:(id)arg1 ;
-(void)_refreshFinished:(BOOL)arg1 ;
-(id<PKPassDeleteHandler>)deleteOverrider;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(void)selectActionViewControllerDidCancel:(id)arg1 ;
-(void)selectActionViewControllerDidPerformAction:(id)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)presentCardNumbers;
-(void)presentSchedulePayments;
-(void)presentBankAccounts;
-(void)executeAfterContentIsLoaded:(/*^block*/id)arg1 ;
-(id)initWithPass:(id)arg1 group:(id)arg2 groupsController:(id)arg3 webService:(id)arg4 peerPaymentWebService:(id)arg5 style:(long long)arg6 passLibraryDataProvider:(id)arg7 paymentServiceDataProvider:(id)arg8 rendererState:(id)arg9 context:(id)arg10 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)_expressPassDidChange;
-(id)initWithPass:(id)arg1 group:(id)arg2 groupsController:(id)arg3 webService:(id)arg4 peerPaymentWebService:(id)arg5 style:(long long)arg6 passLibraryDataProvider:(id)arg7 paymentServiceDataProvider:(id)arg8 ;
-(void)_updatePeerPaymentAccount;
-(void)addMoney;
-(void)transferToBank;
-(void)performPaymentPassAction:(id)arg1 ;
-(void)openBusinessChat;
-(void)presentContactIssuerSheet;
-(void)callIssuer;
-(void)emailIssuer;
-(void)openIssuerWebsite;
-(void)paymentDetailsViewController:(id)arg1 didCancelPayment:(id)arg2 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg1 ;
-(long long)rowAnimationForDeletingSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForInsertingSection:(unsigned long long)arg1 ;
-(void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3 ;
-(id)_transactionDetailViewControllerForTransaction:(id)arg1 ;
-(void)_reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)detailTextColor;
-(void)balanceDetailsViewController:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalance:(id)arg3 ;
-(id)initWithPass:(id)arg1 group:(id)arg2 groupsController:(id)arg3 webService:(id)arg4 peerPaymentWebService:(id)arg5 accountService:(id)arg6 style:(long long)arg7 passLibraryDataProvider:(id)arg8 paymentServiceDataProvider:(id)arg9 rendererState:(id)arg10 context:(id)arg11 ;
-(void)_handlePeerPaymentPreferencestDidChangeNotification:(id)arg1 ;
-(void)_reloadView;
-(void)_updateCashbackPeerPaymentResolutionSection;
-(void)_fetchScheduledPaymentsWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAmpEligibility;
-(void)_updatePassProperties:(BOOL)arg1 ;
-(void)updateCredentialWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateDisplayableBalancesAndTransitPropertiesWithBalances:(id)arg1 transitProperties:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updatePassSnapshot;
-(id)_createTabBarWithSelectedIndex:(long long)arg1 ;
-(BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg1 ;
-(void)_updatePeerPaymentPreferences;
-(void)_updateFamilyCircle;
-(void)_reloadTransactionSectionsAnimated:(BOOL)arg1 forceReload:(BOOL)arg2 ;
-(void)_reloadTitle;
-(void)_cancelPendingTransactionTimer;
-(void)_normalizeContentOffset;
-(void)_ingestPassFields;
-(void)_updateHeaderActionView;
-(void)_updateExpressPassInformation;
-(BOOL)_showExpressDetails;
-(void)_updateDisplayableBalances;
-(void)_updateTransitPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_setTransitProperties:(id)arg1 ;
-(void)_updateTransitPassPropertiesSections;
-(void)_fetchBalanceRemindersWithActionForBalanceIdentifier:(id)arg1 transitProperties:(id)arg2 pass:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)_shouldShowAccountActions;
-(BOOL)_shouldShowServicingSection;
-(BOOL)_accountInGoodStateForAMPEligbilityCheck;
-(long long)_numberOfAccountServicePhysicalCardRowsEnabled;
-(BOOL)_shouldShowNetworkBenefitsCell;
-(BOOL)_shouldShowProductBenefitsCell;
-(BOOL)_shouldShowAutomaticPresentation;
-(unsigned long long)_contactBankCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(BOOL)_shouldShowAccessPersonInformation;
-(BOOL)_shouldShowBillingAddressCell;
-(BOOL)_canDoManualIdentityVerification;
-(BOOL)_shouldShowTermsCell;
-(BOOL)_shouldShowPrivacyPolicyCell;
-(id)_headerTitleForPassStateSection;
-(id)_titleForScheduledPaymentsSection;
-(BOOL)_showsTransactionHistorySwitch;
-(id)_footerTextForPassStateSection;
-(BOOL)_shouldShowServiceMode;
-(BOOL)_isJapaneseRegion;
-(BOOL)_hasActionOfType:(unsigned long long)arg1 ;
-(unsigned long long)_passOperationsCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(long long)_transitCellGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(unsigned long long)_passStateSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(BOOL)_transactionDeepLinkingEnabled;
-(unsigned long long)_accessPersonInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(unsigned long long)_numberOfPrivacyTermsInfoRows;
-(unsigned long long)_numberOfPeerPaymentBalanceAndMoneyActionsEnabled;
-(long long)_numberOfAccountServiceCreditDetailsRowsEnabled;
-(long long)_numberOfAccountServiceRewardsRowsEnabled;
-(id)_widgetCellForTableView:(id)arg1 ;
-(id)_linkedAppCellForTableView:(id)arg1 ;
-(id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_automaticPresentationCellForTableView:(id)arg1 ;
-(id)_manufacturerInfoCellForTableView:(id)arg1 ;
-(id)_passesInGroupCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_expressAccessCellForTableView:(id)arg1 ;
-(id)_messagesSwitchCellForTableView:(id)arg1 ;
-(id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_transactionsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_linkedApplicationCellForTableView:(id)arg1 ;
-(id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_moreTransactionsCellForTableView:(id)arg1 ;
-(id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2 ;
-(id)_transactionCountByPeriodCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_familyMemberCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_arbitraryInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_balanceOrCommutePlanCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_sharedCredentialCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_billingAddressCellWithLabel:(BOOL)arg1 forTableView:(id)arg2 ;
-(id)_privacyTermsSectionCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentBalanceAndMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentParticipantGraduationCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentBankAccountsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentStatementCellForTableView:(id)arg1 ;
-(id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServiceScheduledPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServiceCardNumbersCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServiceCreditDetailsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServiceBankAccountsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServiceMakeDefaultCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServiceRewardsDetailsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_accountServicePhysicalCardCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_linkCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(id)_installmentsPlanCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_transactionCellEditActionsGenerateWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(CGPoint)_normalizedContentOffsetForTargetOffset:(CGPoint)arg1 ;
-(id)_footerViewForPassStateSection;
-(id)_footerViewForPendingPeerPaymentAssociatedAccount;
-(double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1 ;
-(BOOL)_isDeletingPass;
-(unsigned long long)_accountServiceRewardsRowForRowIndex:(long long)arg1 ;
-(BOOL)_canSelectBalanceOrCommutePlanCellAtRowIndex:(long long)arg1 ;
-(long long)_rowIndexForExpressTransitSettingsCell;
-(unsigned long long)_accountServiceCreditDetailsRowForRowIndex:(long long)arg1 ;
-(BOOL)isTotalBalanceCellSelectable;
-(unsigned long long)_accountServiceScheduledPaymentsRowTypeForRowIndex:(long long)arg1 ;
-(void)_didSelectPassStateSection;
-(void)_didSelectTransitTicketAtRow:(long long)arg1 ;
-(void)_didSelectTransactionAtRow:(long long)arg1 ;
-(void)_didSelectTransactionCountByPeriodAtIndexPath:(id)arg1 ;
-(void)_didSelectContactBankSectionAtIndexPath:(long long)arg1 ;
-(void)_didSelectBillingAddress;
-(void)_didSelectPrivacySectionAtRow:(long long)arg1 ;
-(void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1 ;
-(void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentBalanceAndMoneyActionAtRow:(long long)arg1 ;
-(void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentBankAccountsAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentParticipantGradutionAtIndexPath:(id)arg1 ;
-(void)_didSelectFamilySharingAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1 ;
-(void)_didSelectBalanceOrCommutePlanCellAtIndexPath:(id)arg1 ;
-(void)_didSelectSharedCredentialCellAtIndexPath:(id)arg1 ;
-(void)_didSelectPassInGroupAtIndexPath:(id)arg1 ;
-(void)_didSelectCardInfoCellAtIndexPath:(id)arg1 ;
-(void)_didSelectServicingWalletLink;
-(void)_didSelectAccountServiceScheduledPaymentsAtIndexPath:(id)arg1 ;
-(void)_didSelectAccountServiceCardNumbersAtIndexPath:(id)arg1 ;
-(void)_didSelectAccountServiceBankAccountsAtIndexPath:(id)arg1 ;
-(void)_didSelectAccountServiceMakeDefaultAtIndexPath:(id)arg1 ;
-(void)_didSelectAccountServiceRewardsDetailsAtIndexPath:(id)arg1 ;
-(void)_didSelectAccountServicePhysicalCardAtIndexPath:(id)arg1 ;
-(void)_didSelectNetworkBenefitsCell;
-(void)_didSelectProductBenefitsCell;
-(void)_didSelectCreditDetailsCell:(id)arg1 ;
-(void)_didSelectInstallmentPlansAtIndexPath:(id)arg1 ;
-(void)_startPendingTransactionTimer;
-(void)_updateDisplayableBalancesWithBalances:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleUpdatedBalanceReminder:(id)arg1 forBalanceWithIdentifier:(id)arg2 ;
-(BOOL)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newtransactionCountByPeriod:(id)arg3 oldtransactionCountByPeriod:(id)arg4 ;
-(void)_applyDefaultDynamicStylingToCell:(id)arg1 ;
-(id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5 ;
-(id)_subtitleCellForTableView:(id)arg1 ;
-(id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2 ;
-(unsigned long long)_privacyTermsInfoRowTypeForRowIndex:(long long)arg1 ;
-(void)_presentTermsAndConditionsWithRow:(unsigned long long)arg1 ;
-(void)_reportPassDetailsAnalyticsForTappedRowTag:(id)arg1 ;
-(unsigned long long)_rowIndexForPrivacyTermsInfoRowType:(unsigned long long)arg1 ;
-(void)_showSpinner:(BOOL)arg1 inCell:(id)arg2 ;
-(BOOL)_shouldShowTransferCell;
-(void)_didSelectTransferCardAtIndexPath:(id)arg1 ;
-(void)_didSelectDeleteCard;
-(id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4 ;
-(id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3 ;
-(id)_cellForField:(id)arg1 tableView:(id)arg2 ;
-(id)_availableCommutePlanActions;
-(id)_balanceCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_commuterRouteCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_actionForCommutePlan:(id)arg1 ;
-(BOOL)_commutePlanIsSelectable:(id)arg1 action:(id)arg2 ;
-(id)_transferCardCellForTableView:(id)arg1 ;
-(BOOL)_shouldShowDeleteCell;
-(id)_deleteCardCellForTableView:(id)arg1 ;
-(BOOL)_shouldShowContactCell;
-(void)_automaticPresentationSwitchChanged:(id)arg1 ;
-(void)_expressAccessSwitchChanged:(id)arg1 ;
-(void)_messagesSwitchChanged:(id)arg1 ;
-(void)_transactionsSwitchChanged:(id)arg1 ;
-(void)_dailyCashSwitchChanged:(id)arg1 ;
-(void)_notificationSwitchChanged:(id)arg1 ;
-(void)_refreshPaymentApplicationsSelection;
-(id)_stackedInfoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4 ;
-(unsigned long long)_peerPaymentBalanceAndMoneyActionForRowIndex:(unsigned long long)arg1 ;
-(id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(id)_familyMemberCellWithRowModel:(id)arg1 forTableView:(id)arg2 ;
-(BOOL)_accountServiceCreditDetailsRowIsEnabled:(unsigned long long)arg1 ;
-(BOOL)_accountServiceRewardsRowIsEnabled:(unsigned long long)arg1 ;
-(BOOL)_accountServicePhysicalCardRowIsEnabled:(unsigned long long)arg1 ;
-(unsigned long long)_accountServicePhysicalCardRowForRowIndex:(long long)arg1 ;
-(id)_scheduledPaymentCellForPayment:(id)arg1 tableView:(id)arg2 ;
-(id)_transactionYearFormatter;
-(id)_transactionCountFormatter;
-(void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
-(void)presentTopUp;
-(void)_didSelectTransferToBank;
-(void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1 ;
-(void)_doneLoadingPeerPaymentAccountAction;
-(void)_peerPaymentAssociatedAccountsControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_didSelectBalanceAtRowIndex:(long long)arg1 ;
-(void)_didSelectCommutePlanAtRowIndex:(long long)arg1 ;
-(id)_balanceForRow:(unsigned long long)arg1 ;
-(id)_topUpActionForRow:(unsigned long long)arg1 ;
-(void)_didSelectSharedCredentialGroupAtIndex:(long long)arg1 ;
-(void)_didSelectAddSharedCredential;
-(id)_settingsExpressTransitURL;
-(void)_didSelectRedeemAtIndexPath:(id)arg1 ;
-(void)_didSelectFixPeerPaymentAtIndexPath:(id)arg1 ;
-(void)_presentPhysicalCardPasswordAuthorization:(/*^block*/id)arg1 ;
-(void)_didSelectMakePayment;
-(void)_showPeerPaymentActionViewControllerForAction:(unsigned long long)arg1 ;
-(id)_indexPathForAccountServiceScheduledPaymentsSetUpRecurringPaymentsRow;
-(void)_showSpinner:(BOOL)arg1 inCell:(id)arg2 detailText:(id)arg3 ;
-(void)presentInstallmentPlanWithIdentifier:(id)arg1 ;
-(void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2 ;
-(void)_updateFamilyMemberRows;
-(void)_ampEligbilityUpdated:(BOOL)arg1 ;
-(void)_updateTabBar;
-(BOOL)_shouldShowTransactions;
-(void)_updateTabBarWithSegments:(id)arg1 ;
-(void)_tabBarSegmentChanged:(id)arg1 ;
-(BOOL)_peerPaymentBalanceAndMoneyActionEnabled:(unsigned long long)arg1 ;
-(void)updateActivationFooterViewContents;
-(void)_activationFooterPressed:(id)arg1 ;
-(void)presentTransactionDetailsForTransaction:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentContactBankViewController:(unsigned long long)arg1 ;
-(void)postServiceModeNotification;
-(void)_preflightWatchForTransferWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_canDeletePass;
-(id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(id)_spinnerCellForTableView:(id)arg1 ;
-(id)_activationFooterView;
-(void)_setExpressAccessEnabled:(BOOL)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3 ;
-(void)_reportPassDetailsAnalyticsForToggleTag:(id)arg1 toggleResult:(BOOL)arg2 ;
-(void)_reportPassDetailsAnalyticsForTappedButtonTag:(id)arg1 ;
-(void)authAndDecryptWithVirtualCard:(id)arg1 ;
-(void)_updatePassesInGroupSectionWithUpdatedGroup:(id)arg1 ;
-(id)initWithPass:(id)arg1 group:(id)arg2 groupsController:(id)arg3 webService:(id)arg4 style:(long long)arg5 dataProvider:(id)arg6 ;
-(id)initWithPass:(id)arg1 group:(id)arg2 groupsController:(id)arg3 webService:(id)arg4 peerPaymentWebService:(id)arg5 accountService:(id)arg6 style:(long long)arg7 passLibraryDataProvider:(id)arg8 paymentServiceDataProvider:(id)arg9 ;
-(id)_switchCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(void)presentTermsAndConditions;
-(id)_renewActionForRow:(unsigned long long)arg1 commutePlanIdentifier:(id)arg2 ;
-(id)_balanceReminderCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_dueDateFormatter;
-(id)_dueTimeFormatter;
-(void)presentIdentityVerification;
-(void)presentTermsAcceptance;
-(void)presentBalanceDetails;
-(void)showStatementDetailsWithIdentifier:(id)arg1 ;
-(void)presentBillPayment;
-(void)presentInstallmentPlansForFeature:(unsigned long long)arg1 ;
-(unsigned long long)_rowIndexForPeerPaymentBalanceActionRow:(unsigned long long)arg1 ;
-(BOOL)_shouldShowWidgets;
-(double)_heightForPassStateSectionWithTableView:(id)arg1 ;
-(void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2 ;
-(UIColor *)warningTextColor;
-(void)setWarningTextColor:(UIColor *)arg1 ;
@end

