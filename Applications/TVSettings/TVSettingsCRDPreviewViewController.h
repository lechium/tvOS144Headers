//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKPreviewViewController.h>

@class NSLayoutConstraint, TVSUIConferenceRoomDisplaySmallView;

@interface TVSettingsCRDPreviewViewController : TSKPreviewViewController
{
    TVSUIConferenceRoomDisplaySmallView *_crdView;	// 8 = 0x8
    NSLayoutConstraint *_contentViewCenterXConstraint;	// 16 = 0x10
    NSLayoutConstraint *_contentViewCenterYConstraint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000ece58
- (id)_newCRDView;	// IMP=0x00000001000ecd30
- (id)_crdView;	// IMP=0x00000001000ecce0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000ecb5c
- (id)contentContainerSnapshot;	// IMP=0x00000001000ecab0
- (void)setContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000ec874
- (void)viewDidLoad;	// IMP=0x00000001000ec780
- (void)dealloc;	// IMP=0x00000001000ec6a8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000ec59c

@end
