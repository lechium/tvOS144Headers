/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/BYNetworkObserver.h>

@class AKAppleIDAuthenticationContext, NSDictionary, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver> {

	AKAppleIDAuthenticationContext* _authContext;
	BOOL _shouldRetrySilentLoginUpgrade;
	long long _silentLoginUpgradeRetryCount;
	NSDictionary* _authenticationResults;

}

@property (assign,nonatomic) BOOL shouldRetrySilentLoginUpgrade;                  //@synthesize shouldRetrySilentLoginUpgrade=_shouldRetrySilentLoginUpgrade - In the implementation block
@property (assign,nonatomic) long long silentLoginUpgradeRetryCount;              //@synthesize silentLoginUpgradeRetryCount=_silentLoginUpgradeRetryCount - In the implementation block
@property (nonatomic,retain) NSDictionary * authenticationResults;                //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)isFirstTimeLogin;
+(BOOL)isMultiUser;
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isSettingUpMultiUser;
+(BOOL)isManagedAppleIDSignedIn;
-(id)init;
-(void)dealloc;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(NSDictionary *)authenticationResults;
-(BOOL)isLoginUser;
-(void)willSwitchUser;
-(NSString *)shortLivedToken;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRetrySilentLoginUpgrade;
-(long long)silentLoginUpgradeRetryCount;
-(void)setSilentLoginUpgradeRetryCount:(long long)arg1 ;
-(void)_runSilentLoginUpgradeWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)_upgradeShortLivedTokenCompletion:(/*^block*/id)arg1 ;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 willNotCompleteBlock:(/*^block*/id)arg3 ;
-(BOOL)needsToUpgradeShortLivedToken;
-(BOOL)passwordChangeFlowNeedsToRun;
-(id)_fetchAKURLBagSynchronously;
-(void)switchToLoginWindowDueToError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldRetrySilentLoginUpgrade:(BOOL)arg1 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(void)userSwitchContextHasBeenUsed;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)_createAppleAccountWithAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_languageConfigurationDictionary;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_modifyAuthenticationContextIfNeeded:(id)arg1 ;
@end

