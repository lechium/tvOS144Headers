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

@class CKDPThrottlingConfigCriteria, NSString, CKDPThrottlingConfigRateLimit;

@interface CKDPThrottlingConfig : PBCodable <NSCopying> {

	CKDPThrottlingConfigCriteria* _criteria;
	NSString* _label;
	CKDPThrottlingConfigRateLimit* _rateLimit;
	int _ttlSec;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasCriteria; 
@property (nonatomic,retain) CKDPThrottlingConfigCriteria * criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) BOOL hasRateLimit; 
@property (nonatomic,retain) CKDPThrottlingConfigRateLimit * rateLimit;              //@synthesize rateLimit=_rateLimit - In the implementation block
@property (assign,nonatomic) BOOL hasTtlSec; 
@property (assign,nonatomic) int ttlSec;                                             //@synthesize ttlSec=_ttlSec - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(CKDPThrottlingConfigCriteria *)criteria;
-(void)setCriteria:(CKDPThrottlingConfigCriteria *)arg1 ;
-(CKDPThrottlingConfigRateLimit *)rateLimit;
-(void)setRateLimit:(CKDPThrottlingConfigRateLimit *)arg1 ;
-(BOOL)hasCriteria;
-(BOOL)hasRateLimit;
-(void)setTtlSec:(int)arg1 ;
-(void)setHasTtlSec:(BOOL)arg1 ;
-(BOOL)hasTtlSec;
-(int)ttlSec;
@end

