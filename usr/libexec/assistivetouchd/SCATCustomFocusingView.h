//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SCATCustomFocusingView : UIView
{
    long long _focusState;	// 8 = 0x8
}

+ (double)roundedRectCornerRadius;	// IMP=0x00000001000a78b0
+ (double)unfocusedStateBorderThickness;	// IMP=0x00000001000a78a8
+ (double)focusedGroupStateBorderThickness;	// IMP=0x00000001000a78a0
+ (double)focusedStateBorderThickness;	// IMP=0x00000001000a7898
+ (id)unfocusedStateContentsColor;	// IMP=0x00000001000a788c
+ (id)focusedGroupStateContentsColor;	// IMP=0x00000001000a7880
+ (id)focusedStateContentsColor;	// IMP=0x00000001000a786c
+ (id)unfocusedStateFillColor;	// IMP=0x00000001000a7858
+ (id)focusedGroupStateFillColor;	// IMP=0x00000001000a7844
+ (id)focusedStateFillColor;	// IMP=0x00000001000a7830
+ (id)unfocusedStateColor;	// IMP=0x00000001000a7808
+ (id)focusedGroupStateColor;	// IMP=0x00000001000a77e4
+ (id)focusedStateColor;	// IMP=0x00000001000a77d0
@property(nonatomic) long long focusState; // @synthesize focusState=_focusState;
- (_Bool)updateFocusState:(long long)arg1;	// IMP=0x00000001000a7900
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a78b8

@end

