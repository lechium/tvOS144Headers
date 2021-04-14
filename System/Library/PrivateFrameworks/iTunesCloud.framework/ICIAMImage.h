/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMImage : PBCodable <NSCopying> {

	unsigned _height;
	NSString* _identifier;
	NSString* _uRL;
	unsigned _width;
	SCD_Struct_IC4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                     //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;                     //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                    //@synthesize height=_height - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setURL:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(BOOL)hasURL;
-(NSString *)uRL;
@end

