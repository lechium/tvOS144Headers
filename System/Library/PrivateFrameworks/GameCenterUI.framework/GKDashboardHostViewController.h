/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKGameCenterDashboardServiceProtocol.h>

@class GKGameCenterViewController, GKDashboardAssetController, GKGame, NSString;

@interface GKDashboardHostViewController : GKExtensionRemoteViewController <GKGameCenterDashboardServiceProtocol> {

	GKGameCenterViewController* _delegateWeak;
	GKDashboardAssetController* _dashboardAssetController;

}

@property (nonatomic,retain) GKDashboardAssetController * dashboardAssetController;              //@synthesize dashboardAssetController=_dashboardAssetController - In the implementation block
@property (assign,nonatomic,__weak) GKGameCenterViewController * delegate;                       //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dashboardExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(GKGameCenterViewController *)delegate;
-(void)setDelegate:(GKGameCenterViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)finishWithMatch:(id)arg1 ;
-(void)playerQuitMatch:(id)arg1 ;
-(void)hostDidChangeViewState:(id)arg1 ;
-(void)hostDidChangeLeaderboardIdentifier:(id)arg1 ;
-(void)hostDidChangeLeaderboardTimeScope:(id)arg1 ;
-(void)hostDidChangeLeaderboardPlayerScope:(id)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(id)extensionObjectProxy;
-(void)extensionIsCanceling;
-(void)extensionIsFinishing;
-(void)playPressedForChallenge:(id)arg1 ;
-(void)hostSupportsShowingPlayForChallenge:(BOOL)arg1 ;
-(void)hostSupportsShowingPlayForTurnBasedMatch:(BOOL)arg1 ;
-(void)hostSupportsShowingQuitForTurnBasedMatch:(BOOL)arg1 ;
-(GKDashboardAssetController *)dashboardAssetController;
-(void)setDashboardAssetController:(GKDashboardAssetController *)arg1 ;
@end

