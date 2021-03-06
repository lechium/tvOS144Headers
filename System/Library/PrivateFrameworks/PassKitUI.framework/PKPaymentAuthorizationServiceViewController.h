/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationFooterViewDelegate.h>
#import <libobjc.A.dylib/PKAuthenticatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationStateMachineDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationServiceViewControllerDelegatePKPaymentAuthorizationHostProtocol;
@class PKPaymentAuthorizationLayout, UIView, UITableView, PKPaymentAuthorizationSummaryItemsView, NSLayoutConstraint, PKPaymentAuthorizationTotalView, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationPasswordButtonView, UIBarButtonItem, PKPaymentPreferencesViewController, UIViewController, PKPeerPaymentAccount, NSMutableSet, CNContact, PKContactFormatValidator, PKPaymentAuthorizationStateMachine, PKAuthenticator, NSString;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol> {

	PKPaymentAuthorizationLayout* _layout;
	UIView* _contentView;
	UITableView* _detailTableView;
	PKPaymentAuthorizationSummaryItemsView* _summaryItemsView;
	NSLayoutConstraint* _summaryHeightConstraint;
	PKPaymentAuthorizationTotalView* _totalView;
	PKPaymentAuthorizationFooterView* _footerView;
	PKPaymentAuthorizationPasswordButtonView* _passwordButtonView;
	NSLayoutConstraint* _passphraseBottomConstraint;
	BOOL _needsToAccommodateKeyboard;
	UIBarButtonItem* _cancelBarButtonItem;
	BOOL _cancelButtonDisabled;
	BOOL _scrollIndicatorShown;
	UIView* _passphraseSeparatorView;
	NSLayoutConstraint* _contentViewRightConstraint;
	PKPaymentPreferencesViewController* _shippingMethodPreferencesController;
	PKPaymentPreferencesViewController* _shippingAddressPreferencesController;
	PKPaymentPreferencesViewController* _shippingContactPreferencesController;
	PKPaymentPreferencesViewController* _paymentCardPreferencesController;
	PKPaymentPreferencesViewController* _bankAccountPreferencesController;
	BOOL _viewAppeared;
	BOOL _visible;
	BOOL _authenticating;
	BOOL _allowCompactProcessing;
	BOOL _allowBiometricPhysicalButtonInstruction;
	BOOL _useBiometricPhysicalButtonInstruction;
	BOOL _physicalButtonVisibleOnce;
	unsigned char _visibility;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	CGRect _lastKeyboardFrame;
	unsigned short _layoutRecursionCounter;
	long long _userIntentStyle;
	long long _internalAuthenticationEvaluationState;
	BOOL _idleStateIsPasscode;
	unsigned _faceIDCameraEdge;
	BOOL _showPoseOutOfRangeDownCoaching;
	long long _internalCoachingState;
	UIViewController* _passcodeViewController;
	UIViewController* _passphraseViewController;
	BOOL _hostApplicationResignedActive;
	BOOL _hostApplicationEnteredBackground;
	BOOL _treatingHostAsBackgrounded;
	BOOL _bypassAuthenticator;
	BOOL _isPad;
	BOOL _isAMPPayment;
	BOOL _isInstallment;
	BOOL _isPaymentSummaryPinned;
	BOOL _needsFinalCallback;
	long long _preferencesStyle;
	IOHIDEventSystemClientRef _hidSystemClient;
	unsigned long long _biometryAttempts;
	PKPeerPaymentAccount* _peerPaymentAccount;
	BOOL _peerPaymentBalanceIsInsufficient;
	NSMutableSet* _completionHandlers;
	CNContact* _lastUnservicableAddress;
	double _authenticatorFingerOnTime;
	PKContactFormatValidator* _contactFormatValidator;
	BOOL _blockingHardwareCancels;
	PKPaymentAuthorizationStateMachine* _stateMachine;
	PKAuthenticator* _authenticator;
	long long _physicalButtonState;
	NSString* _physicalButtonInstruction;
	long long _coachingState;
	id<PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> _delegate;

}

@property (nonatomic,retain) PKPaymentAuthorizationStateMachine * stateMachine;                                                                        //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) PKAuthenticator * authenticator;                                                                                          //@synthesize authenticator=_authenticator - In the implementation block
@property (nonatomic,readonly) long long physicalButtonState;                                                                                          //@synthesize physicalButtonState=_physicalButtonState - In the implementation block
@property (nonatomic,readonly) NSString * physicalButtonInstruction;                                                                                   //@synthesize physicalButtonInstruction=_physicalButtonInstruction - In the implementation block
@property (nonatomic,readonly) long long coachingState;                                                                                                //@synthesize coachingState=_coachingState - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL blockingHardwareCancels;                                                                                           //@synthesize blockingHardwareCancels=_blockingHardwareCancels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol>)arg1 ;
-(PKAuthenticator *)authenticator;
-(void)setAuthenticator:(PKAuthenticator *)arg1 ;
-(BOOL)_passwordRequired;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithLayout:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(PKPaymentAuthorizationStateMachine *)stateMachine;
-(void)setStateMachine:(PKPaymentAuthorizationStateMachine *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updatePreferredContentSize;
-(void)_createSubviews;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(void)contextWillBeginPresentingSecondaryUI:(id)arg1 ;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1 ;
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(id)_unavailablePasses;
-(BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4 ;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(void)cancelPressed:(id)arg1 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(long long)coachingState;
-(void)_updateUserIntentStyle;
-(void)_updateCoachingState;
-(long long)_progressStateForAuthenticationWithBiometricFailure:(BOOL)arg1 ;
-(void)_suspendAuthentication;
-(void)_didFailWithFatalError:(id)arg1 ;
-(void)_didSucceedWithAuthorizationStateParam:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)_processClientCallback:(id)arg1 ;
-(void)_invalidPaymentDataWithParam:(id)arg1 ;
-(long long)_authenticatorPolicy;
-(void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)arg1 initialAuthenticatorState:(unsigned long long)arg2 ;
-(void)_setAuthenticating:(BOOL)arg1 ;
-(id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)arg1 initialAuthenticatorState:(unsigned long long)arg2 ;
-(void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2 ;
-(void)_setPasscodeViewController:(id)arg1 ;
-(void)_setPassphraseViewController:(id)arg1 ;
-(void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(SCD_Struct_PK2)arg2 ;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2 ;
-(void)dismissPasscodeViewController;
-(void)dismissPassphraseViewController;
-(void)authorizationFooterViewPasscodeButtonPressed:(id)arg1 ;
-(void)authorizationFooterViewWillChangeConstraints:(id)arg1 ;
-(void)authorizationFooterViewDidChangeConstraints:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)_didCancel:(BOOL)arg1 ;
-(void)_removeSimulatorHIDListener;
-(void)_executeCompletionHandlers;
-(void)setFooterState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setNavigationItemLeftItemForAMP;
-(BOOL)_setNavigationItemLeftItemFromNavigationTitle;
-(void)_payWithPasswordPressed:(id)arg1 ;
-(void)_setVisible:(BOOL)arg1 ;
-(void)_setVisibility:(unsigned char)arg1 ;
-(void)_startSimulatorHIDListener;
-(void)resumeAndUpdateContentSize;
-(void)_showScrollIndicatorIfNeeded;
-(id)handlePaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6 ;
-(void)_setupWithPaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6 ;
-(void)_suspendAuthenticationAndForceReset:(BOOL)arg1 ;
-(void)_updateCancelButtonEnabledForState:(unsigned long long)arg1 param:(id)arg2 ;
-(void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatePreferencesWithErrors:(id)arg1 ;
-(void)_showUnservicableAddressAlertForErrors:(id)arg1 ;
-(void)_abandonPSD2StyleAMPBuy;
-(BOOL)_abandonActiveEnrollmentAttempts;
-(void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)arg1 ;
-(void)setFooterState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updatePhysicalButtonState;
-(void)_updateBackgroundedState:(BOOL)arg1 ;
-(void)_updateShippingMethods;
-(void)_updateFooterStateIfAuthenticatingWithBiometricFailure:(BOOL)arg1 ;
-(BOOL)_passcodeAllowed;
-(void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dismissPassphraseViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_removePassphraseViewFromHierarchyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_shouldShowSeparatorForRowAtIndexPath:(id)arg1 ;
-(Class)_tableViewClassForDataItem:(id)arg1 ;
-(Class)_viewPresenterClassForDataItem:(id)arg1 ;
-(BOOL)_shouldShowUsePeerPaymentBalanceToggle;
-(void)_selectOptionsForDataItem:(id)arg1 ;
-(void)_updateAvailableCardsPreferences;
-(void)_handleModelUpdate;
-(void)_setupShippingMethods;
-(void)_setupShippingAddress;
-(void)_setupShippingContact;
-(void)_setupPaymentPassAndBillingAddress;
-(void)_setupBankAccounts;
-(void)_updatePhysicalButtonInstructionAndNotify:(BOOL)arg1 ;
-(void)_updateBankAccounts;
-(id)_availabilityStringForPass:(id)arg1 ;
-(id)_availablePasses;
-(long long)selectedPaymentApplicationIndexFromCardEntries:(id)arg1 ;
-(long long)_totalViewStyle;
-(id)_compactNavigationController;
-(void)biometricAttemptFailed;
-(id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3 ;
-(void)_hostApplicationWillEnterForeground;
-(void)_hostApplicationDidEnterBackground;
-(void)authorizationDidAuthorizeCashDisbursementWithResult:(id)arg1 ;
-(void)_updateFooterStateForBiometricMatchMissIfNecessary;
-(long long)physicalButtonState;
-(NSString *)physicalButtonInstruction;
-(BOOL)blockingHardwareCancels;
@end

