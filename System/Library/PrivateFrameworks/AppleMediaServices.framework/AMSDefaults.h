/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSDefaults : NSObject
+(id)allKeys;
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(id)_valueForKey:(id)arg1 ;
+(BOOL)QAMode;
+(BOOL)ignoreServerTrustEvaluation;
+(id)demoAccount;
+(void)setDemoAccount:(id)arg1 ;
+(BOOL)useNewCookieStorage;
+(BOOL)migratedToNewCookieStorage;
+(void)setMigratedToNewCookieStorage:(BOOL)arg1 ;
+(void)setApplePayClassic:(long long)arg1 ;
+(double)_randomDouble;
+(long long)reversePushEnabled;
+(long long)applePayClassic;
+(long long)cardEnrollmentManual;
+(long long)cardEnrollmentUpsell;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(id)defaultPaymentPassIdentifier;
+(void)setDefaultPaymentPassIdentifier:(id)arg1 ;
+(long long)pushEnvironment;
+(void)setPushEnvironment:(long long)arg1 ;
+(BOOL)alwaysSendCacheBuster;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(CFStringRef)arg3 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(BOOL)allowDuplicateAccounts;
+(void)setDidRetrieveDeviceOffers:(BOOL)arg1 ;
+(BOOL)showSandboxAccountUI;
+(void)setShowSandboxAccountUI:(BOOL)arg1 ;
+(void)setIncludeFullRequestInHARLogging:(BOOL)arg1 ;
+(void)setIncludeFullResponseInHARLogging:(BOOL)arg1 ;
+(long long)acknowledgePrivacyOverride;
+(BOOL)disablePrivacyAcknowledgement;
+(id)storefrontSuffixes;
+(id)bagOverrides;
+(void)setStorefrontSuffixes:(id)arg1 ;
+(id)bagURLCookies;
+(void)setBagURLCookies:(id)arg1 ;
+(BOOL)migratedPrivacyAcknowledgements;
+(void)setMigratedPrivacyAcknowledgements:(BOOL)arg1 ;
+(long long)deviceBiometricsState;
+(void)setDeviceBiometricsState:(long long)arg1 ;
+(BOOL)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3 ;
+(id)lastMigratedBuildVersion;
+(void)setLogHARData:(BOOL)arg1 ;
+(void)setLastMigratedBuildVersion:(id)arg1 ;
+(id)_allKeysForDomain:(CFStringRef)arg1 ;
+(void)_cleanupSampleSessions;
+(BOOL)_resultFromSampleSession:(id)arg1 isActive:(BOOL*)arg2 ;
+(BOOL)alwaysSendGUID;
+(id)authenticationStarted;
+(long long)cardEnrollmentAutomatic;
+(long long)cardEnrollmentSilent;
+(id)deviceBiometricIdentities;
+(id)deviceOfferEligibility;
+(id)deviceOffersSerialNumber;
+(BOOL)didRetrieveDeviceOffers;
+(BOOL)didRetrieveDeviceOffersEligibility;
+(BOOL)didRetrieveTVOffers;
+(BOOL)disableHARLogging;
+(BOOL)disableStubbedMarketingItems;
+(BOOL)enableCameraRedeem;
+(BOOL)enableFullDeviceOffersRetrieval;
+(BOOL)enablePurchaseQueue;
+(BOOL)enableRemoteSecuritySigning;
+(BOOL)forceEngagementPurchaseSuccess;
+(long long)forceLoadUrlMetrics;
+(id)harURLFilters;
+(BOOL)includeFullRequestInHARLogging;
+(BOOL)includeFullResponseInHARLogging;
+(id)journeysURLOverride;
+(BOOL)logHARData;
+(id)marketingItemOverrides;
+(id)mediaTokenOverride;
+(id)mediaTokens;
+(id)mescalCertExpiration;
+(id)metricsCanaryIdentifier;
+(id)metricsTimingWindowStartTime;
+(BOOL)migratedDeviceOffers;
+(BOOL)migratedDeviceOffersForWatch;
+(id)multiUserContainerID;
+(BOOL)perfomedDeviceOfferSetup;
+(BOOL)showSpyglassPurchases;
+(id)sourceOverrides;
+(id)UIURLOverrides;
+(BOOL)useNewAccountStore;
+(void)setAcknowledgePrivacyOverride:(long long)arg1 ;
+(void)setAllowDuplicateAccounts:(BOOL)arg1 ;
+(void)setAlwaysSendCacheBuster:(BOOL)arg1 ;
+(void)setAlwaysSendGUID:(BOOL)arg1 ;
+(void)setAuthenticationStarted:(id)arg1 ;
+(void)setBagOverrides:(id)arg1 ;
+(void)setCardEnrollmentAutomatic:(long long)arg1 ;
+(void)setCardEnrollmentManual:(long long)arg1 ;
+(void)setCardEnrollmentSilent:(long long)arg1 ;
+(void)setCardEnrollmentUpsell:(long long)arg1 ;
+(void)setDeviceBiometricIdentities:(id)arg1 ;
+(void)setDeviceOfferEligibility:(id)arg1 ;
+(void)setDidRetrieveDeviceOffersEligibility:(BOOL)arg1 ;
+(void)setDidRetrieveTVOffers:(BOOL)arg1 ;
+(void)setDisableHARLogging:(BOOL)arg1 ;
+(void)setDisablePrivacyAcknowledgement:(BOOL)arg1 ;
+(void)setDisableStubbedMarketingItems:(BOOL)arg1 ;
+(void)setEnableCameraRedeem:(BOOL)arg1 ;
+(void)setEnableFullDeviceOffersRetrieval:(BOOL)arg1 ;
+(void)setEnablePurchaseQueue:(BOOL)arg1 ;
+(void)setEnableRemoteSecuritySigning:(BOOL)arg1 ;
+(void)setForceLoadUrlMetrics:(long long)arg1 ;
+(void)setForceEngagementPurchaseSuccess:(BOOL)arg1 ;
+(void)setIgnoreServerTrustEvaluation:(BOOL)arg1 ;
+(void)setJourneysURLOverride:(id)arg1 ;
+(void)setHarURLFilters:(id)arg1 ;
+(void)setMarketingItemOverrides:(id)arg1 ;
+(void)setMediaTokenOverride:(id)arg1 ;
+(void)setMediaTokens:(id)arg1 ;
+(void)setMescalCertExpiration:(id)arg1 ;
+(void)setMetricsCanaryIdentifier:(id)arg1 ;
+(void)setMetricsTimingWindowStartTime:(id)arg1 ;
+(void)setMigratedDeviceOffers:(BOOL)arg1 ;
+(void)setMigratedDeviceOffersForWatch:(BOOL)arg1 ;
+(void)setPerfomedDeviceOfferSetup:(BOOL)arg1 ;
+(void)setQAMode:(BOOL)arg1 ;
+(void)setReversePushEnabled:(long long)arg1 ;
+(void)setSourceOverrides:(id)arg1 ;
+(void)setUIURLOverrides:(id)arg1 ;
+(void)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)updateBadgeIdsForBundle:(id)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)ss_ignoreServerTrustEvaluation;
+(BOOL)allowUpsellEnrollmentForAppliedAccounts;
+(id)extendedBiometricACLVersion;
+(id)primaryBiometricACLVersion;
+(void)setAllowUpsellEnrollmentForAppliedAccounts:(BOOL)arg1 ;
+(void)setExtendedBiometricACLVersion:(id)arg1 ;
+(void)setPrimaryBiometricACLVersion:(id)arg1 ;
+(void)setSharedDatabaseChangeToken:(id)arg1 ;
+(id)sharedDatabaseChangeToken;
@end

