//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVImageProxy, UIColor, UIImage, UIImageView;

@interface TVImageView : UIView
{
    _Bool _rendersImageAsTemplates;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIColor *__focusedColor;	// 32 = 0x20
    long long _imageContentMode;	// 40 = 0x28
    UIImage *_flatImage;	// 48 = 0x30
    UIImage *_flatHighlightImage;	// 56 = 0x38
    _Bool _selected;	// 64 = 0x40
    _Bool _imageLoaded;	// 65 = 0x41
    _Bool __enableEdgeAntialiasingOnSelected;	// 66 = 0x42
    _Bool __edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;	// 67 = 0x43
    UIImage *_placeholderImage;	// 72 = 0x48
    TVImageProxy *_imageProxy;	// 80 = 0x50
    CDUnknownBlockType _completion;	// 88 = 0x58
    UIColor *__tintColor;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100023d08
@property(nonatomic, setter=_setEdgeAntialiasingOnSelectedRestrictedToLeftRightEdge:) _Bool _edgeAntialiasingOnSelectedRestrictedToLeftRightEdge; // @synthesize _edgeAntialiasingOnSelectedRestrictedToLeftRightEdge=__edgeAntialiasingOnSelectedRestrictedToLeftRightEdge;
@property(nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) _Bool _enableEdgeAntialiasingOnSelected; // @synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected;
@property(retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor; // @synthesize _focusedColor=__focusedColor;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // @synthesize _tintColor=__tintColor;
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void)_updateImageViewWithPlaceholderImageIfNeeded;	// IMP=0x0000000100023ba4
- (void)_setImage:(id)arg1;	// IMP=0x0000000100023a30
- (id)_imageView;	// IMP=0x000000010002389c
- (void)_loadImage;	// IMP=0x00000001000231d0
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002305c
@property(nonatomic) double cornerRadius;
- (void)setImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022c58
@property(retain, nonatomic) UIImage *image;
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100022b48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100022aa0
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100022a2c
- (void)setContentMode:(long long)arg1;	// IMP=0x0000000100022a08
- (void)layoutSubviews;	// IMP=0x000000010002299c
- (long long)contentMode;	// IMP=0x0000000100022984
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010002296c
- (void)dealloc;	// IMP=0x0000000100022900
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002281c

@end
