/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol WFOtherNetworkProvider <WFCredentialsProvider>
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) long long securityMode; 
@property (assign,nonatomic) BOOL joining; 
@property (assign,nonatomic) NSString * activityString; 
@property (nonatomic,readonly) id WAPIIdentity; 
@property (nonatomic,readonly) id WAPIRootCertificate; 
@optional
-(long long)securityMode;
-(void)setActivityString:(id)arg1;
-(NSString *)activityString;
-(void)setJoining:(BOOL)arg1;
-(id)WAPIIdentity;
-(id)WAPIRootCertificate;
-(BOOL)joining;

@required
-(NSString *)SSID;

@end

