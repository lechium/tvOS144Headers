/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOStyleAttributes, NSString;

@interface GEOWalletCategoryMapping : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOStyleAttributes* _stylesAttributes;
	NSString* _walletCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasWalletCategory; 
@property (nonatomic,retain) NSString * walletCategory; 
@property (nonatomic,readonly) BOOL hasStylesAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * stylesAttributes; 
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
-(NSString *)walletCategory;
-(GEOStyleAttributes *)stylesAttributes;
-(void)setWalletCategory:(NSString *)arg1 ;
-(void)setStylesAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasWalletCategory;
-(BOOL)hasStylesAttributes;
@end

