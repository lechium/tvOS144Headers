/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRFatalError : PBCodable {

	NSString* _errorDomain;
	int _errorCode;
	SISchemaSiriResponseContext* _siriResponseContext;
	SCD_Struct_SI1 _has;
	BOOL _hasErrorDomain;
	BOOL _hasSiriResponseContext;

}

@property (nonatomic,copy) NSString * errorDomain;                                           //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorDomain;                                            //@synthesize hasErrorDomain=_hasErrorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                                  //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) BOOL hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)errorDomain;
-(int)errorCode;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasErrorDomain:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(BOOL)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(BOOL)arg1 ;
@end

