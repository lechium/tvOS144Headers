/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VSIdentityProvider, NSArray, NSOperationQueue, NSOperation, VSPersistentStorage, VSRestrictionsCenter, VSOptional, VSAppSettingsViewModel, UIViewController;

@interface VSAppSettingsFacade : NSObject {

	BOOL _hasChannelApps;
	BOOL _needsUpdateApps;
	BOOL _needsPresentationOfMVPDAppInstallPromptIfAvailable;
	int _registrationToken;
	VSIdentityProvider* _identityProvider;
	NSArray* _decidedApps;
	NSArray* _availableApps;
	NSOperationQueue* _privateQueue;
	NSOperation* _currentPresentationOperation;
	VSPersistentStorage* _storage;
	VSRestrictionsCenter* _restrictionsCenter;
	VSOptional* _identityProviderID;
	NSArray* _featuredAdamIDs;
	NSArray* _knownAppBundles;
	NSArray* _unredeemedVouchers;
	VSAppSettingsViewModel* _mvpdAppSettingsViewModel;
	UIViewController* _mvpdInstallPromptPresentingViewController;

}

@property (nonatomic,copy) NSArray * decidedApps;                                                       //@synthesize decidedApps=_decidedApps - In the implementation block
@property (nonatomic,copy) NSArray * availableApps;                                                     //@synthesize availableApps=_availableApps - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                           //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) NSOperation * currentPresentationOperation;                                //@synthesize currentPresentationOperation=_currentPresentationOperation - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                                             //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSRestrictionsCenter * restrictionsCenter;                                 //@synthesize restrictionsCenter=_restrictionsCenter - In the implementation block
@property (nonatomic,copy) VSOptional * identityProviderID;                                             //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) NSArray * featuredAdamIDs;                                                   //@synthesize featuredAdamIDs=_featuredAdamIDs - In the implementation block
@property (nonatomic,copy) NSArray * knownAppBundles;                                                   //@synthesize knownAppBundles=_knownAppBundles - In the implementation block
@property (nonatomic,copy) NSArray * unredeemedVouchers;                                                //@synthesize unredeemedVouchers=_unredeemedVouchers - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateApps;                                                      //@synthesize needsUpdateApps=_needsUpdateApps - In the implementation block
@property (assign,nonatomic) int registrationToken;                                                     //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,retain) VSAppSettingsViewModel * mvpdAppSettingsViewModel;                         //@synthesize mvpdAppSettingsViewModel=_mvpdAppSettingsViewModel - In the implementation block
@property (assign,nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable;                   //@synthesize needsPresentationOfMVPDAppInstallPromptIfAvailable=_needsPresentationOfMVPDAppInstallPromptIfAvailable - In the implementation block
@property (nonatomic,retain) UIViewController * mvpdInstallPromptPresentingViewController;              //@synthesize mvpdInstallPromptPresentingViewController=_mvpdInstallPromptPresentingViewController - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                                     //@synthesize identityProvider=_identityProvider - In the implementation block
@property (assign,nonatomic) BOOL hasChannelApps;                                                       //@synthesize hasChannelApps=_hasChannelApps - In the implementation block
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)init;
-(void)dealloc;
-(VSPersistentStorage *)storage;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(VSOptional *)identityProviderID;
-(NSArray *)unredeemedVouchers;
-(NSArray *)knownAppBundles;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
-(void)setUnredeemedVouchers:(NSArray *)arg1 ;
-(NSArray *)availableApps;
-(void)setAvailableApps:(NSArray *)arg1 ;
-(VSRestrictionsCenter *)restrictionsCenter;
-(void)setRestrictionsCenter:(VSRestrictionsCenter *)arg1 ;
-(void)setKnownAppBundles:(NSArray *)arg1 ;
-(void)setNeedsUpdateApps:(BOOL)arg1 ;
-(NSOperation *)currentPresentationOperation;
-(void)setDecidedApps:(NSArray *)arg1 ;
-(void)setCurrentPresentationOperation:(NSOperation *)arg1 ;
-(void)setHasChannelApps:(BOOL)arg1 ;
-(id)_fetchOperationForAdamIDs:(id)arg1 ;
-(void)setMvpdAppSettingsViewModel:(VSAppSettingsViewModel *)arg1 ;
-(BOOL)needsUpdateApps;
-(void)_updateApps;
-(void)_setNeedsUpdateApps;
-(void)setFeaturedAdamIDs:(NSArray *)arg1 ;
-(void)setMvpdInstallPromptPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)shouldShowMVPDAppInstallPrompt;
-(VSAppSettingsViewModel *)mvpdAppSettingsViewModel;
-(void)setNeedsPresentationOfMVPDAppInstallPromptIfAvailable:(BOOL)arg1 ;
-(BOOL)needsPresentationOfMVPDAppInstallPromptIfAvailable;
-(UIViewController *)mvpdInstallPromptPresentingViewController;
-(void)presentMVPDAppInstallPromptFromViewController:(id)arg1 ;
-(id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2 ;
-(BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)arg1 ;
-(NSArray *)decidedApps;
-(BOOL)hasChannelApps;
-(NSArray *)featuredAdamIDs;
@end

