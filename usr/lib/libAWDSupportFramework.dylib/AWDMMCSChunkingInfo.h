/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying> {

	long long _byteCount;
	long long _chunkCount;
	long long _duration;
	long long _startTime;
	NSMutableArray* _chunkingErrors;
	int _errorCode;
	NSString* _errorDomain;
	BOOL _cancelled;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasChunkCount; 
@property (assign,nonatomic) long long chunkCount;                         //@synthesize chunkCount=_chunkCount - In the implementation block
@property (assign,nonatomic) BOOL hasByteCount; 
@property (assign,nonatomic) long long byteCount;                          //@synthesize byteCount=_byteCount - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                       //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                               //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSMutableArray * chunkingErrors;              //@synthesize chunkingErrors=_chunkingErrors - In the implementation block
+(Class)chunkingErrorType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(long long)duration;
-(BOOL)cancelled;
-(void)setDuration:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)errorDomain;
-(int)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setChunkingErrors:(NSMutableArray *)arg1 ;
-(void)addChunkingError:(id)arg1 ;
-(unsigned long long)chunkingErrorsCount;
-(void)clearChunkingErrors;
-(id)chunkingErrorAtIndex:(unsigned long long)arg1 ;
-(void)setChunkCount:(long long)arg1 ;
-(void)setHasChunkCount:(BOOL)arg1 ;
-(BOOL)hasChunkCount;
-(void)setByteCount:(long long)arg1 ;
-(void)setHasByteCount:(BOOL)arg1 ;
-(BOOL)hasByteCount;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(long long)chunkCount;
-(long long)byteCount;
-(NSMutableArray *)chunkingErrors;
@end

