//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSObject, NSString, UINavigationController, UITapGestureRecognizer, UIView;
@protocol TVPAVFPlayback;

@interface MTTVPodcastsSystemNowPlayingViewController : UIViewController <PBSViewServicePresenter>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    NSObject<TVPAVFPlayback> *_player;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010007d1d8
+ (id)_exportedInterface;	// IMP=0x000000010007d0d8
- (void).cxx_destruct;	// IMP=0x000000010007d360
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_menuPressed:(id)arg1;	// IMP=0x000000010007d1f4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010007cfd0
- (void)_dismissRemoteViewController;	// IMP=0x000000010007cf48
- (void)_playerDidChangeState:(id)arg1;	// IMP=0x000000010007cd9c
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007cad0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010007c66c
- (void)dealloc;	// IMP=0x000000010007c5d0
- (void)viewDidLoad;	// IMP=0x000000010007c4c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010007c3e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

