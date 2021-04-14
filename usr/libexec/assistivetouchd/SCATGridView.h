//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;
@protocol SCATGridDelegate;

@interface SCATGridView : UIView
{
    UIImageView *_centerPoint;	// 8 = 0x8
    _Bool _showsTopBorder;	// 16 = 0x10
    _Bool _showsLeftBorder;	// 17 = 0x11
    _Bool _showsBottomBorder;	// 18 = 0x12
    _Bool _showsRightBorder;	// 19 = 0x13
    _Bool _centerPointVisible;	// 20 = 0x14
    _Bool _shouldIncludeCenterPoint;	// 21 = 0x15
    _Bool _shouldShowGridBorder;	// 22 = 0x16
    id <SCATGridDelegate> _delegate;	// 24 = 0x18
    unsigned long long _numberOfRows;	// 32 = 0x20
    unsigned long long _numberOfColumns;	// 40 = 0x28
    double _lineThickness;	// 48 = 0x30
    UIColor *_lineColor;	// 56 = 0x38
    UIColor *_shadowColor;	// 64 = 0x40
    struct CGSize _shadowOffset;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010005d7c8
@property(nonatomic) _Bool shouldShowGridBorder; // @synthesize shouldShowGridBorder=_shouldShowGridBorder;
@property(nonatomic) _Bool shouldIncludeCenterPoint; // @synthesize shouldIncludeCenterPoint=_shouldIncludeCenterPoint;
@property(nonatomic, getter=isCenterPointVisible) _Bool centerPointVisible; // @synthesize centerPointVisible=_centerPointVisible;
@property(nonatomic) _Bool showsRightBorder; // @synthesize showsRightBorder=_showsRightBorder;
@property(nonatomic) _Bool showsBottomBorder; // @synthesize showsBottomBorder=_showsBottomBorder;
@property(nonatomic) _Bool showsLeftBorder; // @synthesize showsLeftBorder=_showsLeftBorder;
@property(nonatomic) _Bool showsTopBorder; // @synthesize showsTopBorder=_showsTopBorder;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) __weak id <SCATGridDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010005d5a8
- (void)_drawLinesInContext:(struct CGContext *)arg1 forRows:(_Bool)arg2;	// IMP=0x000000010005d36c
- (void)layoutSubviews;	// IMP=0x000000010005cfe0
- (double)_adjustOriginValue:(double)arg1 forDistance:(double)arg2 maximumEndPosition:(double)arg3;	// IMP=0x000000010005cfb8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005ce74

@end
