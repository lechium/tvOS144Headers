/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriCore/SiriCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface SiriCoreCorrectionPronunciation : PBCodable <NSCopying> {

	NSString* _apgId;
	NSData* _asrPronunciationData;
	NSString* _language;
	NSString* _orthography;
	int _tokenOffset;
	NSMutableArray* _ttsPronunciations;
	NSString* _ttsVersion;
	SCD_Struct_Si4 _has;

}

@property (nonatomic,readonly) BOOL hasOrthography; 
@property (nonatomic,retain) NSString * orthography;                          //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                             //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasApgId; 
@property (nonatomic,retain) NSString * apgId;                                //@synthesize apgId=_apgId - In the implementation block
@property (nonatomic,readonly) BOOL hasTtsVersion; 
@property (nonatomic,retain) NSString * ttsVersion;                           //@synthesize ttsVersion=_ttsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasTokenOffset; 
@property (assign,nonatomic) int tokenOffset;                                 //@synthesize tokenOffset=_tokenOffset - In the implementation block
@property (nonatomic,retain) NSMutableArray * ttsPronunciations;              //@synthesize ttsPronunciations=_ttsPronunciations - In the implementation block
@property (nonatomic,readonly) BOOL hasAsrPronunciationData; 
@property (nonatomic,retain) NSData * asrPronunciationData;                   //@synthesize asrPronunciationData=_asrPronunciationData - In the implementation block
+(Class)ttsPronunciationsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)orthography;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasLanguage;
-(NSString *)apgId;
-(void)setApgId:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(int)tokenOffset;
-(void)setTokenOffset:(int)arg1 ;
-(NSMutableArray *)ttsPronunciations;
-(void)setTtsPronunciations:(NSMutableArray *)arg1 ;
-(NSString *)ttsVersion;
-(void)setTtsVersion:(NSString *)arg1 ;
-(void)addTtsPronunciations:(id)arg1 ;
-(unsigned long long)ttsPronunciationsCount;
-(void)clearTtsPronunciations;
-(id)ttsPronunciationsAtIndex:(unsigned long long)arg1 ;
-(void)setAsrPronunciationData:(NSData *)arg1 ;
-(BOOL)hasOrthography;
-(BOOL)hasApgId;
-(BOOL)hasTtsVersion;
-(void)setHasTokenOffset:(BOOL)arg1 ;
-(BOOL)hasTokenOffset;
-(BOOL)hasAsrPronunciationData;
-(NSData *)asrPronunciationData;
@end

