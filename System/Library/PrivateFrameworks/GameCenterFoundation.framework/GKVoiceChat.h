/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKVoiceChatSessionDelegate.h>

@class NSArray, GKSession, GKVoiceChatSession, NSString;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate> {

	NSArray* _players;
	/*^block*/id _playerStateUpdateHandler;
	/*^block*/id _playerVoiceChatStateDidChangeHandler;
	GKSession* _gkSession;
	GKVoiceChatSession* _gkVoiceChatSession;

}

@property (nonatomic,retain) GKSession * gkSession;                                //@synthesize gkSession=_gkSession - In the implementation block
@property (nonatomic,retain) GKVoiceChatSession * gkVoiceChatSession;              //@synthesize gkVoiceChatSession=_gkVoiceChatSession - In the implementation block
@property (nonatomic,copy) id playerStateUpdateHandler;                            //@synthesize playerStateUpdateHandler=_playerStateUpdateHandler - In the implementation block
@property (nonatomic,retain) NSArray * players;                                    //@synthesize players=_players - In the implementation block
@property (nonatomic,copy) id playerVoiceChatStateDidChangeHandler;                //@synthesize playerVoiceChatStateDidChangeHandler=_playerVoiceChatStateDidChangeHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) float volume; 
+(BOOL)isVoIPAllowed;
-(NSString *)name;
-(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(NSArray *)players;
-(void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3 ;
-(void)setPlayers:(NSArray *)arg1 ;
-(id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3 ;
-(id)playerIDs;
-(void)setPlayer:(id)arg1 muted:(BOOL)arg2 ;
-(void)setMute:(BOOL)arg1 forPlayer:(id)arg2 ;
-(id)playerStateUpdateHandler;
-(void)setPlayerStateUpdateHandler:(id)arg1 ;
-(id)playerVoiceChatStateDidChangeHandler;
-(void)setPlayerVoiceChatStateDidChangeHandler:(id)arg1 ;
-(GKSession *)gkSession;
-(void)setGkSession:(GKSession *)arg1 ;
-(GKVoiceChatSession *)gkVoiceChatSession;
-(void)setGkVoiceChatSession:(GKVoiceChatSession *)arg1 ;
@end

