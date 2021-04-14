/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	float _featureValueThresholdHigh;
	float _featureValueThresholdLow;
	float _featureWeightHigh;
	float _featureWeightLow;
	struct {
		unsigned has_featureValueThresholdHigh : 1;
		unsigned has_featureValueThresholdLow : 1;
		unsigned has_featureWeightHigh : 1;
		unsigned has_featureWeightLow : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeatureValueThresholdLow; 
@property (assign,nonatomic) float featureValueThresholdLow; 
@property (assign,nonatomic) BOOL hasFeatureWeightLow; 
@property (assign,nonatomic) float featureWeightLow; 
@property (assign,nonatomic) BOOL hasFeatureValueThresholdHigh; 
@property (assign,nonatomic) float featureValueThresholdHigh; 
@property (assign,nonatomic) BOOL hasFeatureWeightHigh; 
@property (assign,nonatomic) float featureWeightHigh; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFeatureValueThresholdLow:(float)arg1 ;
-(void)setFeatureWeightLow:(float)arg1 ;
-(void)setFeatureValueThresholdHigh:(float)arg1 ;
-(void)setFeatureWeightHigh:(float)arg1 ;
-(float)featureValueThresholdLow;
-(void)setHasFeatureValueThresholdLow:(BOOL)arg1 ;
-(BOOL)hasFeatureValueThresholdLow;
-(float)featureWeightLow;
-(void)setHasFeatureWeightLow:(BOOL)arg1 ;
-(BOOL)hasFeatureWeightLow;
-(float)featureValueThresholdHigh;
-(void)setHasFeatureValueThresholdHigh:(BOOL)arg1 ;
-(BOOL)hasFeatureValueThresholdHigh;
-(float)featureWeightHigh;
-(void)setHasFeatureWeightHigh:(BOOL)arg1 ;
-(BOOL)hasFeatureWeightHigh;
@end

