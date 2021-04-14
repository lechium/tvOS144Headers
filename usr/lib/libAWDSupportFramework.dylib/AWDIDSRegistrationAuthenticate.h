/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationAuthenticate : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _genericError;
	NSString* _guid;
	unsigned _isDSUser;
	unsigned _isPhoneUser;
	int _pOSIXError;
	unsigned _registrationError;
	unsigned _resultCode;
	unsigned _success;
	int _uRLError;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) unsigned success;                          //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                          //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasURLError; 
@property (assign,nonatomic) int uRLError;                              //@synthesize uRLError=_uRLError - In the implementation block
@property (assign,nonatomic) BOOL hasPOSIXError; 
@property (assign,nonatomic) int pOSIXError;                            //@synthesize pOSIXError=_pOSIXError - In the implementation block
@property (assign,nonatomic) BOOL hasIsPhoneUser; 
@property (assign,nonatomic) unsigned isPhoneUser;                      //@synthesize isPhoneUser=_isPhoneUser - In the implementation block
@property (assign,nonatomic) BOOL hasIsDSUser; 
@property (assign,nonatomic) unsigned isDSUser;                         //@synthesize isDSUser=_isDSUser - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)success;
-(void)setSuccess:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)connectionType;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setRegistrationError:(unsigned)arg1 ;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(int)genericError;
-(unsigned)registrationError;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(unsigned)resultCode;
-(void)setURLError:(int)arg1 ;
-(void)setHasURLError:(BOOL)arg1 ;
-(BOOL)hasURLError;
-(void)setPOSIXError:(int)arg1 ;
-(void)setHasPOSIXError:(BOOL)arg1 ;
-(BOOL)hasPOSIXError;
-(void)setIsPhoneUser:(unsigned)arg1 ;
-(void)setHasIsPhoneUser:(BOOL)arg1 ;
-(BOOL)hasIsPhoneUser;
-(void)setIsDSUser:(unsigned)arg1 ;
-(void)setHasIsDSUser:(BOOL)arg1 ;
-(BOOL)hasIsDSUser;
-(int)uRLError;
-(int)pOSIXError;
-(unsigned)isPhoneUser;
-(unsigned)isDSUser;
@end
