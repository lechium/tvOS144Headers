//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, TVPVideoView;

@interface SATVFlyoverViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    TVPVideoView *_flyoverPreviewVideoView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002253c
@property(retain, nonatomic) TVPVideoView *flyoverPreviewVideoView; // @synthesize flyoverPreviewVideoView=_flyoverPreviewVideoView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_configureFlyoverVideo;	// IMP=0x00000001000220c0
- (void)_callCompletionWithEnableFlyover:(_Bool)arg1;	// IMP=0x000000010002203c
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100021fb8
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100021f34
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021eb4
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021e34
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021db4
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021d34
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021cb4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100021c3c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100021bc4
- (void)viewDidLoad;	// IMP=0x0000000100021aac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

