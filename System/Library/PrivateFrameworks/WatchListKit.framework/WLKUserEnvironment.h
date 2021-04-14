/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString, NSDictionary, NSArray;

@interface WLKUserEnvironment : NSObject {

	BOOL _consented;
	BOOL _internalBuild;
	NSNumber* _DSID;
	NSString* _storeFrontIdentifier;
	NSString* _localeIdentifier;
	NSDictionary* _entitlements;
	NSString* _restrictions;
	NSArray* _consentedBrands;
	unsigned long long _protocolVersion;
	NSArray* _deniedBrands;
	NSString* _platform;

}

@property (assign,nonatomic) unsigned long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,retain) NSNumber * DSID;                                 //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSString * storeFrontIdentifier;                 //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                     //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                     //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSString * restrictions;                         //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) NSArray * consentedBrands;                       //@synthesize consentedBrands=_consentedBrands - In the implementation block
@property (nonatomic,retain) NSArray * deniedBrands;                          //@synthesize deniedBrands=_deniedBrands - In the implementation block
@property (assign,nonatomic) BOOL consented;                                  //@synthesize consented=_consented - In the implementation block
@property (assign,nonatomic) BOOL internalBuild;                              //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,retain) NSString * platform;                             //@synthesize platform=_platform - In the implementation block
+(id)currentEnvironment;
+(void)setCurrentEnvironmentForTesting:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)localeIdentifier;
-(NSDictionary *)entitlements;
-(BOOL)internalBuild;
-(NSString *)restrictions;
-(void)setRestrictions:(NSString *)arg1 ;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)protocolVersion;
-(NSString *)platform;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(id)_queryParameters;
-(NSNumber *)DSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSArray *)deniedBrands;
-(NSArray *)consentedBrands;
-(BOOL)isEqualToEnvironment:(id)arg1 ;
-(BOOL)consented;
-(id)_entitlementsQuery;
-(id)_consentQuery;
-(void)setConsentedBrands:(NSArray *)arg1 ;
-(void)setConsented:(BOOL)arg1 ;
-(void)setDeniedBrands:(NSArray *)arg1 ;
@end

