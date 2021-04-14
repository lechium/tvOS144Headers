/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PKPeerPaymentHeroBubbleView, PKPeerPaymentCredential;

@interface PKPeerPaymentSetupFlowHeroView : UIView {

	UIImageView* _passSnapshotView;
	PKPeerPaymentHeroBubbleView* _bubbleView;
	PKPeerPaymentCredential* _credential;
	long long _animationState;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)startAnimation;
-(id)initWithPeerPaymentPassSnapShot:(id)arg1 peerPaymentCredential:(id)arg2 ;
-(void)_updateImageViewDynamicColors;
-(BOOL)_shouldShowBubbleView;
-(id)_defaultCurrencyAmount;
-(BOOL)_bubbleIsOnLeftSide;
-(void)startAnimationWithCompletion:(/*^block*/id)arg1 ;
@end

