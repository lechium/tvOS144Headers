/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NGMPBP256Key, NSData;

@interface NGMPBDevicePreKey : PBCodable <NSCopying> {

	double _timestamp;
	NGMPBP256Key* _dhKey;
	NSData* _prekeySignature;

}

@property (nonatomic,readonly) BOOL hasDhKey; 
@property (nonatomic,retain) NGMPBP256Key * dhKey;                  //@synthesize dhKey=_dhKey - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * prekeySignature;              //@synthesize prekeySignature=_prekeySignature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NGMPBP256Key *)dhKey;
-(NSData *)prekeySignature;
-(void)setDhKey:(NGMPBP256Key *)arg1 ;
-(void)setPrekeySignature:(NSData *)arg1 ;
-(BOOL)hasDhKey;
@end

