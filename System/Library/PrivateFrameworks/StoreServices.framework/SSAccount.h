/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class ACAccount, NSData, NSObject, NSArray, NSString, NSDictionary, NSNumber;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {

	ACAccount* _backingAccount;
	NSData* _bioToken;
	BOOL _didFallbackToPassword;
	NSObject*<OS_dispatch_queue> _backingAccountAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingAccountAccessQueue;              //@synthesize backingAccountAccessQueue=_backingAccountAccessQueue - In the implementation block
@property (assign) long long accountSource; 
@property (nonatomic,copy) NSArray * automaticDownloadKinds; 
@property (nonatomic,readonly) ACAccount * backingAccount; 
@property (getter=isDemoAccount,nonatomic,readonly) BOOL demoAccount; 
@property (nonatomic,copy) NSString * demoAccountRawPassword; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) BOOL hasBrokenDSID; 
@property (getter=isLocalAccount,nonatomic,readonly) BOOL localAccount; 
@property (nonatomic,copy) NSString * secureToken; 
@property (assign) BOOL didFallbackToPassword; 
@property (getter=isActive) BOOL active; 
@property (getter=isActiveLockerAccount) BOOL activeLockerAccount; 
@property (copy) NSString * ITunesPassSerialNumber; 
@property (getter=isNewCustomer) BOOL newCustomer; 
@property (getter=isManagedAppleID) BOOL managedAppleID; 
@property (nonatomic,copy) NSString * passwordEquivalentToken; 
@property (nonatomic,copy) NSString * rawPassword; 
@property (assign) long long accountKind; 
@property (copy) NSString * accountName; 
@property (assign) long long accountScope; 
@property (copy) NSString * altDSID; 
@property (getter=isAuthenticated) BOOL authenticated; 
@property (copy) NSString * creditsString; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSDictionary * privacyAcknowledgement; 
@property (getter=isSocialEnabled) BOOL socialEnabled; 
@property (copy) NSString * storeFrontIdentifier; 
@property (retain) NSNumber * uniqueIdentifier; 
@property (assign) long long availableServiceTypes; 
@property (assign) long long enabledServiceTypes; 
@property (assign) long long freeDownloadsPasswordSetting; 
@property (assign) long long paidPurchasesPasswordSetting; 
@property (readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_displayedServerPromptKeyWithIdentifier:(id)arg1 ;
+(id)_lastAttemptForServerPromptKeyWithIdentifier:(id)arg1 ;
+(id)secureTokenForIdentifier:(id)arg1 ;
+(id)_countryCodeFromStorefrontIdentifier:(id)arg1 ;
+(id)_valueForFirstAvailableKeyPath:(id)arg1 inDictionary:(id)arg2 ;
+(BOOL)backingAccountIsLocalAccount:(id)arg1 ;
+(long long)accountKindFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)accountNameFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)altDSIDFromAuthenticationResponseDictionary:(id)arg1 ;
+(BOOL)backingAccountIsDemoAccount:(id)arg1 ;
+(id)creditsStringFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)DSIDFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)firstNameFromAuthenticationResponseDictionary:(id)arg1 ;
+(BOOL)isManagedAppleIDFromAuthenticationResponseDictionary:(id)arg1 ;
+(BOOL)isNewCustomerFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)lastNameFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)storeFrontIdentifierFromURLResponse:(id)arg1 ;
+(id)serverValueForAccountPasswordSettingValue:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSNumber *)uniqueIdentifier;
-(NSString *)localizedName;
-(void)setUniqueIdentifier:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)passwordEquivalentToken;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(BOOL)isActive;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isDirty;
-(id)accountPropertyForKey:(id)arg1 ;
-(NSString *)accountName;
-(void)_sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(long long)accountSource;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDictionary *)privacyAcknowledgement;
-(id)hashedDescription;
-(void)setPrivacyAcknowledgement:(NSDictionary *)arg1 ;
-(BOOL)isLocalAccount;
-(void)setLockdownDictionary:(id)arg1 ;
-(BOOL)isNewCustomer;
-(NSString *)storeFrontIdentifier;
-(id)initWithBackingAccount:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backingAccountAccessQueue;
-(id)_backingAccount;
-(long long)enabledServiceTypes;
-(ACAccount *)backingAccount;
-(void)_setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)secureToken;
-(void)_addAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2 ;
-(void)_removeAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2 ;
-(void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3 ;
-(void)_setBackingAccount:(id)arg1 ;
-(long long)accountScope;
-(void)setRawPassword:(NSString *)arg1 ;
-(void)setSecureToken:(NSString *)arg1 ;
-(NSString *)creditsString;
-(NSString *)ITunesPassSerialNumber;
-(long long)accountKind;
-(long long)availableServiceTypes;
-(long long)freeDownloadsPasswordSetting;
-(long long)paidPurchasesPasswordSetting;
-(BOOL)didFallbackToPassword;
-(BOOL)isSocialEnabled;
-(BOOL)isManagedAppleID;
-(void)setCreditsString:(NSString *)arg1 ;
-(void)setITunesPassSerialNumber:(NSString *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(BOOL)isActiveLockerAccount;
-(void)setActiveLockerAccount:(BOOL)arg1 ;
-(void)setAccountKind:(long long)arg1 ;
-(void)setAccountScope:(long long)arg1 ;
-(void)setAccountSource:(long long)arg1 ;
-(void)setDidFallbackToPassword:(BOOL)arg1 ;
-(void)setFreeDownloadsPasswordSetting:(long long)arg1 ;
-(void)setManagedAppleID:(BOOL)arg1 ;
-(void)setNewCustomer:(BOOL)arg1 ;
-(void)setPaidPurchasesPasswordSetting:(long long)arg1 ;
-(void)setAvailableServiceTypes:(long long)arg1 ;
-(void)setEnabledServiceTypes:(long long)arg1 ;
-(id)eligibilityForService:(long long)arg1 ;
-(void)setEligibility:(id)arg1 forServiceType:(long long)arg2 ;
-(void)setSocialEnabled:(BOOL)arg1 ;
-(void)updateAccountPasswordSettingsWithRequestProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSArray *)automaticDownloadKinds;
-(NSString *)demoAccountRawPassword;
-(BOOL)displayedServerPromptWithIdentifier:(id)arg1 ;
-(id)lastAttemptDateForServerPromptWithIdentifier:(id)arg1 ;
-(BOOL)isDemoAccount;
-(BOOL)isDuplicate:(id)arg1 ;
-(NSString *)rawPassword;
-(void)setAutomaticDownloadKinds:(NSArray *)arg1 ;
-(void)setDemoAccountRawPassword:(NSString *)arg1 ;
-(void)setDisplayedServerPrompt:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(void)setLastAttemptDate:(id)arg1 forServerPromptWithIdentifier:(id)arg2 ;
-(void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)getDownloadKindsEligibleForContentRestoreWithBlock:(/*^block*/id)arg1 ;
-(void)getEligibilityForService:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPurchasedItemsForItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getTermsAndConditionsWithBlock:(/*^block*/id)arg1 ;
-(void)addAvailableServiceTypes:(long long)arg1 ;
-(void)addEnabledServiceTypes:(long long)arg1 ;
-(void)getITunesMatchStatusWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getKeybagSyncDataWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasBrokenDSID;
-(void)removeAvailableServiceTypes:(long long)arg1 ;
-(void)removeEnabledServiceTypes:(long long)arg1 ;
-(void)resetTransientData;
-(id)copyLockdownRepresentation;
-(BOOL)mergeValuesFromAccount:(id)arg1 ;
-(id)popBiometricToken;
-(void)setBiometricToken:(id)arg1 ;
-(void)updateAccountPasswordSettings:(/*^block*/id)arg1 ;
-(void)_sendBlockingXPCMessage:(id)arg1 ;
-(void)setBackingAccountAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

