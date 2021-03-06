/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver>

@property (assign,nonatomic) BOOL shouldAutoFillPasswordsFromKeychain; 
@property (nonatomic,retain) NSString * preferredCredentialProviderForSaving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const CFStringRef)autoFillPreferencesDomain;
+(BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+(void)autoFillPreferencesDidChange;
+(id)sharedFeatureManager;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_refreshCachedAutoFillRestrictionValues;
-(BOOL)shouldAutoFillPasswords;
-(BOOL)shouldAutoFillPasswordsFromKeychain;
-(void)setShouldAutoFillPasswordsFromKeychain:(BOOL)arg1 ;
@end

