/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _isSetAside;
	NSString* _payloadProtocolType;
	NSString* _payloadUUID;
	NSString* _payloadOrganization;
	NSString* _profileOrganization;
	NSString* _profileIdentifier;
	NSString* _profileUUID;
	NSDate* _profileIngestionDate;
	NSString* _systemVersion;
	long long _profileSource;

}

@property (assign) long long profileSource;                   //@synthesize profileSource=_profileSource - In the implementation block
@property (copy) NSString * payloadProtocolType;              //@synthesize payloadProtocolType=_payloadProtocolType - In the implementation block
@property (copy) NSString * payloadUUID;                      //@synthesize payloadUUID=_payloadUUID - In the implementation block
@property (copy) NSString * payloadOrganization;              //@synthesize payloadOrganization=_payloadOrganization - In the implementation block
@property (copy) NSString * profileOrganization;              //@synthesize profileOrganization=_profileOrganization - In the implementation block
@property (copy) NSString * profileIdentifier;                //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (copy) NSString * profileUUID;                      //@synthesize profileUUID=_profileUUID - In the implementation block
@property (copy) NSDate * profileIngestionDate;               //@synthesize profileIngestionDate=_profileIngestionDate - In the implementation block
@property (copy) NSString * systemVersion;                    //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign) BOOL isSetAside;                           //@synthesize isSetAside=_isSetAside - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)systemVersion;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)setPayloadUUID:(NSString *)arg1 ;
-(NSString *)payloadUUID;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setPayloadOrganization:(NSString *)arg1 ;
-(void)setProfileOrganization:(NSString *)arg1 ;
-(void)setProfileUUID:(NSString *)arg1 ;
-(void)setIsSetAside:(BOOL)arg1 ;
-(BOOL)isSetAside;
-(NSString *)payloadProtocolType;
-(NSString *)payloadOrganization;
-(NSString *)profileUUID;
-(NSString *)profileOrganization;
-(NSDate *)profileIngestionDate;
-(long long)profileSource;
-(void)setPayloadProtocolType:(NSString *)arg1 ;
-(void)setProfileIngestionDate:(NSDate *)arg1 ;
-(void)setProfileSource:(long long)arg1 ;
@end

