/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VCPProtoMovieStabilizationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _analysisConfidence;
	NSData* _recipeBlob;
	BOOL _gyroStabilization;

}

@property (assign,nonatomic) float analysisConfidence;              //@synthesize analysisConfidence=_analysisConfidence - In the implementation block
@property (assign,nonatomic) BOOL gyroStabilization;                //@synthesize gyroStabilization=_gyroStabilization - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeBlob; 
@property (nonatomic,retain) NSData * recipeBlob;                   //@synthesize recipeBlob=_recipeBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)analysisConfidence;
-(void)setAnalysisConfidence:(float)arg1 ;
-(BOOL)gyroStabilization;
-(void)setGyroStabilization:(BOOL)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setRecipeBlob:(NSData *)arg1 ;
-(BOOL)hasRecipeBlob;
-(NSData *)recipeBlob;
@end

