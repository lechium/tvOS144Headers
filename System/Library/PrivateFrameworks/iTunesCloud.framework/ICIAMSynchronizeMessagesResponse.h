/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying> {

	NSMutableArray* _applicationMessageSyncResponses;

}

@property (nonatomic,retain) NSMutableArray * applicationMessageSyncResponses;              //@synthesize applicationMessageSyncResponses=_applicationMessageSyncResponses - In the implementation block
+(Class)applicationMessageSyncResponsesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)applicationMessageSyncResponsesCount;
-(id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1 ;
-(void)addApplicationMessageSyncResponses:(id)arg1 ;
-(void)clearApplicationMessageSyncResponses;
-(NSMutableArray *)applicationMessageSyncResponses;
-(void)setApplicationMessageSyncResponses:(NSMutableArray *)arg1 ;
@end

