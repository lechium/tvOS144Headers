/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListRange, NSMutableArray;

@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying> {

	CKDPListRange* _range;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) BOOL hasRange; 
@property (nonatomic,retain) CKDPListRange * range;                //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)values;
-(id)dictionaryRepresentation;
-(CKDPListRange *)range;
-(void)addValue:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(void)setRange:(CKDPListRange *)arg1 ;
-(BOOL)hasRange;
@end

