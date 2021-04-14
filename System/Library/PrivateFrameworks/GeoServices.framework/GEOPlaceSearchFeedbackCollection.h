/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	NSMutableArray* _actionCaptures;
	unsigned long long _businessID;
	long long _placeID;
	int _localSearchProviderID;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_businessID : 1;
		unsigned has_placeID : 1;
		unsigned has_localSearchProviderID : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID; 
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID; 
@property (nonatomic,retain) NSMutableArray * actionCaptures; 
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
+(BOOL)isValid:(id)arg1 ;
+(Class)actionCaptureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setPlaceID:(long long)arg1 ;
-(void)addActionCapture:(id)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(unsigned long long)actionCapturesCount;
-(void)clearActionCaptures;
-(id)actionCaptureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)businessID;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(long long)placeID;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(BOOL)hasPlaceID;
-(NSMutableArray *)actionCaptures;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
@end

