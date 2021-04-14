/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying> {

	NSMutableArray* _idsToArchives;

}

@property (nonatomic,retain) NSMutableArray * idsToArchives;              //@synthesize idsToArchives=_idsToArchives - In the implementation block
+(id)options;
+(Class)idsToArchiveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addIdsToArchive:(id)arg1 ;
-(unsigned long long)idsToArchivesCount;
-(void)clearIdsToArchives;
-(id)idsToArchiveAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)idsToArchives;
-(void)setIdsToArchives:(NSMutableArray *)arg1 ;
@end

