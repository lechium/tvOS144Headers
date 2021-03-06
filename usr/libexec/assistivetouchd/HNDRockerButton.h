//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HNDView.h"

#import "AXAssistiveTouchLayoutItem-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;
@protocol HNDRockerButtonDataSource;

@interface HNDRockerButton : HNDView <AXAssistiveTouchLayoutItem>
{
    CDUnknownBlockType _downBlock;	// 16 = 0x10
    CDUnknownBlockType _upBlock;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    _Bool _selected;	// 40 = 0x28
    _Bool _highlighted;	// 41 = 0x29
    UILabel *_label;	// 48 = 0x30
    NSString *_imageName;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    _Bool _isEmptyFavorite;	// 72 = 0x48
    _Bool _customTitle;	// 73 = 0x49
    _Bool _isBackButton;	// 74 = 0x4a
    _Bool _showWithGuidedAccess;	// 75 = 0x4b
    _Bool isEmptyFavorite;	// 76 = 0x4c
    _Bool customTitle;	// 77 = 0x4d
    _Bool isModalDown;	// 78 = 0x4e
    _Bool _continueHighlightAfterTouch;	// 79 = 0x4f
    _Bool _disabled;	// 80 = 0x50
    CDUnknownBlockType _substantialTransitionOccurredBlock;	// 88 = 0x58
    NSString *_location;	// 96 = 0x60
    id <HNDRockerButtonDataSource> _dataSource;	// 104 = 0x68
    NSString *_type;	// 112 = 0x70
    UIImage *_selectedImage;	// 120 = 0x78
    UIImage *_unselectedImage;	// 128 = 0x80
}

+ (id)_dummyImage;	// IMP=0x0000000100044de4
+ (id)buttonWithTitle:(id)arg1 imageName:(id)arg2 downBlock:(CDUnknownBlockType)arg3 upBlock:(CDUnknownBlockType)arg4 dataSource:(id)arg5 showWithGuidedAccess:(_Bool)arg6;	// IMP=0x0000000100044bb4
- (void).cxx_destruct;	// IMP=0x0000000100047288
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <HNDRockerButtonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType substantialTransitionOccurredBlock; // @synthesize substantialTransitionOccurredBlock=_substantialTransitionOccurredBlock;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showWithGuidedAccess; // @synthesize showWithGuidedAccess=_showWithGuidedAccess;
@property(nonatomic) _Bool continueHighlightAfterTouch; // @synthesize continueHighlightAfterTouch=_continueHighlightAfterTouch;
@property(nonatomic) _Bool isBackButton; // @synthesize isBackButton=_isBackButton;
@property(nonatomic) _Bool isModalDown; // @synthesize isModalDown;
@property(nonatomic) _Bool customTitle; // @synthesize customTitle;
@property(nonatomic) _Bool isEmptyFavorite; // @synthesize isEmptyFavorite;
@property(copy, nonatomic) CDUnknownBlockType upBlock; // @synthesize upBlock=_upBlock;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id)description;	// IMP=0x0000000100046f90
- (id)accessibilityLabel;	// IMP=0x0000000100046f04
- (struct CGRect)accessibilityFrame;	// IMP=0x0000000100046e44
- (_Bool)isAccessibilityElement;	// IMP=0x0000000100046e3c
@property(readonly, nonatomic) UIView *imageViewContainerView;
- (void)dealloc;	// IMP=0x0000000100046db4
- (void)_updateLabelText;	// IMP=0x0000000100046ae4
- (void)updateTextColor;	// IMP=0x0000000100046858
@property(readonly, nonatomic) UIImage *deviceSpecificImage;
- (double)_screenHeight;	// IMP=0x000000010004679c
- (id)_deviceSpecificImageForName:(id)arg1 screenHeight:(double)arg2;	// IMP=0x00000001000466b4
- (void)getDeviceSpecificImageForColor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000463e0
- (id)currentImage;	// IMP=0x0000000100046154
- (void)resetImages;	// IMP=0x0000000100046114
- (_Bool)_inSelectedState;	// IMP=0x00000001000460c0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010004600c
- (void)performPress:(_Bool)arg1;	// IMP=0x0000000100045f70
- (void)handleRealUpEvent:(struct CGPoint)arg1 maxOrb:(double)arg2;	// IMP=0x0000000100045f10
- (void)handleRealCancelEvent:(struct CGPoint)arg1;	// IMP=0x0000000100045df4
- (void)handleFingerDriftedAway;	// IMP=0x0000000100045d98
- (void)handleRealDownEvent:(struct CGPoint)arg1;	// IMP=0x0000000100045d50
- (void)_updateImageView;	// IMP=0x0000000100045b28
- (void)_updateImage;	// IMP=0x0000000100045af4
- (void)_updateFont;	// IMP=0x0000000100045a98
- (id)viewForLastBaselineLayout;	// IMP=0x0000000100045a88
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100045978
- (id)initWithImageName:(id)arg1;	// IMP=0x0000000100044efc

@end

