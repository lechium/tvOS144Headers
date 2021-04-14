/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIMRemoteURLLoadCompleted : PBCodable <NSCopying> {

	unsigned long long _connectEndToRequestStartMillis;
	unsigned long long _connectStartToConnectEndMillis;
	unsigned long long _connectStartToSecureConnectionStartMillis;
	unsigned long long _domainLookupEndToConnectStartMillis;
	unsigned long long _domainLookupStartToDomainLookupEndMillis;
	unsigned long long _fetchStartToDomainLookupStartMillis;
	unsigned long long _navigationStartToRedirectStartMillis;
	unsigned long long _redirectEndToFetchStartMillis;
	unsigned long long _redirectStartToRedirectEndMillis;
	unsigned long long _requestStartToResponseStartMillis;
	unsigned long long _responseStartToResponseEndMillis;
	unsigned long long _secureConnectionStartToConnectEndMillis;
	unsigned long long _timestamp;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationStartToRedirectStartMillis; 
@property (assign,nonatomic) unsigned long long navigationStartToRedirectStartMillis;                   //@synthesize navigationStartToRedirectStartMillis=_navigationStartToRedirectStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectStartToRedirectEndMillis; 
@property (assign,nonatomic) unsigned long long redirectStartToRedirectEndMillis;                       //@synthesize redirectStartToRedirectEndMillis=_redirectStartToRedirectEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectEndToFetchStartMillis; 
@property (assign,nonatomic) unsigned long long redirectEndToFetchStartMillis;                          //@synthesize redirectEndToFetchStartMillis=_redirectEndToFetchStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasFetchStartToDomainLookupStartMillis; 
@property (assign,nonatomic) unsigned long long fetchStartToDomainLookupStartMillis;                    //@synthesize fetchStartToDomainLookupStartMillis=_fetchStartToDomainLookupStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupStartToDomainLookupEndMillis; 
@property (assign,nonatomic) unsigned long long domainLookupStartToDomainLookupEndMillis;               //@synthesize domainLookupStartToDomainLookupEndMillis=_domainLookupStartToDomainLookupEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupEndToConnectStartMillis; 
@property (assign,nonatomic) unsigned long long domainLookupEndToConnectStartMillis;                    //@synthesize domainLookupEndToConnectStartMillis=_domainLookupEndToConnectStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStartToSecureConnectionStartMillis; 
@property (assign,nonatomic) unsigned long long connectStartToSecureConnectionStartMillis;              //@synthesize connectStartToSecureConnectionStartMillis=_connectStartToSecureConnectionStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStartToConnectEndMillis; 
@property (assign,nonatomic) unsigned long long connectStartToConnectEndMillis;                         //@synthesize connectStartToConnectEndMillis=_connectStartToConnectEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionStartToConnectEndMillis; 
@property (assign,nonatomic) unsigned long long secureConnectionStartToConnectEndMillis;                //@synthesize secureConnectionStartToConnectEndMillis=_secureConnectionStartToConnectEndMillis - In the implementation block
@property (assign,nonatomic) BOOL hasConnectEndToRequestStartMillis; 
@property (assign,nonatomic) unsigned long long connectEndToRequestStartMillis;                         //@synthesize connectEndToRequestStartMillis=_connectEndToRequestStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStartToResponseStartMillis; 
@property (assign,nonatomic) unsigned long long requestStartToResponseStartMillis;                      //@synthesize requestStartToResponseStartMillis=_requestStartToResponseStartMillis - In the implementation block
@property (assign,nonatomic) BOOL hasResponseStartToResponseEndMillis; 
@property (assign,nonatomic) unsigned long long responseStartToResponseEndMillis;                       //@synthesize responseStartToResponseEndMillis=_responseStartToResponseEndMillis - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setNavigationStartToRedirectStartMillis:(unsigned long long)arg1 ;
-(void)setHasNavigationStartToRedirectStartMillis:(BOOL)arg1 ;
-(BOOL)hasNavigationStartToRedirectStartMillis;
-(void)setRedirectStartToRedirectEndMillis:(unsigned long long)arg1 ;
-(void)setHasRedirectStartToRedirectEndMillis:(BOOL)arg1 ;
-(BOOL)hasRedirectStartToRedirectEndMillis;
-(void)setRedirectEndToFetchStartMillis:(unsigned long long)arg1 ;
-(void)setHasRedirectEndToFetchStartMillis:(BOOL)arg1 ;
-(BOOL)hasRedirectEndToFetchStartMillis;
-(void)setFetchStartToDomainLookupStartMillis:(unsigned long long)arg1 ;
-(void)setHasFetchStartToDomainLookupStartMillis:(BOOL)arg1 ;
-(BOOL)hasFetchStartToDomainLookupStartMillis;
-(void)setDomainLookupStartToDomainLookupEndMillis:(unsigned long long)arg1 ;
-(void)setHasDomainLookupStartToDomainLookupEndMillis:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStartToDomainLookupEndMillis;
-(void)setDomainLookupEndToConnectStartMillis:(unsigned long long)arg1 ;
-(void)setHasDomainLookupEndToConnectStartMillis:(BOOL)arg1 ;
-(BOOL)hasDomainLookupEndToConnectStartMillis;
-(void)setConnectStartToSecureConnectionStartMillis:(unsigned long long)arg1 ;
-(void)setHasConnectStartToSecureConnectionStartMillis:(BOOL)arg1 ;
-(BOOL)hasConnectStartToSecureConnectionStartMillis;
-(void)setConnectStartToConnectEndMillis:(unsigned long long)arg1 ;
-(void)setHasConnectStartToConnectEndMillis:(BOOL)arg1 ;
-(BOOL)hasConnectStartToConnectEndMillis;
-(void)setSecureConnectionStartToConnectEndMillis:(unsigned long long)arg1 ;
-(void)setHasSecureConnectionStartToConnectEndMillis:(BOOL)arg1 ;
-(BOOL)hasSecureConnectionStartToConnectEndMillis;
-(void)setConnectEndToRequestStartMillis:(unsigned long long)arg1 ;
-(void)setHasConnectEndToRequestStartMillis:(BOOL)arg1 ;
-(BOOL)hasConnectEndToRequestStartMillis;
-(void)setRequestStartToResponseStartMillis:(unsigned long long)arg1 ;
-(void)setHasRequestStartToResponseStartMillis:(BOOL)arg1 ;
-(BOOL)hasRequestStartToResponseStartMillis;
-(void)setResponseStartToResponseEndMillis:(unsigned long long)arg1 ;
-(void)setHasResponseStartToResponseEndMillis:(BOOL)arg1 ;
-(BOOL)hasResponseStartToResponseEndMillis;
-(unsigned long long)navigationStartToRedirectStartMillis;
-(unsigned long long)redirectStartToRedirectEndMillis;
-(unsigned long long)redirectEndToFetchStartMillis;
-(unsigned long long)fetchStartToDomainLookupStartMillis;
-(unsigned long long)domainLookupStartToDomainLookupEndMillis;
-(unsigned long long)domainLookupEndToConnectStartMillis;
-(unsigned long long)connectStartToSecureConnectionStartMillis;
-(unsigned long long)connectStartToConnectEndMillis;
-(unsigned long long)secureConnectionStartToConnectEndMillis;
-(unsigned long long)connectEndToRequestStartMillis;
-(unsigned long long)requestStartToResponseStartMillis;
-(unsigned long long)responseStartToResponseEndMillis;
@end

