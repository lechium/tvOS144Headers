/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, ACAccountStore;

@interface BUUserAccount : NSObject {

	BOOL _cachedIsPrimaryAccountManagedAppleID;
	BOOL _cachedICloudValuesPrewarmed;
	BOOL _cachedIsUserSignedInToiCloud;
	BOOL _cachedIsGlobalICloudDriveSyncOptedIn;
	int _tccNotifyToken;
	NSObject*<OS_dispatch_queue> _prewarmQueue;
	NSString* _cachedICloudIdentity;
	NSString* _cachedICloudAccountName;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> prewarmQueue;              //@synthesize prewarmQueue=_prewarmQueue - In the implementation block
@property (assign,nonatomic) BOOL cachedIsPrimaryAccountManagedAppleID;              //@synthesize cachedIsPrimaryAccountManagedAppleID=_cachedIsPrimaryAccountManagedAppleID - In the implementation block
@property (assign,nonatomic) BOOL cachedICloudValuesPrewarmed;                       //@synthesize cachedICloudValuesPrewarmed=_cachedICloudValuesPrewarmed - In the implementation block
@property (assign,nonatomic) BOOL cachedIsUserSignedInToiCloud;                      //@synthesize cachedIsUserSignedInToiCloud=_cachedIsUserSignedInToiCloud - In the implementation block
@property (nonatomic,retain) NSString * cachedICloudIdentity;                        //@synthesize cachedICloudIdentity=_cachedICloudIdentity - In the implementation block
@property (nonatomic,retain) NSString * cachedICloudAccountName;                     //@synthesize cachedICloudAccountName=_cachedICloudAccountName - In the implementation block
@property (assign,nonatomic) BOOL cachedIsGlobalICloudDriveSyncOptedIn;              //@synthesize cachedIsGlobalICloudDriveSyncOptedIn=_cachedIsGlobalICloudDriveSyncOptedIn - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) int tccNotifyToken;                                     //@synthesize tccNotifyToken=_tccNotifyToken - In the implementation block
+(id)sharedInstance;
+(void)prewarm;
+(id)storeAccountID;
+(id)primaryAppleAccount;
+(id)storeFrontIdentifier;
+(id)iCloudAccountName;
+(id)storeAccountName;
+(BOOL)isAccountModificationAllowed;
+(BOOL)isPrimaryAccountManagedAppleID;
+(BOOL)isStoreAccountManagedAppleID;
+(BOOL)isUserSignedInToiTunes;
+(BOOL)isUserSignedInToiCloud;
+(id)iCloudIdentity;
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)detectedUserSwitchWithId:(id)arg1 outSignedIn:(BOOL*)arg2 outSignedOut:(BOOL*)arg3 outAccountNumberChanged:(BOOL*)arg4 ;
+(id)lastUsedStoreAccountID;
+(void)clearLastUsedStoreAccountID;
+(void)updateLastUsedStoreAccountID;
+(void)clearCachedData;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)_iCloudAccountName;
-(void)_prewarmAsyncICloudValuesIfNeeded;
-(BOOL)_isPrimaryAccountManagedAppleID;
-(BOOL)_isUserSignedInToiCloud;
-(id)_iCloudIdentity;
-(BOOL)_isGlobalICloudDriveSyncOptedIn;
-(void)_clearCachedData;
-(NSObject*<OS_dispatch_queue>)prewarmQueue;
-(void)setCachedICloudValuesPrewarmed:(BOOL)arg1 ;
-(BOOL)cachedICloudValuesPrewarmed;
-(BOOL)_evaluateIsPrimaryAccountManagedAppleIDForAccount:(id)arg1 ;
-(void)setCachedIsPrimaryAccountManagedAppleID:(BOOL)arg1 ;
-(BOOL)_evaluateIsUserSignedInToiCloudForAccount:(id)arg1 ;
-(void)setCachedIsUserSignedInToiCloud:(BOOL)arg1 ;
-(id)_evaluateICloudAccountNameForAccount:(id)arg1 ;
-(void)setCachedICloudAccountName:(NSString *)arg1 ;
-(id)_evaluateICloudIdentityForAccount:(id)arg1 ;
-(void)setCachedICloudIdentity:(NSString *)arg1 ;
-(BOOL)_evaluateIsGlobalICloudDriveSyncOptedInForAccount:(id)arg1 ;
-(void)setCachedIsGlobalICloudDriveSyncOptedIn:(BOOL)arg1 ;
-(void)_cacheValues;
-(void)_prewarmICloudValuesIfNeeded;
-(BOOL)cachedIsPrimaryAccountManagedAppleID;
-(BOOL)cachedIsUserSignedInToiCloud;
-(NSString *)cachedICloudAccountName;
-(NSString *)cachedICloudIdentity;
-(BOOL)cachedIsGlobalICloudDriveSyncOptedIn;
-(void)setPrewarmQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)tccNotifyToken;
-(void)setTccNotifyToken:(int)arg1 ;
@end
