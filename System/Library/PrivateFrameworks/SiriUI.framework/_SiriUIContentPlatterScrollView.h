/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol _SiriUIContentPlatterScrollViewDelegate;
@interface _SiriUIContentPlatterScrollView : UIScrollView {

	BOOL _automaticScrollingEnabled;
	BOOL _adjustContentSizeOnNextLayout;
	id<_SiriUIContentPlatterScrollViewDelegate> _platterDelegate;

}

@property (assign,nonatomic) BOOL adjustContentSizeOnNextLayout;                                              //@synthesize adjustContentSizeOnNextLayout=_adjustContentSizeOnNextLayout - In the implementation block
@property (assign,getter=isAutomaticScrollingEnabled,nonatomic) BOOL automaticScrollingEnabled;               //@synthesize automaticScrollingEnabled=_automaticScrollingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_SiriUIContentPlatterScrollViewDelegate> platterDelegate;              //@synthesize platterDelegate=_platterDelegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_sharedInit;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setAdjustContentSizeOnNextLayout:(BOOL)arg1 ;
-(BOOL)adjustContentSizeOnNextLayout;
-(BOOL)isAutomaticScrollingEnabled;
-(id<_SiriUIContentPlatterScrollViewDelegate>)platterDelegate;
-(void)setAutomaticScrollingEnabled:(BOOL)arg1 ;
-(void)setPlatterDelegate:(id<_SiriUIContentPlatterScrollViewDelegate>)arg1 ;
@end

