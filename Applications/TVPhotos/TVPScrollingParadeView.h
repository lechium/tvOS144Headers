//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, TVPImageLoaderQueue;
@protocol OS_dispatch_group;

@interface TVPScrollingParadeView : UIView <CAAnimationDelegate>
{
    _Bool _animating;	// 8 = 0x8
    unsigned long long _additionalImageViewCount;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_animationGroup;	// 24 = 0x18
    NSMutableArray *_imageViews;	// 32 = 0x20
    TVPImageLoaderQueue *_loaderQueue;	// 40 = 0x28
    _Bool _paused;	// 48 = 0x30
    NSArray *_imageProxies;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010001e6b8
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_stopAnimations;	// IMP=0x000000010001e4ec
- (void)_startAnimations;	// IMP=0x000000010001dba8
- (void)_addImageToAnimationContainer:(id)arg1;	// IMP=0x000000010001d8e8
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010001d8d8
- (void)layoutSubviews;	// IMP=0x000000010001d180
- (void)didMoveToWindow;	// IMP=0x000000010001d0c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001d018

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

