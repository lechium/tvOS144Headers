/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKGameRecordInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	GKGameRecordInternal* _game;
	NSDate* _date;

}

@property (nonatomic,retain) GKPlayerInternal * player;                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameRecordInternal * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKGameRecordInternal *)game;
-(void)setGame:(GKGameRecordInternal *)arg1 ;
@end

