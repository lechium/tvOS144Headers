/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _userActionEventKey;
	NSString* _userActionEventValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _userActionEventAction;
	int _userActionEventTarget;
	struct {
		unsigned has_userActionEventAction : 1;
		unsigned has_userActionEventTarget : 1;
		unsigned read_userActionEventKey : 1;
		unsigned read_userActionEventValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUserActionEventKey; 
@property (nonatomic,retain) NSString * userActionEventKey; 
@property (nonatomic,readonly) BOOL hasUserActionEventValue; 
@property (nonatomic,retain) NSString * userActionEventValue; 
@property (assign,nonatomic) BOOL hasUserActionEventTarget; 
@property (assign,nonatomic) int userActionEventTarget; 
@property (assign,nonatomic) BOOL hasUserActionEventAction; 
@property (assign,nonatomic) int userActionEventAction; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setUserActionEventAction:(int)arg1 ;
-(void)setUserActionEventTarget:(int)arg1 ;
-(void)setUserActionEventValue:(NSString *)arg1 ;
-(NSString *)userActionEventKey;
-(NSString *)userActionEventValue;
-(void)setUserActionEventKey:(NSString *)arg1 ;
-(BOOL)hasUserActionEventKey;
-(BOOL)hasUserActionEventValue;
-(int)userActionEventTarget;
-(void)setHasUserActionEventTarget:(BOOL)arg1 ;
-(BOOL)hasUserActionEventTarget;
-(id)userActionEventTargetAsString:(int)arg1 ;
-(int)StringAsUserActionEventTarget:(id)arg1 ;
-(int)userActionEventAction;
-(void)setHasUserActionEventAction:(BOOL)arg1 ;
-(BOOL)hasUserActionEventAction;
-(id)userActionEventActionAsString:(int)arg1 ;
-(int)StringAsUserActionEventAction:(id)arg1 ;
@end

