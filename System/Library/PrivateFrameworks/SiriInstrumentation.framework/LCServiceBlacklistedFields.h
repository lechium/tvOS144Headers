/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface LCServiceBlacklistedFields : PBCodable {

	NSArray* _blackListedFields;

}

@property (nonatomic,copy) NSArray * blackListedFields;              //@synthesize blackListedFields=_blackListedFields - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)addBlackListedFields:(id)arg1 ;
-(NSArray *)blackListedFields;
-(void)clearBlackListedFields;
-(unsigned long long)blackListedFieldsCount;
-(id)blackListedFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setBlackListedFields:(NSArray *)arg1 ;
@end

