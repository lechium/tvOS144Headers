/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDSAgent/PDSAgent-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying> {

	PDSProtoGSTokenAuth* _gsAuthToken;
	int _userauthOneof;
	SCD_Struct_PD1 _has;

}

@property (nonatomic,readonly) BOOL hasGsAuthToken; 
@property (nonatomic,retain) PDSProtoGSTokenAuth * gsAuthToken;              //@synthesize gsAuthToken=_gsAuthToken - In the implementation block
@property (assign,nonatomic) BOOL hasUserauthOneof; 
@property (assign,nonatomic) int userauthOneof;                              //@synthesize userauthOneof=_userauthOneof - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearOneofValuesForUserauthOneof;
-(void)setGsAuthToken:(PDSProtoGSTokenAuth *)arg1 ;
-(BOOL)hasGsAuthToken;
-(int)userauthOneof;
-(void)setUserauthOneof:(int)arg1 ;
-(void)setHasUserauthOneof:(BOOL)arg1 ;
-(BOOL)hasUserauthOneof;
-(id)userauthOneofAsString:(int)arg1 ;
-(int)StringAsUserauthOneof:(id)arg1 ;
-(PDSProtoGSTokenAuth *)gsAuthToken;
@end

