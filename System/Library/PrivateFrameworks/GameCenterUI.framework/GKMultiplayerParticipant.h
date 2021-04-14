/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying> {

	long long _type;
	long long _status;
	GKPlayer* _player;
	long long _number;

}

@property (assign,nonatomic) long long type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) GKPlayer * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long number;               //@synthesize number=_number - In the implementation block
+(id)stringFromGKMultiplayerParticipantStatus:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
@end

