//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFocusContainerGuide;

@interface SATVFocusRedirectView : UIView
{
    _Bool _containsInertia;	// 8 = 0x8
    UIFocusContainerGuide *_containerGuide;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006987c
@property(readonly, nonatomic) UIFocusContainerGuide *containerGuide; // @synthesize containerGuide=_containerGuide;
@property(nonatomic) _Bool containsInertia; // @synthesize containsInertia=_containsInertia;
- (_Bool)_containsInertiaSelectionChanges;	// IMP=0x000000010006983c
- (void)layoutSubviews;	// IMP=0x00000001000697d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006972c

@end

