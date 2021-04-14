/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariContactAutoFillDidShowSetsEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _isShowingMeCardSets;
	BOOL _isShowingPreviouslyCustomizedSet;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsShowingMeCardSets; 
@property (assign,nonatomic) BOOL isShowingMeCardSets;                              //@synthesize isShowingMeCardSets=_isShowingMeCardSets - In the implementation block
@property (assign,nonatomic) BOOL hasIsShowingPreviouslyCustomizedSet; 
@property (assign,nonatomic) BOOL isShowingPreviouslyCustomizedSet;                 //@synthesize isShowingPreviouslyCustomizedSet=_isShowingPreviouslyCustomizedSet - In the implementation block
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
-(void)setIsShowingMeCardSets:(BOOL)arg1 ;
-(void)setHasIsShowingMeCardSets:(BOOL)arg1 ;
-(BOOL)hasIsShowingMeCardSets;
-(BOOL)isShowingMeCardSets;
-(void)setIsShowingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)setHasIsShowingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(BOOL)hasIsShowingPreviouslyCustomizedSet;
-(BOOL)isShowingPreviouslyCustomizedSet;
@end

