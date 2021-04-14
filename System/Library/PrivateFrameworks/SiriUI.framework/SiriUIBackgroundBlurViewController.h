/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol SiriUIBackgroundBlurViewControllerDelegate;
@class SiriUIBackgroundBlurView;

@interface SiriUIBackgroundBlurViewController : UIViewController {

	BOOL _backgroundBlurIsVisible;
	SiriUIBackgroundBlurView* _backgroundBlurView;
	long long _backgroundBlurVisibleReason;
	id<SiriUIBackgroundBlurViewControllerDelegate> _backgroundBlurViewControllerDelegate;

}

@property (nonatomic,retain) SiriUIBackgroundBlurView * backgroundBlurView;                                                           //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
@property (assign,nonatomic) BOOL backgroundBlurIsVisible;                                                                            //@synthesize backgroundBlurIsVisible=_backgroundBlurIsVisible - In the implementation block
@property (assign,nonatomic) long long backgroundBlurVisibleReason;                                                                   //@synthesize backgroundBlurVisibleReason=_backgroundBlurVisibleReason - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate;              //@synthesize backgroundBlurViewControllerDelegate=_backgroundBlurViewControllerDelegate - In the implementation block
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setBackgroundBlurViewControllerDelegate:(id<SiriUIBackgroundBlurViewControllerDelegate>)arg1 ;
-(void)setBackgroundBlurIsVisible:(BOOL)arg1 ;
-(void)setBackgroundBlurVisibleReason:(long long)arg1 ;
-(void)setBackgroundBlurView:(SiriUIBackgroundBlurView *)arg1 ;
-(SiriUIBackgroundBlurView *)backgroundBlurView;
-(BOOL)backgroundBlurIsVisible;
-(long long)backgroundBlurVisibleReason;
-(id<SiriUIBackgroundBlurViewControllerDelegate>)backgroundBlurViewControllerDelegate;
-(void)requestBackgroundBlurVisible:(BOOL)arg1 forReason:(long long)arg2 ;
@end
