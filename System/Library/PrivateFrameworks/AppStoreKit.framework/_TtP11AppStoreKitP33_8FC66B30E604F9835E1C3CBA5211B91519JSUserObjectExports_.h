/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSNumber;


@protocol _TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_ <JSExport>
@property (readonly,nonatomic) NSString * firstName; 
@property (readonly,nonatomic) NSString * lastName; 
@property (readonly,nonatomic) NSString * accountIdentifier; 
@property (readonly,nonatomic) NSString * dsid; 
@property (readonly,nonatomic) BOOL isManagedAppleID; 
@property (readonly,nonatomic) BOOL isUnderThirteen; 
@property (readonly,nonatomic) NSNumber * userAgeIfAvailable; 
@property (readonly,nonatomic) BOOL isFitnessAppInstallationAllowed; 
@required
-(NSString *)dsid;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)accountIdentifier;
-(BOOL)isManagedAppleID;
-(BOOL)isUnderThirteen;
-(NSNumber *)userAgeIfAvailable;
-(id)cookiesForUrl:(id)arg1;
-(id)cookieForUrlWithName:(id)arg1 :(id)arg2;
-(BOOL)isFitnessAppInstallationAllowed;

@end

