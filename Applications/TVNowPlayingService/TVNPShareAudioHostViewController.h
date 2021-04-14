//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"
#import "TVNPShareAudioMainViewControllerDelegate-Protocol.h"

@class NSString, TVNPShareAudioMainViewController;

@interface TVNPShareAudioHostViewController : UIViewController <PBSViewServicePresenter, TVNPShareAudioMainViewControllerDelegate>
{
    TVNPShareAudioMainViewController *_shareAudioViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100005cfc
+ (id)_exportedInterface;	// IMP=0x0000000100005bfc
- (void).cxx_destruct;	// IMP=0x0000000100005d80
@property(retain, nonatomic) TVNPShareAudioMainViewController *shareAudioViewController; // @synthesize shareAudioViewController=_shareAudioViewController;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0000000100005d18
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005b40
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005b3c
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100005a54
- (void)viewDidLoad;	// IMP=0x0000000100005a20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

