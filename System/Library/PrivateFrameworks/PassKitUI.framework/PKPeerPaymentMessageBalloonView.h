/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class PKPeerPaymentBubbleView;

@interface PKPeerPaymentMessageBalloonView : UIView {

	PKPeerPaymentBubbleView* _bubbleView;
	long long _peerPaymentType;

}

@property (nonatomic,readonly) PKPeerPaymentBubbleView * bubbleView;              //@synthesize bubbleView=_bubbleView - In the implementation block
@property (nonatomic,readonly) long long peerPaymentType;                         //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
-(long long)peerPaymentType;
-(id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2 ;
-(PKPeerPaymentBubbleView *)bubbleView;
@end

