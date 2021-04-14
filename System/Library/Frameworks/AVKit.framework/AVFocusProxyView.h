/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVFocusProxyViewDelegateProtocol;
@class UIView, NSArray;

@interface AVFocusProxyView : UIView {

	UIView*<AVFocusProxyViewDelegateProtocol> _targetView;
	NSArray* _constraintsToTargetView;

}

@property (nonatomic,retain) NSArray * constraintsToTargetView;                                                                           //@synthesize constraintsToTargetView=_constraintsToTargetView - In the implementation block
@property (setter=_setTargetView:,getter=_targetView,nonatomic,retain) UIView*<AVFocusProxyViewDelegateProtocol> targetView;              //@synthesize targetView=_targetView - In the implementation block
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id)_targetView;
-(void)didMoveToWindow;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setProxyViewVisible:(BOOL)arg1 ;
-(void)_setTargetView:(id)arg1 ;
-(void)addSpecialGestureRecognizer:(id)arg1 ;
-(void)removeSpecialGestureRecognizer:(id)arg1 ;
-(NSArray *)constraintsToTargetView;
-(void)setConstraintsToTargetView:(NSArray *)arg1 ;
@end

