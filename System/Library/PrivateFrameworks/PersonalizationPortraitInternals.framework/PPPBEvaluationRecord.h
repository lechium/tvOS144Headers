/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {

	long long _deviceId;
	NSString* _contents;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSString * contents;              //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceId; 
@property (assign,nonatomic) long long deviceId;               //@synthesize deviceId=_deviceId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)contents;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContents:(NSString *)arg1 ;
-(long long)deviceId;
-(BOOL)hasContents;
-(void)setDeviceId:(long long)arg1 ;
-(BOOL)hasDeviceId;
-(void)setHasDeviceId:(BOOL)arg1 ;
@end

