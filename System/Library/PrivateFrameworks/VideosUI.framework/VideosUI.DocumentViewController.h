/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : UIViewController {

	 templateViewController;
	 deferLoadingTemplateController;
	 documentDelegate;
	 document;
	 isTransitioning;
	 loadingView;
	 pagePerformanceReporter;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)viewDidLoad;
-(void)scrollToTop;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSArray *)preferredFocusEnvironments;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
@end

