/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation;

@interface CLPAppLocation : PBCodable <NSCopying> {

	double _age;
	NSString* _appBundleId;
	int _appState;
	CLPLocation* _location;
	int _loiType;
	int _routineMode;
	int _serverHash;
	SCD_Struct_CL2 _has;

}

@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) int appState;                        //@synthesize appState=_appState - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                          //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CLPLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                      //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasRoutineMode; 
@property (assign,nonatomic) int routineMode;                     //@synthesize routineMode=_routineMode - In the implementation block
@property (assign,nonatomic) BOOL hasLoiType; 
@property (assign,nonatomic) int loiType;                         //@synthesize loiType=_loiType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)appState;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CLPLocation *)location;
-(double)age;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setAge:(double)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(int)routineMode;
-(void)setRoutineMode:(int)arg1 ;
-(void)setHasRoutineMode:(BOOL)arg1 ;
-(BOOL)hasRoutineMode;
-(int)loiType;
-(void)setLoiType:(int)arg1 ;
-(void)setHasLoiType:(BOOL)arg1 ;
-(BOOL)hasLoiType;
-(NSString *)appBundleId;
-(void)setAppState:(int)arg1 ;
-(int)serverHash;
@end

