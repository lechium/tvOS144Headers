/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKMatchmakerServiceProtocol <GKExtensionProtocol>
@optional
-(void)applicationWillEnterForeground;
-(void)setConnectingStateForPlayer:(id)arg1;
-(void)setMatchRequestInternal:(id)arg1;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
-(void)setHosted:(BOOL)arg1;
-(void)setMatchmakingMode:(long long)arg1;
-(void)setAcceptedInviteInternal:(id)arg1;
-(void)setExistingPlayers:(id)arg1;
-(void)setDefaultInvitationMessage:(id)arg1;
-(void)setAutomatchPlayerCount:(long long)arg1;
-(void)setPlayer:(id)arg1 responded:(long long)arg2;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2;
-(void)setPlayer:(id)arg1 sentData:(id)arg2;
-(void)setInvitesFailedWithError:(id)arg1;
-(void)setAutomatchFailedWithError:(id)arg1;
-(void)inviterCancelled;
-(void)setFailedWithError:(id)arg1;

@end

