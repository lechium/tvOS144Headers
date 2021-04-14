/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UISheetPresentationControllerDelegate.h>

@protocol IAMViewControllerMetricsDelegate;
@class UIViewController, UIView, NSString;

@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate> {

	BOOL _shouldPresentFullscreen;
	BOOL _shouldUsePadLayout;
	UIViewController* _contentViewController;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	/*^block*/id _viewControllerWillDismissBlock;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (readonly) BOOL shouldUsePadLayout;                                                          //@synthesize shouldUsePadLayout=_shouldUsePadLayout - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (nonatomic,copy) id viewControllerWillDismissBlock;                                          //@synthesize viewControllerWillDismissBlock=_viewControllerWillDismissBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentFullscreen;                                             //@synthesize shouldPresentFullscreen=_shouldPresentFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)contentView;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidLoad;
-(void)setContentView:(UIView *)arg1 ;
-(long long)preferredStatusBarStyle;
-(UIViewController *)contentViewController;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(id)viewControllerWillDismissBlock;
-(BOOL)shouldPresentFullscreen;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)setViewControllerWillDismissBlock:(id)arg1 ;
-(void)setShouldPresentFullscreen:(BOOL)arg1 ;
-(BOOL)shouldUsePadLayout;
@end

