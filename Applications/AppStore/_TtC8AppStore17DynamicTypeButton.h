//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE;
@protocol UIFocusItemContainer;

@interface _TtC8AppStore17DynamicTypeButton : UIButton
{
    MISSING_TYPE *topSpace;	// 0 = 0x0
    MISSING_TYPE *bottomSpace;	// 0 = 0x0
    MISSING_TYPE *fontUseCaseContentSizeCategory;	// 0 = 0x0
    MISSING_TYPE *fontUseCase;	// 0 = 0x0
    MISSING_TYPE *imageAlignment;	// 0 = 0x0
    MISSING_TYPE *imageWantsBaselineAlignment;	// 0 = 0x0
    MISSING_TYPE *_focusItemContainer;	// 0 = 0x0
    MISSING_TYPE *primaryActionHandler;	// 0 = 0x0
    MISSING_TYPE *titleColorFollowsTintColor;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000001000e62b0
- (void)didTriggerPrimaryAction:(id)arg1;	// IMP=0x00000001000e61e0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000e6190
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000001000e5ecc
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000001000e5c04
- (void)tintColorDidChange;	// IMP=0x00000001000e57fc
@property(nonatomic, retain) id <UIFocusItemContainer> focusItemContainer;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000e5718
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e5268
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e4f14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e4ef4

@end

