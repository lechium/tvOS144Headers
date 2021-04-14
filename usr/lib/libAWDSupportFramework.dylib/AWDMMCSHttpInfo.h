/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDMMCSHttpInfo : PBCodable <NSCopying> {

	long long _duration;
	long long _networkServiceType;
	long long _responseReceivedDuration;
	long long _startTime;
	int _adaptiveTcpReadTimeout;
	int _adaptiveTcpWriteTimeout;
	int _errorCode;
	NSString* _errorDomain;
	NSMutableArray* _httpErrors;
	int _httpStatus;
	NSString* _interfaceIdentifier;
	NSString* _locatorHostname;
	NSString* _locatorPeerAddress;
	unsigned _locatorPort;
	NSString* _locatorScheme;
	NSString* _networkUsed;
	int _qualityOfService;
	int _requestSize;
	int _responseSize;
	NSMutableArray* _tcpInfos;
	BOOL _allowsCellular;
	BOOL _allowsPowerNapScheduling;
	BOOL _cancelled;
	BOOL _connectionReused;
	BOOL _fastFail;
	BOOL _finalTryInRequest;
	BOOL _forceNondiscretionary;
	BOOL _inlineEdgeComplete;
	BOOL _powerPluggedInAtEnd;
	BOOL _powerPluggedInAtStart;
	BOOL _powerPluggedInWhenQueued;
	BOOL _proxyUsed;
	BOOL _requiresPowerPluggedIn;
	BOOL _timedOut;
	BOOL _transactionComplete;
	SCD_Struct_AW32 _has;

}

@property (nonatomic,readonly) BOOL hasLocatorScheme; 
@property (nonatomic,retain) NSString * locatorScheme;                        //@synthesize locatorScheme=_locatorScheme - In the implementation block
@property (nonatomic,readonly) BOOL hasLocatorHostname; 
@property (nonatomic,retain) NSString * locatorHostname;                      //@synthesize locatorHostname=_locatorHostname - In the implementation block
@property (assign,nonatomic) BOOL hasLocatorPort; 
@property (assign,nonatomic) unsigned locatorPort;                            //@synthesize locatorPort=_locatorPort - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionReused; 
@property (assign,nonatomic) BOOL connectionReused;                           //@synthesize connectionReused=_connectionReused - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasResponseReceivedDuration; 
@property (assign,nonatomic) long long responseReceivedDuration;              //@synthesize responseReceivedDuration=_responseReceivedDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) int httpStatus;                                  //@synthesize httpStatus=_httpStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                          //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasRequestSize; 
@property (assign,nonatomic) int requestSize;                                 //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) int responseSize;                                //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionComplete; 
@property (assign,nonatomic) BOOL transactionComplete;                        //@synthesize transactionComplete=_transactionComplete - In the implementation block
@property (assign,nonatomic) BOOL hasTimedOut; 
@property (assign,nonatomic) BOOL timedOut;                                   //@synthesize timedOut=_timedOut - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpInfos;                       //@synthesize tcpInfos=_tcpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * httpErrors;                     //@synthesize httpErrors=_httpErrors - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceIdentifier; 
@property (nonatomic,retain) NSString * interfaceIdentifier;                  //@synthesize interfaceIdentifier=_interfaceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasLocatorPeerAddress; 
@property (nonatomic,retain) NSString * locatorPeerAddress;                   //@synthesize locatorPeerAddress=_locatorPeerAddress - In the implementation block
@property (assign,nonatomic) BOOL hasRequiresPowerPluggedIn; 
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                     //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsPowerNapScheduling; 
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                   //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsCellular; 
@property (assign,nonatomic) BOOL allowsCellular;                             //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) BOOL hasForceNondiscretionary; 
@property (assign,nonatomic) BOOL forceNondiscretionary;                      //@synthesize forceNondiscretionary=_forceNondiscretionary - In the implementation block
@property (assign,nonatomic) BOOL hasFastFail; 
@property (assign,nonatomic) BOOL fastFail;                                   //@synthesize fastFail=_fastFail - In the implementation block
@property (assign,nonatomic) BOOL hasQualityOfService; 
@property (assign,nonatomic) int qualityOfService;                            //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL hasProxyUsed; 
@property (assign,nonatomic) BOOL proxyUsed;                                  //@synthesize proxyUsed=_proxyUsed - In the implementation block
@property (assign,nonatomic) BOOL hasFinalTryInRequest; 
@property (assign,nonatomic) BOOL finalTryInRequest;                          //@synthesize finalTryInRequest=_finalTryInRequest - In the implementation block
@property (assign,nonatomic) BOOL hasInlineEdgeComplete; 
@property (assign,nonatomic) BOOL inlineEdgeComplete;                         //@synthesize inlineEdgeComplete=_inlineEdgeComplete - In the implementation block
@property (assign,nonatomic) BOOL hasAdaptiveTcpReadTimeout; 
@property (assign,nonatomic) int adaptiveTcpReadTimeout;                      //@synthesize adaptiveTcpReadTimeout=_adaptiveTcpReadTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasAdaptiveTcpWriteTimeout; 
@property (assign,nonatomic) int adaptiveTcpWriteTimeout;                     //@synthesize adaptiveTcpWriteTimeout=_adaptiveTcpWriteTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasPowerPluggedInWhenQueued; 
@property (assign,nonatomic) BOOL powerPluggedInWhenQueued;                   //@synthesize powerPluggedInWhenQueued=_powerPluggedInWhenQueued - In the implementation block
@property (assign,nonatomic) BOOL hasPowerPluggedInAtStart; 
@property (assign,nonatomic) BOOL powerPluggedInAtStart;                      //@synthesize powerPluggedInAtStart=_powerPluggedInAtStart - In the implementation block
@property (assign,nonatomic) BOOL hasPowerPluggedInAtEnd; 
@property (assign,nonatomic) BOOL powerPluggedInAtEnd;                        //@synthesize powerPluggedInAtEnd=_powerPluggedInAtEnd - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkUsed; 
@property (nonatomic,retain) NSString * networkUsed;                          //@synthesize networkUsed=_networkUsed - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkServiceType; 
@property (assign,nonatomic) long long networkServiceType;                    //@synthesize networkServiceType=_networkServiceType - In the implementation block
+(Class)tcpInfoType;
+(Class)httpErrorType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)startTime;
-(long long)networkServiceType;
-(void)setNetworkServiceType:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(int)qualityOfService;
-(void)setQualityOfService:(int)arg1 ;
-(long long)duration;
-(BOOL)cancelled;
-(void)setDuration:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)errorDomain;
-(int)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)interfaceIdentifier;
-(void)setInterfaceIdentifier:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(BOOL)hasQualityOfService;
-(void)setRequestSize:(int)arg1 ;
-(void)setHasRequestSize:(BOOL)arg1 ;
-(BOOL)hasRequestSize;
-(int)requestSize;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(void)setLocatorScheme:(NSString *)arg1 ;
-(void)setLocatorHostname:(NSString *)arg1 ;
-(void)setTcpInfos:(NSMutableArray *)arg1 ;
-(void)setHttpErrors:(NSMutableArray *)arg1 ;
-(void)setLocatorPeerAddress:(NSString *)arg1 ;
-(void)setNetworkUsed:(NSString *)arg1 ;
-(void)addTcpInfo:(id)arg1 ;
-(void)addHttpError:(id)arg1 ;
-(unsigned long long)tcpInfosCount;
-(void)clearTcpInfos;
-(id)tcpInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)httpErrorsCount;
-(void)clearHttpErrors;
-(id)httpErrorAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocatorScheme;
-(BOOL)hasLocatorHostname;
-(void)setLocatorPort:(unsigned)arg1 ;
-(void)setHasLocatorPort:(BOOL)arg1 ;
-(BOOL)hasLocatorPort;
-(void)setConnectionReused:(BOOL)arg1 ;
-(void)setHasConnectionReused:(BOOL)arg1 ;
-(BOOL)hasConnectionReused;
-(void)setResponseReceivedDuration:(long long)arg1 ;
-(void)setHasResponseReceivedDuration:(BOOL)arg1 ;
-(BOOL)hasResponseReceivedDuration;
-(void)setHttpStatus:(int)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(void)setResponseSize:(int)arg1 ;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(BOOL)hasResponseSize;
-(void)setTransactionComplete:(BOOL)arg1 ;
-(void)setHasTransactionComplete:(BOOL)arg1 ;
-(BOOL)hasTransactionComplete;
-(void)setTimedOut:(BOOL)arg1 ;
-(void)setHasTimedOut:(BOOL)arg1 ;
-(BOOL)hasTimedOut;
-(BOOL)hasInterfaceIdentifier;
-(BOOL)hasLocatorPeerAddress;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setHasRequiresPowerPluggedIn:(BOOL)arg1 ;
-(BOOL)hasRequiresPowerPluggedIn;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(void)setHasAllowsPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)hasAllowsPowerNapScheduling;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(void)setHasAllowsCellular:(BOOL)arg1 ;
-(BOOL)hasAllowsCellular;
-(void)setForceNondiscretionary:(BOOL)arg1 ;
-(void)setHasForceNondiscretionary:(BOOL)arg1 ;
-(BOOL)hasForceNondiscretionary;
-(void)setFastFail:(BOOL)arg1 ;
-(void)setHasFastFail:(BOOL)arg1 ;
-(BOOL)hasFastFail;
-(void)setProxyUsed:(BOOL)arg1 ;
-(void)setHasProxyUsed:(BOOL)arg1 ;
-(BOOL)hasProxyUsed;
-(void)setFinalTryInRequest:(BOOL)arg1 ;
-(void)setHasFinalTryInRequest:(BOOL)arg1 ;
-(BOOL)hasFinalTryInRequest;
-(void)setInlineEdgeComplete:(BOOL)arg1 ;
-(void)setHasInlineEdgeComplete:(BOOL)arg1 ;
-(BOOL)hasInlineEdgeComplete;
-(void)setAdaptiveTcpReadTimeout:(int)arg1 ;
-(void)setHasAdaptiveTcpReadTimeout:(BOOL)arg1 ;
-(BOOL)hasAdaptiveTcpReadTimeout;
-(void)setAdaptiveTcpWriteTimeout:(int)arg1 ;
-(void)setHasAdaptiveTcpWriteTimeout:(BOOL)arg1 ;
-(BOOL)hasAdaptiveTcpWriteTimeout;
-(void)setPowerPluggedInWhenQueued:(BOOL)arg1 ;
-(void)setHasPowerPluggedInWhenQueued:(BOOL)arg1 ;
-(BOOL)hasPowerPluggedInWhenQueued;
-(void)setPowerPluggedInAtStart:(BOOL)arg1 ;
-(void)setHasPowerPluggedInAtStart:(BOOL)arg1 ;
-(BOOL)hasPowerPluggedInAtStart;
-(void)setPowerPluggedInAtEnd:(BOOL)arg1 ;
-(void)setHasPowerPluggedInAtEnd:(BOOL)arg1 ;
-(BOOL)hasPowerPluggedInAtEnd;
-(BOOL)hasNetworkUsed;
-(void)setHasNetworkServiceType:(BOOL)arg1 ;
-(BOOL)hasNetworkServiceType;
-(NSString *)locatorScheme;
-(NSString *)locatorHostname;
-(unsigned)locatorPort;
-(BOOL)connectionReused;
-(long long)responseReceivedDuration;
-(int)httpStatus;
-(int)responseSize;
-(BOOL)transactionComplete;
-(BOOL)timedOut;
-(NSMutableArray *)tcpInfos;
-(NSMutableArray *)httpErrors;
-(NSString *)locatorPeerAddress;
-(BOOL)requiresPowerPluggedIn;
-(BOOL)allowsPowerNapScheduling;
-(BOOL)allowsCellular;
-(BOOL)forceNondiscretionary;
-(BOOL)fastFail;
-(BOOL)proxyUsed;
-(BOOL)finalTryInRequest;
-(BOOL)inlineEdgeComplete;
-(int)adaptiveTcpReadTimeout;
-(int)adaptiveTcpWriteTimeout;
-(BOOL)powerPluggedInWhenQueued;
-(BOOL)powerPluggedInAtStart;
-(BOOL)powerPluggedInAtEnd;
-(NSString *)networkUsed;
@end

