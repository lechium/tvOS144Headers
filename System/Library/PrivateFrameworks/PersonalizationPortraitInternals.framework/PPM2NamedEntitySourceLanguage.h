/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2NamedEntitySourceLanguage : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _algorithm;
	NSString* _detectedLanguage;
	int _donationSource;
	unsigned _languageCount;
	NSString* _systemLanguage;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) BOOL hasDetectedLanguage; 
@property (nonatomic,retain) NSString * detectedLanguage;              //@synthesize detectedLanguage=_detectedLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemLanguage; 
@property (nonatomic,retain) NSString * systemLanguage;                //@synthesize systemLanguage=_systemLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasLanguageCount; 
@property (assign,nonatomic) unsigned languageCount;                   //@synthesize languageCount=_languageCount - In the implementation block
@property (assign,nonatomic) BOOL hasDonationSource; 
@property (assign,nonatomic) int donationSource;                       //@synthesize donationSource=_donationSource - In the implementation block
@property (assign,nonatomic) BOOL hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                            //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)algorithm;
-(void)setAlgorithm:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)systemLanguage;
-(BOOL)hasAlgorithm;
-(void)setSystemLanguage:(NSString *)arg1 ;
-(BOOL)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(int)donationSource;
-(void)setDonationSource:(int)arg1 ;
-(void)setHasDonationSource:(BOOL)arg1 ;
-(BOOL)hasDonationSource;
-(id)donationSourceAsString:(int)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
-(void)setHasAlgorithm:(BOOL)arg1 ;
-(id)algorithmAsString:(int)arg1 ;
-(int)StringAsAlgorithm:(id)arg1 ;
-(BOOL)hasDetectedLanguage;
-(BOOL)hasSystemLanguage;
-(void)setLanguageCount:(unsigned)arg1 ;
-(void)setHasLanguageCount:(BOOL)arg1 ;
-(BOOL)hasLanguageCount;
-(NSString *)detectedLanguage;
-(void)setDetectedLanguage:(NSString *)arg1 ;
-(unsigned)languageCount;
@end

