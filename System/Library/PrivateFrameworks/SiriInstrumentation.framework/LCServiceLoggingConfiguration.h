/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, LCServiceLoggingParameters, NSData;

@interface LCServiceLoggingConfiguration : PBCodable {

	BOOL _hasDefaultParameters;
	BOOL _hasConfigurationVersion;
	int _configurationVersion;
	NSArray* _applications;
	NSArray* _blacklistedBundleIdentifiers;
	LCServiceLoggingParameters* _defaultParameters;

}

@property (nonatomic,retain) LCServiceLoggingParameters * defaultParameters;              //@synthesize defaultParameters=_defaultParameters - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultParameters;                                   //@synthesize hasDefaultParameters=_hasDefaultParameters - In the implementation block
@property (assign,nonatomic) int configurationVersion;                                    //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationVersion;                                //@synthesize hasConfigurationVersion=_hasConfigurationVersion - In the implementation block
@property (nonatomic,copy) NSArray * applications;                                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy) NSArray * blacklistedBundleIdentifiers;                        //@synthesize blacklistedBundleIdentifiers=_blacklistedBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(int)configurationVersion;
-(void)setConfigurationVersion:(int)arg1 ;
-(void)setDefaultParameters:(LCServiceLoggingParameters *)arg1 ;
-(void)addApplications:(id)arg1 ;
-(void)addBlacklistedBundleIdentifiers:(id)arg1 ;
-(LCServiceLoggingParameters *)defaultParameters;
-(NSArray *)blacklistedBundleIdentifiers;
-(void)clearApplications;
-(unsigned long long)applicationsCount;
-(id)applicationsAtIndex:(unsigned long long)arg1 ;
-(void)clearBlacklistedBundleIdentifiers;
-(unsigned long long)blacklistedBundleIdentifiersCount;
-(id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setBlacklistedBundleIdentifiers:(NSArray *)arg1 ;
-(BOOL)hasDefaultParameters;
-(void)setHasDefaultParameters:(BOOL)arg1 ;
-(BOOL)hasConfigurationVersion;
-(void)setHasConfigurationVersion:(BOOL)arg1 ;
@end

