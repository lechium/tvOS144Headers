/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, NSArray, VSOptional, NSOperationQueue, NSXPCConnection, VSIdentityProviderAvailabilityInfoCenter, VSStoreURLBag;

@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation {

	BOOL _requestAllowsPrivacyUI;
	BOOL _requestRequiresPrivacyUI;
	BOOL _shouldInferFeaturedProviders;
	BOOL _shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
	BOOL _accountModificationAllowed;
	int _hostProcessIdentifier;
	VSAuditToken* _auditToken;
	NSArray* _supportedIdentityProviderIdentifiers;
	NSArray* _featuredIdentityProviderIdentifiers;
	NSArray* _applicationAccountProviders;
	VSOptional* _currentAccount;
	VSOptional* _result;
	NSOperationQueue* _privateQueue;
	NSXPCConnection* _privacyServiceConnection;
	VSIdentityProviderAvailabilityInfoCenter* _availabilityInfoCenter;
	VSStoreURLBag* _bag;
	SCD_Struct_VS1 _hostAuditToken;

}

@property (nonatomic,retain) VSOptional * result;                                                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                                  //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * privacyServiceConnection;                                       //@synthesize privacyServiceConnection=_privacyServiceConnection - In the implementation block
@property (nonatomic,retain) VSIdentityProviderAvailabilityInfoCenter * availabilityInfoCenter;                //@synthesize availabilityInfoCenter=_availabilityInfoCenter - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;                                                              //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic) SCD_Struct_VS1 hostAuditToken;                                                    //@synthesize hostAuditToken=_hostAuditToken - In the implementation block
@property (assign,nonatomic) int hostProcessIdentifier;                                                        //@synthesize hostProcessIdentifier=_hostProcessIdentifier - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                          //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL requestAllowsPrivacyUI;                                                      //@synthesize requestAllowsPrivacyUI=_requestAllowsPrivacyUI - In the implementation block
@property (assign,nonatomic) BOOL requestRequiresPrivacyUI;                                                    //@synthesize requestRequiresPrivacyUI=_requestRequiresPrivacyUI - In the implementation block
@property (nonatomic,copy) NSArray * supportedIdentityProviderIdentifiers;                                     //@synthesize supportedIdentityProviderIdentifiers=_supportedIdentityProviderIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * featuredIdentityProviderIdentifiers;                                      //@synthesize featuredIdentityProviderIdentifiers=_featuredIdentityProviderIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * applicationAccountProviders;                                              //@synthesize applicationAccountProviders=_applicationAccountProviders - In the implementation block
@property (assign,nonatomic) BOOL shouldInferFeaturedProviders;                                                //@synthesize shouldInferFeaturedProviders=_shouldInferFeaturedProviders - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;                 //@synthesize shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront=_shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront - In the implementation block
@property (assign,getter=isAccountModificationAllowed,nonatomic) BOOL accountModificationAllowed;              //@synthesize accountModificationAllowed=_accountModificationAllowed - In the implementation block
@property (nonatomic,retain) VSOptional * currentAccount;                                                      //@synthesize currentAccount=_currentAccount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setAccountModificationAllowed:(BOOL)arg1 ;
-(void)setShouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront:(BOOL)arg1 ;
-(void)setShouldInferFeaturedProviders:(BOOL)arg1 ;
-(NSArray *)applicationAccountProviders;
-(NSArray *)supportedIdentityProviderIdentifiers;
-(NSArray *)featuredIdentityProviderIdentifiers;
-(BOOL)shouldInferFeaturedProviders;
-(BOOL)shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
-(void)setApplicationAccountProviders:(NSArray *)arg1 ;
-(VSOptional *)currentAccount;
-(NSXPCConnection *)privacyServiceConnection;
-(SCD_Struct_VS1)hostAuditToken;
-(void)_checkPrivacy;
-(id)_privacyServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(int)hostProcessIdentifier;
-(BOOL)isAccountModificationAllowed;
-(VSIdentityProviderAvailabilityInfoCenter *)availabilityInfoCenter;
-(void)_continueCheckPrivacyWithAccessStatus:(unsigned long long)arg1 ;
-(void)_checkAvailability;
-(BOOL)requestRequiresPrivacyUI;
-(void)_determineProviderDisplayNameWithUI:(BOOL)arg1 ;
-(BOOL)requestAllowsPrivacyUI;
-(void)_checkSupportedProviders;
-(void)_finishWithSupportedProviders:(id)arg1 ;
-(void)_promptForPrivacyWithDisplayNameIfRequired:(id)arg1 providerID:(id)arg2 providerIsSupported:(BOOL)arg3 allowUI:(BOOL)arg4 ;
-(void)_checkEntitlement;
-(void)setHostAuditToken:(SCD_Struct_VS1)arg1 ;
-(void)setHostProcessIdentifier:(int)arg1 ;
-(void)setRequestAllowsPrivacyUI:(BOOL)arg1 ;
-(void)setRequestRequiresPrivacyUI:(BOOL)arg1 ;
-(void)setSupportedIdentityProviderIdentifiers:(NSArray *)arg1 ;
-(void)setFeaturedIdentityProviderIdentifiers:(NSArray *)arg1 ;
-(void)setCurrentAccount:(VSOptional *)arg1 ;
-(void)setPrivacyServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setAvailabilityInfoCenter:(VSIdentityProviderAvailabilityInfoCenter *)arg1 ;
@end

