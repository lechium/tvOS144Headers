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

@interface GEOComponentAction : PBCodable <NSCopying> {

	SCD_Struct_GE85* _actions;
	int _component;
	BOOL _handleLocally;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasComponent; 
@property (assign,nonatomic) int component; 
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,readonly) int* actions; 
@property (assign,nonatomic) BOOL hasHandleLocally; 
@property (assign,nonatomic) BOOL handleLocally; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int*)actions;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setComponent:(int)arg1 ;
-(void)addActions:(int)arg1 ;
-(void)setHandleLocally:(BOOL)arg1 ;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(int)actionsAtIndex:(unsigned long long)arg1 ;
-(int)component;
-(void)setHasComponent:(BOOL)arg1 ;
-(BOOL)hasComponent;
-(id)componentAsString:(int)arg1 ;
-(int)StringAsComponent:(id)arg1 ;
-(void)setActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)actionsAsString:(int)arg1 ;
-(int)StringAsActions:(id)arg1 ;
-(BOOL)handleLocally;
-(void)setHasHandleLocally:(BOOL)arg1 ;
-(BOOL)hasHandleLocally;
@end

