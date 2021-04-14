/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {

	double _date;
	double _interval;
	NSString* _notification;
	int _trigger;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasInterval; 
@property (assign,nonatomic) double interval;                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) NSString * notification;              //@synthesize notification=_notification - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)date;
-(id)dictionaryRepresentation;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)trigger;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDate;
-(NSString *)notification;
-(void)setNotification:(NSString *)arg1 ;
-(void)setTrigger:(int)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(BOOL)hasNotification;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(BOOL)hasInterval;
-(void)setHasInterval:(BOOL)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
@end

