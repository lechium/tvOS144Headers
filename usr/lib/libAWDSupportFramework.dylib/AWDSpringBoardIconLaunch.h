/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSpringBoardIconLaunch : PBCodable <NSCopying> {

	unsigned long long _iconPageInFolder;
	unsigned long long _timestamp;
	unsigned long long _totalIconPagesInFolder;
	BOOL _iconIsFolder;
	BOOL _iconIsFromDock;
	BOOL _iconIsFromFolder;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIconIsFolder; 
@property (assign,nonatomic) BOOL iconIsFolder;                                      //@synthesize iconIsFolder=_iconIsFolder - In the implementation block
@property (assign,nonatomic) BOOL hasIconIsFromFolder; 
@property (assign,nonatomic) BOOL iconIsFromFolder;                                  //@synthesize iconIsFromFolder=_iconIsFromFolder - In the implementation block
@property (assign,nonatomic) BOOL hasIconIsFromDock; 
@property (assign,nonatomic) BOOL iconIsFromDock;                                    //@synthesize iconIsFromDock=_iconIsFromDock - In the implementation block
@property (assign,nonatomic) BOOL hasIconPageInFolder; 
@property (assign,nonatomic) unsigned long long iconPageInFolder;                    //@synthesize iconPageInFolder=_iconPageInFolder - In the implementation block
@property (assign,nonatomic) BOOL hasTotalIconPagesInFolder; 
@property (assign,nonatomic) unsigned long long totalIconPagesInFolder;              //@synthesize totalIconPagesInFolder=_totalIconPagesInFolder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setIconIsFolder:(BOOL)arg1 ;
-(void)setHasIconIsFolder:(BOOL)arg1 ;
-(BOOL)hasIconIsFolder;
-(void)setIconIsFromFolder:(BOOL)arg1 ;
-(void)setHasIconIsFromFolder:(BOOL)arg1 ;
-(BOOL)hasIconIsFromFolder;
-(void)setIconIsFromDock:(BOOL)arg1 ;
-(void)setHasIconIsFromDock:(BOOL)arg1 ;
-(BOOL)hasIconIsFromDock;
-(void)setIconPageInFolder:(unsigned long long)arg1 ;
-(void)setHasIconPageInFolder:(BOOL)arg1 ;
-(BOOL)hasIconPageInFolder;
-(void)setTotalIconPagesInFolder:(unsigned long long)arg1 ;
-(void)setHasTotalIconPagesInFolder:(BOOL)arg1 ;
-(BOOL)hasTotalIconPagesInFolder;
-(BOOL)iconIsFolder;
-(BOOL)iconIsFromFolder;
-(BOOL)iconIsFromDock;
-(unsigned long long)iconPageInFolder;
-(unsigned long long)totalIconPagesInFolder;
@end

