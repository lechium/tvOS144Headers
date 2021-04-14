/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityStateBin : PBCodable <NSCopying> {

	unsigned long long _residentTime;
	NSString* _state;
	SCD_Struct_Wi1 _has;

}

@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasResidentTime; 
@property (assign,nonatomic) unsigned long long residentTime;              //@synthesize residentTime=_residentTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasState;
-(void)setResidentTime:(unsigned long long)arg1 ;
-(void)setHasResidentTime:(BOOL)arg1 ;
-(BOOL)hasResidentTime;
-(unsigned long long)residentTime;
@end
