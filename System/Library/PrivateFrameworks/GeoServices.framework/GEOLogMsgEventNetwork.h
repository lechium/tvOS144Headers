/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEONetworkSessionTaskTransactionMetrics;

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _manifestEnv;
	NSString* _requestAppIdentifier;
	double _requestEnd;
	long long _requestErrorCode;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	double _requestStart;
	NSString* _serviceIpAddress;
	GEONetworkSessionTaskTransactionMetrics* _taskMetrics;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _decodeTime;
	int _httpResponseCode;
	int _mptcpServiceType;
	int _networkService;
	int _queuedTime;
	int _redirectCount;
	int _requestDataSize;
	int _responseDataSize;
	unsigned _tilesetId;
	int _totalTime;
	BOOL _mptcpNegotiated;
	BOOL _rnfTriggered;
	struct {
		unsigned has_requestEnd : 1;
		unsigned has_requestErrorCode : 1;
		unsigned has_requestStart : 1;
		unsigned has_decodeTime : 1;
		unsigned has_httpResponseCode : 1;
		unsigned has_mptcpServiceType : 1;
		unsigned has_networkService : 1;
		unsigned has_queuedTime : 1;
		unsigned has_redirectCount : 1;
		unsigned has_requestDataSize : 1;
		unsigned has_responseDataSize : 1;
		unsigned has_tilesetId : 1;
		unsigned has_totalTime : 1;
		unsigned has_mptcpNegotiated : 1;
		unsigned has_rnfTriggered : 1;
		unsigned read_manifestEnv : 1;
		unsigned read_requestAppIdentifier : 1;
		unsigned read_requestErrorDescription : 1;
		unsigned read_requestErrorDomain : 1;
		unsigned read_serviceIpAddress : 1;
		unsigned read_taskMetrics : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNetworkService; 
@property (assign,nonatomic) int networkService; 
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize; 
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize; 
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain; 
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode; 
@property (nonatomic,readonly) BOOL hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription; 
@property (nonatomic,readonly) BOOL hasRequestAppIdentifier; 
@property (nonatomic,retain) NSString * requestAppIdentifier; 
@property (assign,nonatomic) BOOL hasQueuedTime; 
@property (assign,nonatomic) int queuedTime; 
@property (assign,nonatomic) BOOL hasTotalTime; 
@property (assign,nonatomic) int totalTime; 
@property (assign,nonatomic) BOOL hasHttpResponseCode; 
@property (assign,nonatomic) int httpResponseCode; 
@property (assign,nonatomic) BOOL hasDecodeTime; 
@property (assign,nonatomic) int decodeTime; 
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) double requestEnd; 
@property (assign,nonatomic) BOOL hasRedirectCount; 
@property (assign,nonatomic) int redirectCount; 
@property (nonatomic,readonly) BOOL hasManifestEnv; 
@property (nonatomic,retain) NSString * manifestEnv; 
@property (assign,nonatomic) BOOL hasTilesetId; 
@property (assign,nonatomic) unsigned tilesetId; 
@property (assign,nonatomic) BOOL hasMptcpServiceType; 
@property (assign,nonatomic) int mptcpServiceType; 
@property (assign,nonatomic) BOOL hasMptcpNegotiated; 
@property (assign,nonatomic) BOOL mptcpNegotiated; 
@property (nonatomic,readonly) BOOL hasServiceIpAddress; 
@property (nonatomic,retain) NSString * serviceIpAddress; 
@property (assign,nonatomic) BOOL hasRnfTriggered; 
@property (assign,nonatomic) BOOL rnfTriggered; 
@property (nonatomic,readonly) BOOL hasTaskMetrics; 
@property (nonatomic,retain) GEONetworkSessionTaskTransactionMetrics * taskMetrics; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)requestStart;
-(double)requestEnd;
-(GEONetworkSessionTaskTransactionMetrics *)taskMetrics;
-(void)setRequestEnd:(double)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(void)setTaskMetrics:(GEONetworkSessionTaskTransactionMetrics *)arg1 ;
-(int)redirectCount;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasRequestEnd;
-(void)setRedirectCount:(int)arg1 ;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(BOOL)hasRedirectCount;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(void)setRequestErrorCode:(long long)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(NSString *)requestErrorDomain;
-(long long)requestErrorCode;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)requestErrorDescription;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(int)requestDataSize;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(int)responseDataSize;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(BOOL)hasRequestErrorDescription;
-(BOOL)mptcpNegotiated;
-(NSString *)serviceIpAddress;
-(void)setHttpResponseCode:(int)arg1 ;
-(void)setServiceIpAddress:(NSString *)arg1 ;
-(int)httpResponseCode;
-(void)setHasHttpResponseCode:(BOOL)arg1 ;
-(BOOL)hasHttpResponseCode;
-(BOOL)hasServiceIpAddress;
-(void)setNetworkService:(int)arg1 ;
-(void)setRequestAppIdentifier:(NSString *)arg1 ;
-(void)setTotalTime:(int)arg1 ;
-(void)setMptcpServiceType:(int)arg1 ;
-(void)setMptcpNegotiated:(BOOL)arg1 ;
-(void)setRnfTriggered:(BOOL)arg1 ;
-(void)setTilesetId:(unsigned)arg1 ;
-(void)setManifestEnv:(NSString *)arg1 ;
-(void)setQueuedTime:(int)arg1 ;
-(void)setDecodeTime:(int)arg1 ;
-(NSString *)requestAppIdentifier;
-(int)totalTime;
-(void)setHasTotalTime:(BOOL)arg1 ;
-(BOOL)hasTotalTime;
-(NSString *)manifestEnv;
-(int)networkService;
-(void)setHasNetworkService:(BOOL)arg1 ;
-(BOOL)hasNetworkService;
-(id)networkServiceAsString:(int)arg1 ;
-(int)StringAsNetworkService:(id)arg1 ;
-(BOOL)hasRequestAppIdentifier;
-(int)queuedTime;
-(void)setHasQueuedTime:(BOOL)arg1 ;
-(BOOL)hasQueuedTime;
-(int)decodeTime;
-(void)setHasDecodeTime:(BOOL)arg1 ;
-(BOOL)hasDecodeTime;
-(BOOL)hasManifestEnv;
-(unsigned)tilesetId;
-(void)setHasTilesetId:(BOOL)arg1 ;
-(BOOL)hasTilesetId;
-(int)mptcpServiceType;
-(void)setHasMptcpServiceType:(BOOL)arg1 ;
-(BOOL)hasMptcpServiceType;
-(id)mptcpServiceTypeAsString:(int)arg1 ;
-(int)StringAsMptcpServiceType:(id)arg1 ;
-(void)setHasMptcpNegotiated:(BOOL)arg1 ;
-(BOOL)hasMptcpNegotiated;
-(BOOL)rnfTriggered;
-(void)setHasRnfTriggered:(BOOL)arg1 ;
-(BOOL)hasRnfTriggered;
-(BOOL)hasTaskMetrics;
@end

