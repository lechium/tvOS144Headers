//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CALayer, PBSPlayPauseButtonEventAssertion, TVAirPlayPresentationSession, TVAirPlayPresentationView;

@interface TVAirPlayPresentationViewController : UIViewController
{
    TVAirPlayPresentationSession *_session;	// 8 = 0x8
    TVAirPlayPresentationView *_presentationView;	// 16 = 0x10
    unsigned long long _stopCount;	// 24 = 0x18
    PBSPlayPauseButtonEventAssertion *_playPauseAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001220c
@property(readonly, nonatomic) PBSPlayPauseButtonEventAssertion *playPauseAssertion; // @synthesize playPauseAssertion=_playPauseAssertion;
@property(nonatomic) unsigned long long stopCount; // @synthesize stopCount=_stopCount;
@property(retain, nonatomic) TVAirPlayPresentationView *presentationView; // @synthesize presentationView=_presentationView;
@property(readonly, nonatomic) TVAirPlayPresentationSession *session; // @synthesize session=_session;
- (void)hideProgress;	// IMP=0x000000010001218c
- (void)showProgress;	// IMP=0x0000000100012170
@property(readonly, nonatomic) CALayer *presentationLayer;
- (void)_buttonPressed:(id)arg1;	// IMP=0x0000000100011f48
- (void)_swipeGesture:(id)arg1;	// IMP=0x0000000100011e78
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100011e20
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100011dc8
- (void)viewDidLoad;	// IMP=0x00000001000119ec
- (id)preferredFocusEnvironments;	// IMP=0x0000000100011964
- (id)initWithSession:(id)arg1;	// IMP=0x0000000100011850
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100011840
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100011830

@end

