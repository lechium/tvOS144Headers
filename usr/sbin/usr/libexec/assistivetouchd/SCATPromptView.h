//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, _UIBackdropView;

@interface SCATPromptView : UIView
{
    UILabel *_promptLabel;	// 8 = 0x8
    _UIBackdropView *_backdropView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010007c290
- (void)layoutSubviews;	// IMP=0x000000010007c118
- (void)_updatePromptBackdropViewMask;	// IMP=0x000000010007bf24
@property(copy, nonatomic) NSString *prompt;

@end

