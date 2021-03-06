//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSString, TVNPMediaRemoteObserver, TVPMusicNowPlayingViewController, UITapGestureRecognizer, UIView;

@interface TVNPViewController : UIViewController <PBSViewServicePresenter>
{
    TVPMusicNowPlayingViewController *_musicViewController;	// 8 = 0x8
    TVNPMediaRemoteObserver *_mediaRemoteObserver;	// 16 = 0x10
    UITapGestureRecognizer *_menuGestureRecognizer;	// 24 = 0x18
    UIView *_nowPlayingWallPaper;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010002760c
+ (id)_exportedInterface;	// IMP=0x000000010002750c
- (void).cxx_destruct;	// IMP=0x00000001000276fc
@property(retain, nonatomic) UIView *nowPlayingWallPaper; // @synthesize nowPlayingWallPaper=_nowPlayingWallPaper;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) TVNPMediaRemoteObserver *mediaRemoteObserver; // @synthesize mediaRemoteObserver=_mediaRemoteObserver;
@property(retain, nonatomic) TVPMusicNowPlayingViewController *musicViewController; // @synthesize musicViewController=_musicViewController;
- (void)_menuPressed:(id)arg1;	// IMP=0x0000000100027628
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027208
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100026bc0
- (void)viewDidLoad;	// IMP=0x0000000100026b08
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100026a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

