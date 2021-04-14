/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_displayName : 1;
		unsigned read_language : 1;
		unsigned read_logoURLs : 1;
		unsigned read_snippetLogoURLs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSMutableArray * logoURLs; 
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logoURLsType;
+(Class)snippetLogoURLsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasLanguage;
-(BOOL)hasDisplayName;
-(NSMutableArray *)logoURLs;
-(NSMutableArray *)snippetLogoURLs;
-(void)addLogoURLs:(id)arg1 ;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(unsigned long long)logoURLsCount;
-(void)clearLogoURLs;
-(id)logoURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)snippetLogoURLsCount;
-(void)clearSnippetLogoURLs;
-(id)snippetLogoURLsAtIndex:(unsigned long long)arg1 ;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(id)bestURLForLogos:(id)arg1 scale:(double)arg2 ;
@end

