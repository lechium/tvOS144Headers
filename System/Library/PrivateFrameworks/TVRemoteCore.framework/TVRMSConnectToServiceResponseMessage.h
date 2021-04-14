/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVRMSControlInterfaceMessage;

@interface TVRMSConnectToServiceResponseMessage : PBCodable <NSCopying> {

	TVRMSControlInterfaceMessage* _controlInterface;
	int _responseCode;
	int _sessionIdentifier;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                                             //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasControlInterface; 
@property (nonatomic,retain) TVRMSControlInterfaceMessage * controlInterface;              //@synthesize controlInterface=_controlInterface - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)responseCode;
-(void)setResponseCode:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setControlInterface:(TVRMSControlInterfaceMessage *)arg1 ;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
-(BOOL)hasControlInterface;
-(TVRMSControlInterfaceMessage *)controlInterface;
@end
