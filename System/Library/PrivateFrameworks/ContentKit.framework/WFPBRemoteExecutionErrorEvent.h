/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRemoteExecutionErrorEvent : PBCodable <NSCopying> {

	NSString* _destinationType;
	NSString* _errorCode;
	NSString* _errorDomain;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationType; 
@property (nonatomic,retain) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(NSString *)errorCode;
-(NSString *)destinationType;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasErrorDomain;
-(BOOL)hasErrorCode;
-(BOOL)hasSource;
-(BOOL)hasDestinationType;
-(BOOL)hasKey;
@end

