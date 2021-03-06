/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudServices/CloudServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SecureBackupTermsInfo : PBCodable <NSCopying> {

	NSString* _altDSID;
	NSString* _countryCode;
	NSString* _icloudVersion;
	NSString* _metadata;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasIcloudVersion; 
@property (nonatomic,retain) NSString * icloudVersion;              //@synthesize icloudVersion=_icloudVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAltDSID; 
@property (nonatomic,retain) NSString * altDSID;                    //@synthesize altDSID=_altDSID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)countryCode;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)metadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(BOOL)hasCountryCode;
-(BOOL)hasMetadata;
-(void)setIcloudVersion:(NSString *)arg1 ;
-(BOOL)hasIcloudVersion;
-(BOOL)hasAltDSID;
-(NSString *)icloudVersion;
@end

