/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPClientCapabilities : PBCodable <NSCopying> {

	int _transitMarketSupport;
	BOOL _hasConstrainedProblemStatusSize;
	BOOL _hasFeatureHandle;
	BOOL _hasNoOptInRequest;
	BOOL _hasSupportForIdsBasedNotifications;
	struct {
		unsigned has_transitMarketSupport : 1;
		unsigned has_hasConstrainedProblemStatusSize : 1;
		unsigned has_hasFeatureHandle : 1;
		unsigned has_hasNoOptInRequest : 1;
		unsigned has_hasSupportForIdsBasedNotifications : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHasConstrainedProblemStatusSize; 
@property (assign,nonatomic) BOOL hasConstrainedProblemStatusSize; 
@property (assign,nonatomic) BOOL hasHasNoOptInRequest; 
@property (assign,nonatomic) BOOL hasNoOptInRequest; 
@property (assign,nonatomic) BOOL hasHasFeatureHandle; 
@property (assign,nonatomic) BOOL hasFeatureHandle; 
@property (assign,nonatomic) BOOL hasHasSupportForIdsBasedNotifications; 
@property (assign,nonatomic) BOOL hasSupportForIdsBasedNotifications; 
@property (assign,nonatomic) BOOL hasTransitMarketSupport; 
@property (assign,nonatomic) int transitMarketSupport; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasConstrainedProblemStatusSize:(BOOL)arg1 ;
-(void)setHasNoOptInRequest:(BOOL)arg1 ;
-(void)setHasFeatureHandle:(BOOL)arg1 ;
-(void)setHasSupportForIdsBasedNotifications:(BOOL)arg1 ;
-(void)setTransitMarketSupport:(int)arg1 ;
-(BOOL)hasConstrainedProblemStatusSize;
-(void)setHasHasConstrainedProblemStatusSize:(BOOL)arg1 ;
-(BOOL)hasHasConstrainedProblemStatusSize;
-(BOOL)hasNoOptInRequest;
-(void)setHasHasNoOptInRequest:(BOOL)arg1 ;
-(BOOL)hasHasNoOptInRequest;
-(BOOL)hasFeatureHandle;
-(void)setHasHasFeatureHandle:(BOOL)arg1 ;
-(BOOL)hasHasFeatureHandle;
-(BOOL)hasSupportForIdsBasedNotifications;
-(void)setHasHasSupportForIdsBasedNotifications:(BOOL)arg1 ;
-(BOOL)hasHasSupportForIdsBasedNotifications;
-(int)transitMarketSupport;
-(void)setHasTransitMarketSupport:(BOOL)arg1 ;
-(BOOL)hasTransitMarketSupport;
-(id)transitMarketSupportAsString:(int)arg1 ;
-(int)StringAsTransitMarketSupport:(id)arg1 ;
@end

