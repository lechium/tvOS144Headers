/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKDashboardMultiplayerViewController.h>

@protocol GKDashboardMultiplayerP2PViewControllerDelegate, GKDashboardNearbyBrowserDelegate;
@class GKInvite;

@interface GKDashboardMultiplayerP2PViewController : GKDashboardMultiplayerViewController {

	BOOL _hosted;
	BOOL _userCancelledMatching;
	id<GKDashboardMultiplayerP2PViewControllerDelegate> _delegate;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	long long _mode;
	GKInvite* _acceptedInvite;
	double _inviteeConnectionTimeStamp;

}

@property (assign,nonatomic) long long mode;                                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) GKInvite * acceptedInvite;                                                          //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (assign,nonatomic) double inviteeConnectionTimeStamp;                                                //@synthesize inviteeConnectionTimeStamp=_inviteeConnectionTimeStamp - In the implementation block
@property (assign) BOOL userCancelledMatching;                                                                 //@synthesize userCancelledMatching=_userCancelledMatching - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                                                      //@synthesize hosted=_hosted - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardMultiplayerP2PViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;                       //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
-(void)dealloc;
-(id<GKDashboardMultiplayerP2PViewControllerDelegate>)delegate;
-(void)setDelegate:(id<GKDashboardMultiplayerP2PViewControllerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)cancel;
-(long long)mode;
-(BOOL)isHosted;
-(void)finishWithError:(id)arg1 ;
-(void)viewDidLoad;
-(void)applicationWillEnterForeground;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(GKInvite *)acceptedInvite;
-(void)setConnectingStateForPlayer:(id)arg1 ;
-(BOOL)userCancelledMatching;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(void)setHosted:(BOOL)arg1 ;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(void)setFailedWithError:(id)arg1 ;
-(void)setUserCancelledMatching:(BOOL)arg1 ;
-(BOOL)canStartForcedAutomatch;
-(void)playNow;
-(void)invitePlayers:(id)arg1 ;
-(BOOL)isInSetupMode;
-(BOOL)havePendingPlayers;
-(void)removedPlayer:(id)arg1 ;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)cancelAlertWithoutDelegateCallback;
-(void)cancelPendingInvites;
-(void)startGame;
-(void)setInviteeConnectionTimeStamp:(double)arg1 ;
-(void)sendStatusUpdate;
-(void)playerConnected:(id)arg1 ;
-(void)playerDisconnected:(id)arg1 ;
-(void)processStatusUpdateMessageFromBytes:(const char*)arg1 withLength:(unsigned)arg2 ;
-(void)showInviterDisconnectedAlert;
-(void)showAutomatchingErrorAlert;
-(BOOL)haveInvitedPlayers;
-(double)inviteeConnectionTimeStamp;
-(id)initWithAcceptedInvite:(id)arg1 ;
@end

