/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAdamAppIdentifier, NSString, GEOPDMerchantInformation, GEOLocation, GEOPDWarsawMerchantIdentifier;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAdamAppIdentifier* _appIdentifier;
	NSString* _industryCategory;
	long long _industryCode;
	NSString* _merchantCode;
	GEOPDMerchantInformation* _merchantInformation;
	NSString* _paymentNetwork;
	NSString* _rawMerchantCode;
	NSString* _terminalId;
	NSString* _transactionCurrencyCode;
	NSString* _transactionId;
	double _transactionLocationAge;
	GEOLocation* _transactionLocation;
	double _transactionTimestamp;
	GEOPDWarsawMerchantIdentifier* _warsawMerchantIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transactionStatus;
	int _transactionType;
	BOOL _coarseLocationUsed;
	BOOL _enableBrandMuidFallback;
	BOOL _fuzzyMatched;
	struct {
		unsigned has_industryCode : 1;
		unsigned has_transactionLocationAge : 1;
		unsigned has_transactionTimestamp : 1;
		unsigned has_transactionStatus : 1;
		unsigned has_transactionType : 1;
		unsigned has_coarseLocationUsed : 1;
		unsigned has_enableBrandMuidFallback : 1;
		unsigned has_fuzzyMatched : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_industryCategory : 1;
		unsigned read_merchantCode : 1;
		unsigned read_merchantInformation : 1;
		unsigned read_paymentNetwork : 1;
		unsigned read_rawMerchantCode : 1;
		unsigned read_terminalId : 1;
		unsigned read_transactionCurrencyCode : 1;
		unsigned read_transactionId : 1;
		unsigned read_transactionLocation : 1;
		unsigned read_warsawMerchantIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPaymentNetwork; 
@property (nonatomic,retain) NSString * paymentNetwork; 
@property (nonatomic,readonly) BOOL hasMerchantCode; 
@property (nonatomic,retain) NSString * merchantCode; 
@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp; 
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (assign,nonatomic) BOOL hasTransactionLocationAge; 
@property (assign,nonatomic) double transactionLocationAge; 
@property (nonatomic,readonly) BOOL hasRawMerchantCode; 
@property (nonatomic,retain) NSString * rawMerchantCode; 
@property (nonatomic,readonly) BOOL hasIndustryCategory; 
@property (nonatomic,retain) NSString * industryCategory; 
@property (assign,nonatomic) BOOL hasIndustryCode; 
@property (assign,nonatomic) long long industryCode; 
@property (assign,nonatomic) BOOL hasEnableBrandMuidFallback; 
@property (assign,nonatomic) BOOL enableBrandMuidFallback; 
@property (nonatomic,readonly) BOOL hasTerminalId; 
@property (nonatomic,retain) NSString * terminalId; 
@property (nonatomic,readonly) BOOL hasTransactionCurrencyCode; 
@property (nonatomic,retain) NSString * transactionCurrencyCode; 
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) int transactionType; 
@property (nonatomic,readonly) BOOL hasWarsawMerchantIdentifier; 
@property (nonatomic,retain) GEOPDWarsawMerchantIdentifier * warsawMerchantIdentifier; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) GEOPDAdamAppIdentifier * appIdentifier; 
@property (nonatomic,readonly) BOOL hasMerchantInformation; 
@property (nonatomic,retain) GEOPDMerchantInformation * merchantInformation; 
@property (assign,nonatomic) BOOL hasTransactionStatus; 
@property (assign,nonatomic) int transactionStatus; 
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSString * transactionId; 
@property (assign,nonatomic) BOOL hasFuzzyMatched; 
@property (assign,nonatomic) BOOL fuzzyMatched; 
@property (assign,nonatomic) BOOL hasCoarseLocationUsed; 
@property (assign,nonatomic) BOOL coarseLocationUsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)setAppIdentifier:(GEOPDAdamAppIdentifier *)arg1 ;
-(GEOLocation *)transactionLocation;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(BOOL)hasTransactionLocation;
-(double)transactionTimestamp;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(GEOPDAdamAppIdentifier *)appIdentifier;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(BOOL)hasMerchantCode;
-(BOOL)hasRawMerchantCode;
-(BOOL)hasAppIdentifier;
-(NSString *)paymentNetwork;
-(NSString *)industryCategory;
-(NSString *)terminalId;
-(NSString *)transactionCurrencyCode;
-(GEOPDWarsawMerchantIdentifier *)warsawMerchantIdentifier;
-(GEOPDMerchantInformation *)merchantInformation;
-(NSString *)transactionId;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(void)setTransactionLocationAge:(double)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(void)setIndustryCode:(long long)arg1 ;
-(void)setEnableBrandMuidFallback:(BOOL)arg1 ;
-(void)setTerminalId:(NSString *)arg1 ;
-(void)setTransactionCurrencyCode:(NSString *)arg1 ;
-(void)setTransactionType:(int)arg1 ;
-(void)setWarsawMerchantIdentifier:(GEOPDWarsawMerchantIdentifier *)arg1 ;
-(void)setMerchantInformation:(GEOPDMerchantInformation *)arg1 ;
-(void)setTransactionStatus:(int)arg1 ;
-(void)setTransactionId:(NSString *)arg1 ;
-(void)setFuzzyMatched:(BOOL)arg1 ;
-(void)setCoarseLocationUsed:(BOOL)arg1 ;
-(BOOL)hasPaymentNetwork;
-(double)transactionLocationAge;
-(void)setHasTransactionLocationAge:(BOOL)arg1 ;
-(BOOL)hasTransactionLocationAge;
-(BOOL)hasIndustryCategory;
-(long long)industryCode;
-(void)setHasIndustryCode:(BOOL)arg1 ;
-(BOOL)hasIndustryCode;
-(BOOL)enableBrandMuidFallback;
-(void)setHasEnableBrandMuidFallback:(BOOL)arg1 ;
-(BOOL)hasEnableBrandMuidFallback;
-(BOOL)hasTerminalId;
-(BOOL)hasTransactionCurrencyCode;
-(int)transactionType;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(BOOL)hasTransactionType;
-(id)transactionTypeAsString:(int)arg1 ;
-(int)StringAsTransactionType:(id)arg1 ;
-(BOOL)hasWarsawMerchantIdentifier;
-(BOOL)hasMerchantInformation;
-(int)transactionStatus;
-(void)setHasTransactionStatus:(BOOL)arg1 ;
-(BOOL)hasTransactionStatus;
-(id)transactionStatusAsString:(int)arg1 ;
-(int)StringAsTransactionStatus:(id)arg1 ;
-(BOOL)hasTransactionId;
-(BOOL)fuzzyMatched;
-(void)setHasFuzzyMatched:(BOOL)arg1 ;
-(BOOL)hasFuzzyMatched;
-(BOOL)coarseLocationUsed;
-(void)setHasCoarseLocationUsed:(BOOL)arg1 ;
-(BOOL)hasCoarseLocationUsed;
@end

