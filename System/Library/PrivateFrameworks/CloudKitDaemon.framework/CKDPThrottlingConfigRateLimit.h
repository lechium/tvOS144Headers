/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying> {

	int _allowedRequestCount;
	int _intervalLengthSec;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasIntervalLengthSec; 
@property (assign,nonatomic) int intervalLengthSec;                    //@synthesize intervalLengthSec=_intervalLengthSec - In the implementation block
@property (assign,nonatomic) BOOL hasAllowedRequestCount; 
@property (assign,nonatomic) int allowedRequestCount;                  //@synthesize allowedRequestCount=_allowedRequestCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)allowedRequestCount;
-(void)setAllowedRequestCount:(int)arg1 ;
-(void)setIntervalLengthSec:(int)arg1 ;
-(void)setHasIntervalLengthSec:(BOOL)arg1 ;
-(BOOL)hasIntervalLengthSec;
-(void)setHasAllowedRequestCount:(BOOL)arg1 ;
-(BOOL)hasAllowedRequestCount;
-(int)intervalLengthSec;
@end

