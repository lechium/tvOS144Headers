/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaVerticalLayoutCardSectionInvocationContext : PBCodable {

	NSString* _resultIdentifier;
	BOOL _hasResultIdentifier;

}

@property (nonatomic,copy) NSString * resultIdentifier;              //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasResultIdentifier;               //@synthesize hasResultIdentifier=_hasResultIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(BOOL)hasResultIdentifier;
-(void)setHasResultIdentifier:(BOOL)arg1 ;
@end
