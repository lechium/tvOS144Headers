/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIView, NSString;

@interface AMPPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)containerViewWillLayoutSubviews;
-(void)presentationTransitionWillBegin;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(void)_prepareDimmingViewIfNecessary;
-(void)containerViewDidLayoutSubviews;
-(long long)adaptivePresentationStyle;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
@end

