/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKTurnBasedEventListener
@optional
-(void)player:(id)arg1 didRequestMatchWithPlayers:(id)arg2;
-(void)player:(id)arg1 didRequestMatchWithOtherPlayers:(id)arg2;
-(void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(BOOL)arg3;
-(void)player:(id)arg1 matchEnded:(id)arg2;
-(void)player:(id)arg1 receivedExchangeRequest:(id)arg2 forMatch:(id)arg3;
-(void)player:(id)arg1 receivedExchangeCancellation:(id)arg2 forMatch:(id)arg3;
-(void)player:(id)arg1 receivedExchangeReplies:(id)arg2 forCompletedExchange:(id)arg3 forMatch:(id)arg4;
-(void)player:(id)arg1 wantsToQuitMatch:(id)arg2;

@end
