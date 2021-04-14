/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, CKAccountOverrideInfo;


@protocol CKDAccountInfoProvider <NSObject>
@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) BOOL isAnonymousAccount; 
@property (nonatomic,readonly) BOOL isUnitTestingAccount; 
@property (nonatomic,readonly) BOOL accountWantsPushRegistration; 
@property (nonatomic,readonly) BOOL isCarryAccount; 
@property (nonatomic,readonly) BOOL isiCloudDevEnvironmentAccount; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) NSString * displayedHostname; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (nonatomic,readonly) CKAccountOverrideInfo * fakeAccountInfo; 
@required
-(id)dsid;
-(NSString *)accountIdentifier;
-(BOOL)isUnitTestingAccount;
-(BOOL)accountWantsPushRegistration;
-(NSString *)displayedHostname;
-(BOOL)isAnonymousAccount;
-(BOOL)isCarryAccount;
-(id)iCloudAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2;
-(id)cloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2;
-(NSString *)serverPreferredPushEnvironment;
-(CKAccountOverrideInfo *)fakeAccountInfo;
-(BOOL)isFakeAccount;
-(void)cloudKitAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)iCloudAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)sharingURLHostname;
-(BOOL)isiCloudDevEnvironmentAccount;

@end

