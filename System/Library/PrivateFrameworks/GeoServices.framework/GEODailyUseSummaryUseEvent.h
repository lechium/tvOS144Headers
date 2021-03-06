/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEODailyUseSummaryUseEvent : PBCodable <NSCopying> {

	NSString* _usageString;
	int _appType;
	unsigned _count;
	int _eventType;
	BOOL _usageBool;
	struct {
		unsigned has_appType : 1;
		unsigned has_count : 1;
		unsigned has_eventType : 1;
		unsigned has_usageBool : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType; 
@property (assign,nonatomic) BOOL hasAppType; 
@property (assign,nonatomic) int appType; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasUsageBool; 
@property (assign,nonatomic) BOOL usageBool; 
@property (nonatomic,readonly) BOOL hasUsageString; 
@property (nonatomic,retain) NSString * usageString; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(void)setAppType:(int)arg1 ;
-(BOOL)hasAppType;
-(int)appType;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)usageString;
-(void)setUsageBool:(BOOL)arg1 ;
-(void)setUsageString:(NSString *)arg1 ;
-(void)setHasAppType:(BOOL)arg1 ;
-(id)appTypeAsString:(int)arg1 ;
-(int)StringAsAppType:(id)arg1 ;
-(BOOL)usageBool;
-(void)setHasUsageBool:(BOOL)arg1 ;
-(BOOL)hasUsageBool;
-(BOOL)hasUsageString;
@end

