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

@class PBDataReader, NSString;

@interface GEOLocalizedPublisherAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _displayName;
	NSString* _language;
	NSString* _subtitle;
	NSString* _themeColorDarkMode;
	NSString* _themeColorLightMode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _iconIdentifier;
	unsigned _logoCenteredColorizedIdentifier;
	unsigned _logoCenteredIdentifier;
	unsigned _logoIdentifier;
	struct {
		unsigned has_iconIdentifier : 1;
		unsigned has_logoCenteredColorizedIdentifier : 1;
		unsigned has_logoCenteredIdentifier : 1;
		unsigned has_logoIdentifier : 1;
		unsigned read_displayName : 1;
		unsigned read_language : 1;
		unsigned read_subtitle : 1;
		unsigned read_themeColorDarkMode : 1;
		unsigned read_themeColorLightMode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle; 
@property (assign,nonatomic) BOOL hasIconIdentifier; 
@property (assign,nonatomic) unsigned iconIdentifier; 
@property (assign,nonatomic) BOOL hasLogoIdentifier; 
@property (assign,nonatomic) unsigned logoIdentifier; 
@property (assign,nonatomic) BOOL hasLogoCenteredIdentifier; 
@property (assign,nonatomic) unsigned logoCenteredIdentifier; 
@property (nonatomic,readonly) BOOL hasThemeColorLightMode; 
@property (nonatomic,retain) NSString * themeColorLightMode; 
@property (nonatomic,readonly) BOOL hasThemeColorDarkMode; 
@property (nonatomic,retain) NSString * themeColorDarkMode; 
@property (assign,nonatomic) BOOL hasLogoCenteredColorizedIdentifier; 
@property (assign,nonatomic) unsigned logoCenteredColorizedIdentifier; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
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
-(NSString *)themeColorLightMode;
-(NSString *)themeColorDarkMode;
-(void)setIconIdentifier:(unsigned)arg1 ;
-(void)setLogoIdentifier:(unsigned)arg1 ;
-(void)setLogoCenteredIdentifier:(unsigned)arg1 ;
-(void)setThemeColorLightMode:(NSString *)arg1 ;
-(void)setThemeColorDarkMode:(NSString *)arg1 ;
-(void)setLogoCenteredColorizedIdentifier:(unsigned)arg1 ;
-(BOOL)hasSubtitle;
-(unsigned)iconIdentifier;
-(void)setHasIconIdentifier:(BOOL)arg1 ;
-(BOOL)hasIconIdentifier;
-(unsigned)logoIdentifier;
-(void)setHasLogoIdentifier:(BOOL)arg1 ;
-(BOOL)hasLogoIdentifier;
-(unsigned)logoCenteredIdentifier;
-(void)setHasLogoCenteredIdentifier:(BOOL)arg1 ;
-(BOOL)hasLogoCenteredIdentifier;
-(BOOL)hasThemeColorLightMode;
-(BOOL)hasThemeColorDarkMode;
-(unsigned)logoCenteredColorizedIdentifier;
-(void)setHasLogoCenteredColorizedIdentifier:(BOOL)arg1 ;
-(BOOL)hasLogoCenteredColorizedIdentifier;
@end

