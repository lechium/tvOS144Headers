/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {

	double _expirationDate;
	NSMutableArray* _searchAdsSettingsParams;
	SCD_Struct_AD3 _has;

}

@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchAdsSettingsParams;              //@synthesize searchAdsSettingsParams=_searchAdsSettingsParams - In the implementation block
+(Class)searchAdsSettingsParamsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setExpirationDate:(double)arg1 ;
-(double)expirationDate;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExpirationDate;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(void)addSearchAdsSettingsParams:(id)arg1 ;
-(unsigned long long)searchAdsSettingsParamsCount;
-(void)clearSearchAdsSettingsParams;
-(id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)searchAdsSettingsParams;
-(void)setSearchAdsSettingsParams:(NSMutableArray *)arg1 ;
@end

