/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics : PBCodable <NSCopying> {

	unsigned long long _kCtlTxRTS;
	unsigned long long _kMACRxDataFrameMatchingRA;
	unsigned long long _kMACRxDataFrameOtherRA;
	unsigned long long _kRxBadFCS;
	unsigned long long _kRxBadPLCP;
	unsigned long long _kRxCRCGlitch;
	unsigned long long _kRxDataErrors;
	unsigned long long _kRxFrames;
	unsigned long long _kRxGoodPLCP;
	unsigned long long _kRxRetryBitSet;
	unsigned long long _kTxFrames;
	unsigned long long _kTxRetransmission;
	unsigned long long _kdot11MultipleRetryCount;
	unsigned long long _kdot11RTSFailureCount;
	unsigned long long _kdot11RTSSuccessCount;
	unsigned long long _kdot11RetryCount;
	unsigned _kMACRxControlFrameMatchingRA;
	unsigned _kMACRxControlFrameOtherRA;
	SCD_Struct_Wi2 _has;

}

@property (assign,nonatomic) BOOL hasKRxDataErrors; 
@property (assign,nonatomic) unsigned long long kRxDataErrors;                          //@synthesize kRxDataErrors=_kRxDataErrors - In the implementation block
@property (assign,nonatomic) BOOL hasKRxFrames; 
@property (assign,nonatomic) unsigned long long kRxFrames;                              //@synthesize kRxFrames=_kRxFrames - In the implementation block
@property (assign,nonatomic) BOOL hasKRxRetryBitSet; 
@property (assign,nonatomic) unsigned long long kRxRetryBitSet;                         //@synthesize kRxRetryBitSet=_kRxRetryBitSet - In the implementation block
@property (assign,nonatomic) BOOL hasKMACRxDataFrameMatchingRA; 
@property (assign,nonatomic) unsigned long long kMACRxDataFrameMatchingRA;              //@synthesize kMACRxDataFrameMatchingRA=_kMACRxDataFrameMatchingRA - In the implementation block
@property (assign,nonatomic) BOOL hasKMACRxDataFrameOtherRA; 
@property (assign,nonatomic) unsigned long long kMACRxDataFrameOtherRA;                 //@synthesize kMACRxDataFrameOtherRA=_kMACRxDataFrameOtherRA - In the implementation block
@property (assign,nonatomic) BOOL hasKMACRxControlFrameMatchingRA; 
@property (assign,nonatomic) unsigned kMACRxControlFrameMatchingRA;                     //@synthesize kMACRxControlFrameMatchingRA=_kMACRxControlFrameMatchingRA - In the implementation block
@property (assign,nonatomic) BOOL hasKMACRxControlFrameOtherRA; 
@property (assign,nonatomic) unsigned kMACRxControlFrameOtherRA;                        //@synthesize kMACRxControlFrameOtherRA=_kMACRxControlFrameOtherRA - In the implementation block
@property (assign,nonatomic) BOOL hasKRxGoodPLCP; 
@property (assign,nonatomic) unsigned long long kRxGoodPLCP;                            //@synthesize kRxGoodPLCP=_kRxGoodPLCP - In the implementation block
@property (assign,nonatomic) BOOL hasKRxBadPLCP; 
@property (assign,nonatomic) unsigned long long kRxBadPLCP;                             //@synthesize kRxBadPLCP=_kRxBadPLCP - In the implementation block
@property (assign,nonatomic) BOOL hasKRxBadFCS; 
@property (assign,nonatomic) unsigned long long kRxBadFCS;                              //@synthesize kRxBadFCS=_kRxBadFCS - In the implementation block
@property (assign,nonatomic) BOOL hasKTxFrames; 
@property (assign,nonatomic) unsigned long long kTxFrames;                              //@synthesize kTxFrames=_kTxFrames - In the implementation block
@property (assign,nonatomic) BOOL hasKTxRetransmission; 
@property (assign,nonatomic) unsigned long long kTxRetransmission;                      //@synthesize kTxRetransmission=_kTxRetransmission - In the implementation block
@property (assign,nonatomic) BOOL hasKdot11RetryCount; 
@property (assign,nonatomic) unsigned long long kdot11RetryCount;                       //@synthesize kdot11RetryCount=_kdot11RetryCount - In the implementation block
@property (assign,nonatomic) BOOL hasKdot11MultipleRetryCount; 
@property (assign,nonatomic) unsigned long long kdot11MultipleRetryCount;               //@synthesize kdot11MultipleRetryCount=_kdot11MultipleRetryCount - In the implementation block
@property (assign,nonatomic) BOOL hasKdot11RTSSuccessCount; 
@property (assign,nonatomic) unsigned long long kdot11RTSSuccessCount;                  //@synthesize kdot11RTSSuccessCount=_kdot11RTSSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasKdot11RTSFailureCount; 
@property (assign,nonatomic) unsigned long long kdot11RTSFailureCount;                  //@synthesize kdot11RTSFailureCount=_kdot11RTSFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasKCtlTxRTS; 
@property (assign,nonatomic) unsigned long long kCtlTxRTS;                              //@synthesize kCtlTxRTS=_kCtlTxRTS - In the implementation block
@property (assign,nonatomic) BOOL hasKRxCRCGlitch; 
@property (assign,nonatomic) unsigned long long kRxCRCGlitch;                           //@synthesize kRxCRCGlitch=_kRxCRCGlitch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setKRxDataErrors:(unsigned long long)arg1 ;
-(void)setHasKRxDataErrors:(BOOL)arg1 ;
-(BOOL)hasKRxDataErrors;
-(void)setKRxFrames:(unsigned long long)arg1 ;
-(void)setHasKRxFrames:(BOOL)arg1 ;
-(BOOL)hasKRxFrames;
-(void)setKRxRetryBitSet:(unsigned long long)arg1 ;
-(void)setHasKRxRetryBitSet:(BOOL)arg1 ;
-(BOOL)hasKRxRetryBitSet;
-(void)setKMACRxDataFrameMatchingRA:(unsigned long long)arg1 ;
-(void)setHasKMACRxDataFrameMatchingRA:(BOOL)arg1 ;
-(BOOL)hasKMACRxDataFrameMatchingRA;
-(void)setKMACRxDataFrameOtherRA:(unsigned long long)arg1 ;
-(void)setHasKMACRxDataFrameOtherRA:(BOOL)arg1 ;
-(BOOL)hasKMACRxDataFrameOtherRA;
-(void)setKMACRxControlFrameMatchingRA:(unsigned)arg1 ;
-(void)setHasKMACRxControlFrameMatchingRA:(BOOL)arg1 ;
-(BOOL)hasKMACRxControlFrameMatchingRA;
-(void)setKMACRxControlFrameOtherRA:(unsigned)arg1 ;
-(void)setHasKMACRxControlFrameOtherRA:(BOOL)arg1 ;
-(BOOL)hasKMACRxControlFrameOtherRA;
-(void)setKRxGoodPLCP:(unsigned long long)arg1 ;
-(void)setHasKRxGoodPLCP:(BOOL)arg1 ;
-(BOOL)hasKRxGoodPLCP;
-(void)setKRxBadPLCP:(unsigned long long)arg1 ;
-(void)setHasKRxBadPLCP:(BOOL)arg1 ;
-(BOOL)hasKRxBadPLCP;
-(void)setKRxBadFCS:(unsigned long long)arg1 ;
-(void)setHasKRxBadFCS:(BOOL)arg1 ;
-(BOOL)hasKRxBadFCS;
-(void)setKTxFrames:(unsigned long long)arg1 ;
-(void)setHasKTxFrames:(BOOL)arg1 ;
-(BOOL)hasKTxFrames;
-(void)setKTxRetransmission:(unsigned long long)arg1 ;
-(void)setHasKTxRetransmission:(BOOL)arg1 ;
-(BOOL)hasKTxRetransmission;
-(void)setKdot11RetryCount:(unsigned long long)arg1 ;
-(void)setHasKdot11RetryCount:(BOOL)arg1 ;
-(BOOL)hasKdot11RetryCount;
-(void)setKdot11MultipleRetryCount:(unsigned long long)arg1 ;
-(void)setHasKdot11MultipleRetryCount:(BOOL)arg1 ;
-(BOOL)hasKdot11MultipleRetryCount;
-(void)setKdot11RTSSuccessCount:(unsigned long long)arg1 ;
-(void)setHasKdot11RTSSuccessCount:(BOOL)arg1 ;
-(BOOL)hasKdot11RTSSuccessCount;
-(void)setKdot11RTSFailureCount:(unsigned long long)arg1 ;
-(void)setHasKdot11RTSFailureCount:(BOOL)arg1 ;
-(BOOL)hasKdot11RTSFailureCount;
-(void)setKCtlTxRTS:(unsigned long long)arg1 ;
-(void)setHasKCtlTxRTS:(BOOL)arg1 ;
-(BOOL)hasKCtlTxRTS;
-(void)setKRxCRCGlitch:(unsigned long long)arg1 ;
-(void)setHasKRxCRCGlitch:(BOOL)arg1 ;
-(BOOL)hasKRxCRCGlitch;
-(unsigned long long)kRxDataErrors;
-(unsigned long long)kRxFrames;
-(unsigned long long)kRxRetryBitSet;
-(unsigned long long)kMACRxDataFrameMatchingRA;
-(unsigned long long)kMACRxDataFrameOtherRA;
-(unsigned)kMACRxControlFrameMatchingRA;
-(unsigned)kMACRxControlFrameOtherRA;
-(unsigned long long)kRxGoodPLCP;
-(unsigned long long)kRxBadPLCP;
-(unsigned long long)kRxBadFCS;
-(unsigned long long)kTxFrames;
-(unsigned long long)kTxRetransmission;
-(unsigned long long)kdot11RetryCount;
-(unsigned long long)kdot11MultipleRetryCount;
-(unsigned long long)kdot11RTSSuccessCount;
-(unsigned long long)kdot11RTSFailureCount;
-(unsigned long long)kCtlTxRTS;
-(unsigned long long)kRxCRCGlitch;
@end

