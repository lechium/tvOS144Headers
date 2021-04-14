/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCFNetworkStreamTaskTiming : PBCodable <NSCopying> {

	unsigned long long _connectEnd;
	unsigned long long _connectStart;
	unsigned long long _connected;
	unsigned long long _connectionInit;
	unsigned long long _domainLookupEnd;
	unsigned long long _domainLookupStart;
	unsigned long long _firstRead;
	unsigned long long _firstWrite;
	long long _isCellular;
	unsigned long long _resumeStart;
	unsigned long long _secureConnectionStart;
	unsigned long long _taskCreationStart;
	unsigned long long _timestamp;
	NSString* _procname;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTaskCreationStart; 
@property (assign,nonatomic) unsigned long long taskCreationStart;                  //@synthesize taskCreationStart=_taskCreationStart - In the implementation block
@property (assign,nonatomic) BOOL hasResumeStart; 
@property (assign,nonatomic) unsigned long long resumeStart;                        //@synthesize resumeStart=_resumeStart - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionInit; 
@property (assign,nonatomic) unsigned long long connectionInit;                     //@synthesize connectionInit=_connectionInit - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupStart; 
@property (assign,nonatomic) unsigned long long domainLookupStart;                  //@synthesize domainLookupStart=_domainLookupStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupEnd; 
@property (assign,nonatomic) unsigned long long domainLookupEnd;                    //@synthesize domainLookupEnd=_domainLookupEnd - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStart; 
@property (assign,nonatomic) unsigned long long connectStart;                       //@synthesize connectStart=_connectStart - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionStart; 
@property (assign,nonatomic) unsigned long long secureConnectionStart;              //@synthesize secureConnectionStart=_secureConnectionStart - In the implementation block
@property (assign,nonatomic) BOOL hasConnectEnd; 
@property (assign,nonatomic) unsigned long long connectEnd;                         //@synthesize connectEnd=_connectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasConnected; 
@property (assign,nonatomic) unsigned long long connected;                          //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL hasFirstWrite; 
@property (assign,nonatomic) unsigned long long firstWrite;                         //@synthesize firstWrite=_firstWrite - In the implementation block
@property (assign,nonatomic) BOOL hasFirstRead; 
@property (assign,nonatomic) unsigned long long firstRead;                          //@synthesize firstRead=_firstRead - In the implementation block
@property (assign,nonatomic) BOOL hasIsCellular; 
@property (assign,nonatomic) long long isCellular;                                  //@synthesize isCellular=_isCellular - In the implementation block
@property (nonatomic,readonly) BOOL hasProcname; 
@property (nonatomic,retain) NSString * procname;                                   //@synthesize procname=_procname - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)isCellular;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)connected;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setProcname:(NSString *)arg1 ;
-(void)setTaskCreationStart:(unsigned long long)arg1 ;
-(void)setHasTaskCreationStart:(BOOL)arg1 ;
-(BOOL)hasTaskCreationStart;
-(void)setResumeStart:(unsigned long long)arg1 ;
-(void)setHasResumeStart:(BOOL)arg1 ;
-(BOOL)hasResumeStart;
-(void)setConnectionInit:(unsigned long long)arg1 ;
-(void)setHasConnectionInit:(BOOL)arg1 ;
-(BOOL)hasConnectionInit;
-(void)setDomainLookupStart:(unsigned long long)arg1 ;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStart;
-(void)setDomainLookupEnd:(unsigned long long)arg1 ;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(BOOL)hasDomainLookupEnd;
-(void)setConnectStart:(unsigned long long)arg1 ;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(BOOL)hasConnectStart;
-(void)setSecureConnectionStart:(unsigned long long)arg1 ;
-(void)setHasSecureConnectionStart:(BOOL)arg1 ;
-(BOOL)hasSecureConnectionStart;
-(void)setConnectEnd:(unsigned long long)arg1 ;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(BOOL)hasConnectEnd;
-(void)setConnected:(unsigned long long)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)hasConnected;
-(void)setFirstWrite:(unsigned long long)arg1 ;
-(void)setHasFirstWrite:(BOOL)arg1 ;
-(BOOL)hasFirstWrite;
-(void)setFirstRead:(unsigned long long)arg1 ;
-(void)setHasFirstRead:(BOOL)arg1 ;
-(BOOL)hasFirstRead;
-(void)setIsCellular:(long long)arg1 ;
-(void)setHasIsCellular:(BOOL)arg1 ;
-(BOOL)hasIsCellular;
-(BOOL)hasProcname;
-(unsigned long long)taskCreationStart;
-(unsigned long long)resumeStart;
-(unsigned long long)connectionInit;
-(unsigned long long)domainLookupStart;
-(unsigned long long)domainLookupEnd;
-(unsigned long long)connectStart;
-(unsigned long long)secureConnectionStart;
-(unsigned long long)connectEnd;
-(unsigned long long)firstWrite;
-(unsigned long long)firstRead;
-(NSString *)procname;
@end

