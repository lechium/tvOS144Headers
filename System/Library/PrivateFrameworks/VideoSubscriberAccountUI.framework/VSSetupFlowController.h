/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VSIdentityProviderPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderViewControllerDelegate.h>
#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>
#import <libobjc.A.dylib/VSSupportedAppsViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderRequestManagerDelegate.h>

@protocol VSSetupFlowControllerDelegate;
@class NSUndoManager, VSPreferences, VSPersistentStorage, NSOperationQueue, VSRemoteNotifier, NSArray, VSAppDescription, NSString, VSIdentityProviderRequestManager, VSDevice, VSAccountSerializationCenter;

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate, VSIdentityProviderRequestManagerDelegate> {

	NSUndoManager* _undoManager;
	BOOL _isInSTBMode;
	BOOL _signingIn;
	BOOL _notifyDelegateFromActivation;
	id<VSSetupFlowControllerDelegate> _delegate;
	VSPreferences* _preferences;
	VSPersistentStorage* _storage;
	NSOperationQueue* _privateQueue;
	VSRemoteNotifier* _remoteNotifier;
	NSArray* _freeOnBoardingBundleIDs;
	VSAppDescription* _appDescription;
	NSString* _providerAccountUsername;
	VSIdentityProviderRequestManager* _requestManager;
	/*^block*/id _goingBackActivationCompletionBlock;
	VSDevice* _currentDevice;
	VSAccountSerializationCenter* _serializationCenter;

}

@property (nonatomic,retain) VSPreferences * preferences;                                     //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                                   //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                 //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                               //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,copy) NSArray * freeOnBoardingBundleIDs;                                 //@synthesize freeOnBoardingBundleIDs=_freeOnBoardingBundleIDs - In the implementation block
@property (assign,getter=isSigningIn,nonatomic) BOOL signingIn;                               //@synthesize signingIn=_signingIn - In the implementation block
@property (nonatomic,retain) VSAppDescription * appDescription;                               //@synthesize appDescription=_appDescription - In the implementation block
@property (nonatomic,retain) NSString * providerAccountUsername;                              //@synthesize providerAccountUsername=_providerAccountUsername - In the implementation block
@property (assign,nonatomic) BOOL isInSTBMode;                                                //@synthesize isInSTBMode=_isInSTBMode - In the implementation block
@property (nonatomic,retain) VSIdentityProviderRequestManager * requestManager;               //@synthesize requestManager=_requestManager - In the implementation block
@property (assign,nonatomic) BOOL notifyDelegateFromActivation;                               //@synthesize notifyDelegateFromActivation=_notifyDelegateFromActivation - In the implementation block
@property (nonatomic,copy) id goingBackActivationCompletionBlock;                             //@synthesize goingBackActivationCompletionBlock=_goingBackActivationCompletionBlock - In the implementation block
@property (nonatomic,retain) VSDevice * currentDevice;                                        //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,retain) VSAccountSerializationCenter * serializationCenter;              //@synthesize serializationCenter=_serializationCenter - In the implementation block
@property (assign,nonatomic,__weak) id<VSSetupFlowControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUndoManager * undoManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(VSPersistentStorage *)storage;
-(id<VSSetupFlowControllerDelegate>)delegate;
-(void)setDelegate:(id<VSSetupFlowControllerDelegate>)arg1 ;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(NSUndoManager *)undoManager;
-(VSIdentityProviderRequestManager *)requestManager;
-(VSDevice *)currentDevice;
-(VSPreferences *)preferences;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(void)setCurrentDevice:(VSDevice *)arg1 ;
-(void)_goBack;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(BOOL)isInSTBMode;
-(void)_didStartLoading;
-(void)identityProviderPickerViewControllerDidCancel:(id)arg1 ;
-(void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2 ;
-(void)_presentError:(id)arg1 ;
-(void)dismissIdentityProviderViewController:(id)arg1 ;
-(void)identityProviderViewControllerDidCancel:(id)arg1 ;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3 ;
-(void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3 ;
-(void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3 ;
-(void)setRequestManager:(VSIdentityProviderRequestManager *)arg1 ;
-(VSAppDescription *)appDescription;
-(void)setAppDescription:(VSAppDescription *)arg1 ;
-(void)_presentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishAfterOfferingOptions:(BOOL)arg1 endingUndoGrouping:(BOOL)arg2 ;
-(void)_startLoadingAfterOfferingOptions:(BOOL)arg1 endingUndoGrouping:(BOOL)arg2 arrivedViaNotNowButton:(BOOL)arg3 arrivedAfterSigningIn:(BOOL)arg4 goingBack:(BOOL)arg5 ;
-(void)_dismissViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestAccessWithViewController:(id)arg1 ;
-(void)startSilentSigningInForSTBFromActivation:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(VSAccountSerializationCenter *)serializationCenter;
-(void)setFreeOnBoardingBundleIDs:(NSArray *)arg1 ;
-(NSString *)providerAccountUsername;
-(void)setProviderAccountUsername:(NSString *)arg1 ;
-(void)setIsInSTBMode:(BOOL)arg1 ;
-(void)_offerAuthenticationForSTBProvider:(id)arg1 msoAppDescription:(id)arg2 providerAccountUsername:(id)arg3 ;
-(void)_offerAuthenticationForProvider:(id)arg1 withSupportedAppsButton:(BOOL)arg2 msoAppDescription:(id)arg3 ;
-(void)_offerAuthenticationWithSupportedAppsButton:(BOOL)arg1 ;
-(void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(BOOL)arg5 arrivedViaNotNowButton:(BOOL)arg6 arrivedAfterSigningIn:(BOOL)arg7 goingBack:(BOOL)arg8 ;
-(BOOL)isSigningIn;
-(void)setSigningIn:(BOOL)arg1 ;
-(void)_pickProviderWithViewController:(id)arg1 ;
-(void)markSTBProviderAppForInstallation:(id)arg1 withAppPlacementPosition:(id)arg2 ;
-(void)finishSTBSuccessFlowForProvider:(id)arg1 ;
-(NSArray *)freeOnBoardingBundleIDs;
-(void)notNowWithIdentityProvider:(id)arg1 ;
-(void)signOutForNotNowFlowWithIdentityProvider:(id)arg1 ;
-(void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(BOOL)arg1 endingUndoGrouping:(BOOL)arg2 arrivedViaNotNowButton:(BOOL)arg3 arrivedAfterSigningIn:(BOOL)arg4 goingBack:(BOOL)arg5 ;
-(void)forceSignOutWithAccount:(id)arg1 ;
-(void)setNotifyDelegateFromActivation:(BOOL)arg1 ;
-(void)setGoingBackActivationCompletionBlock:(id)arg1 ;
-(id)_getProviderWithUserTokenFromAllProviders:(id)arg1 ;
-(BOOL)notifyDelegateFromActivation;
-(id)goingBackActivationCompletionBlock;
-(void)performDismissalOfIdentityProviderViewController:(id)arg1 ;
-(void)supportedAppsViewControllerDidFinish:(id)arg1 ;
-(void)startLoadingWhenGoingBack:(BOOL)arg1 serializedAccountDataToImport:(id)arg2 ;
-(void)startSigningIn;
-(void)startSigningInForIdentityProvider:(id)arg1 ;
-(void)notNow;
-(void)showSupportedApps;
-(void)setSerializationCenter:(VSAccountSerializationCenter *)arg1 ;
@end

