/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface WFPBContentItem : PBCodable <NSCopying> {

	int _encodingType;
	NSData* _item;

}

@property (nonatomic,retain) NSData * item;                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) int encodingType;              //@synthesize encodingType=_encodingType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setItem:(NSData *)arg1 ;
-(NSData *)item;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)encodingType;
-(void)setEncodingType:(int)arg1 ;
-(id)encodingTypeAsString:(int)arg1 ;
-(int)StringAsEncodingType:(id)arg1 ;
@end

