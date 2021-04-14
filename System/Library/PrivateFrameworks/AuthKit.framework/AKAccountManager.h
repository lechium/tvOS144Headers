/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class ACAccountStore, NSObject, ACAccountType, NSMutableDictionary;

@interface AKAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _accountQueue;
	ACAccountType* _authKitAccountType;
	os_unfair_lock_s _authKitAccountTypeLock;
	ACAccountType* _appleIDAccountType;
	os_unfair_lock_s _appleIDAccountTypeLock;
	ACAccountType* _iCloudAccountType;
	os_unfair_lock_s _iCloudAccountTypeLock;
	os_unfair_lock_s _accountTypeCacheLock;
	NSMutableDictionary* _accountTypeCache;

}

@property (nonatomic,readonly) ACAccountType * appleIDAccountType; 
@property (nonatomic,retain) ACAccountStore * store;                            //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccountType * authKitAccountType; 
@property (nonatomic,readonly) ACAccountType * iCloudAccountType; 
+(id)sharedInstance;
+(void)performWithinPersonaForAccount:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(BOOL)isAccountsFrameworkAvailable;
+(id)stringRepresentationForService:(long long)arg1 ;
+(id)personaIDIfCurrentPersonaIsDataSeparated;
-(id)init;
-(void)setStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)store;
-(id)authKitAccountWithAltDSID:(id)arg1 ;
-(BOOL)userUnderAgeForAccount:(id)arg1 ;
-(id)continuationTokenForAccount:(id)arg1 ;
-(id)aliasesForAccount:(id)arg1 ;
-(id)reachableEmailAddressesForAccount:(id)arg1 ;
-(BOOL)verifiedPrimaryEmailForAccount:(id)arg1 ;
-(void)setVerifiedPrimaryEmail:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)saveAccount:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setUsername:(id)arg1 forAccount:(id)arg2 ;
-(id)appleIDAccountWithAltDSID:(id)arg1 ;
-(id)iCloudAccountForAltDSID:(id)arg1 ;
-(void)updateAuthModeTimestampForAccount:(id)arg1 ;
-(id)hearbeatTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)continuationTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)passwordResetTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)passwordResetTokenBackupForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_tokenWithName:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(void)_removeTokenKey:(id)arg1 forAccount:(id)arg2 ;
-(ACAccountType *)authKitAccountType;
-(ACAccountType *)appleIDAccountType;
-(id)altDSIDforPrimaryiCloudAccount;
-(id)_serviceTypesForSecurityUpgrade;
-(long long)_serviceTypeForServiceNameString:(id)arg1 ;
-(id)accountsUsingService:(long long)arg1 ;
-(BOOL)_isAccountEligibleForSecurityUpgrade:(id)arg1 ofServiceType:(long long)arg2 ;
-(id)_defaultSecurityUpgradeServiceNames;
-(id)accountTypeForTypeIdentifier:(id)arg1 ;
-(unsigned long long)securityLevelForAccount:(id)arg1 ;
-(id)_matchingServiceAccountForAuthKitAccount:(id)arg1 service:(long long)arg2 ;
-(id)_accountTypeForServiceType:(long long)arg1 ;
-(id)altDSIDForAccount:(id)arg1 ;
-(void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2 ;
-(id)allAuthKitAccounts;
-(id)servicesUsingAccount:(id)arg1 ;
-(id)iCloudAccountForAppleID:(id)arg1 ;
-(BOOL)isPrimaryiCloudAccount:(id)arg1 ;
-(ACAccountType *)iCloudAccountType;
-(id)_aliasesForiCloudAccount:(id)arg1 ;
-(id)_altDSIDForiCloudAccount:(id)arg1 ;
-(id)primaryiCloudAccount;
-(void)setAltDSID:(id)arg1 forAccount:(id)arg2 ;
-(id)DSIDForAccount:(id)arg1 ;
-(void)setDSID:(id)arg1 forAccount:(id)arg2 ;
-(id)combinedAliasesAndReachableEmailsForAccount:(id)arg1 ;
-(void)setAliases:(id)arg1 forAccount:(id)arg2 ;
-(id)formattedUsernameForAccount:(id)arg1 ;
-(void)updateVerifiedEmail:(BOOL)arg1 forAccountWithAltDSID:(id)arg2 ;
-(void)updateUsername:(id)arg1 forAccountsWithAltDSID:(id)arg2 ;
-(id)primaryEmailAddressForAccount:(id)arg1 ;
-(void)setPrimaryEmailAddress:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)phoneAsAppleIDForAccount:(id)arg1 ;
-(void)setPhoneAsAppleID:(BOOL)arg1 forAccount:(id)arg2 ;
-(void)setUserUnderage:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)demoAccountForAccount:(id)arg1 ;
-(void)setDemoAccount:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)ageOfMajorityForAccount:(id)arg1 ;
-(void)setAgeOfMajority:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)authorizationUsedForAccount:(id)arg1 ;
-(void)setAuthorizationUsed:(BOOL)arg1 forAccount:(id)arg2 ;
-(void)setReachableEmailAddresses:(id)arg1 forAccount:(id)arg2 ;
-(id)givenNameForAccount:(id)arg1 ;
-(void)setGivenName:(id)arg1 forAccount:(id)arg2 ;
-(id)familyNameForAccount:(id)arg1 ;
-(void)setFamilyName:(id)arg1 forAccount:(id)arg2 ;
-(id)forwardingEmailForAccount:(id)arg1 ;
-(void)setForwardingEmail:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)selectedPrivateEmailForAccount:(id)arg1 ;
-(void)setSelectedPrivateEmail:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)selectedAuthorizationEmailForAccount:(id)arg1 ;
-(void)setSelectedAuthorizationEmail:(id)arg1 forAccount:(id)arg2 ;
-(void)setSecurityLevel:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(unsigned long long)authenticationModeForAccount:(id)arg1 ;
-(void)setAuthenticationMode:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(BOOL)shouldUpdateAuthModeForAccount:(id)arg1 ;
-(BOOL)deviceTrustRevokedForAccount:(id)arg1 ;
-(void)setDeviceTrustRevoked:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)shouldPerformSatoriWarmupVerificationForAccount:(id)arg1 ;
-(void)updateSatoriWarmUpTimestampForAccount:(id)arg1 ;
-(BOOL)needsRepairForAccount:(id)arg1 ;
-(unsigned long long)repairStateForAccount:(id)arg1 ;
-(void)setRepairState:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(id)hearbeatTokenForAccount:(id)arg1 ;
-(id)passwordResetTokenForAccount:(id)arg1 ;
-(id)passwordResetTokenBackupForAccount:(id)arg1 ;
-(id)masterTokenForAccount:(id)arg1 ;
-(void)removeMasterTokenForAccount:(id)arg1 ;
-(id)authKitAccountWithDSID:(id)arg1 ;
-(id)authKitAccountWithAppleID:(id)arg1 ;
-(id)appleIDAccountWithAppleID:(id)arg1 ;
-(id)primaryAuthKitAccount;
-(id)accountEligibleForUpdate;
-(id)mostRecentlyUsedAuthKitAccount;
-(void)removeAllPasswordResetTokens;
-(void)removeContinuationTokenForAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 inUse:(BOOL)arg2 byService:(long long)arg3 ;
-(id)activeServiceNamesForAccount:(id)arg1 ;
-(void)removeUnusedAndDuplicateAuthKitAccountsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasPrimaryiCloudAccountForAppleID:(id)arg1 ;
-(BOOL)hasPrimaryiCloudAccountForAltDSID:(id)arg1 ;
-(BOOL)isPrimaryiCloudAccountEmailVerified:(id)arg1 ;
-(id)transportableAuthKitAccount:(id)arg1 ;
-(id)additionalInfoForAccount:(id)arg1 ;
-(void)setAdditionalInfo:(id)arg1 forAccount:(id)arg2 ;
@end

