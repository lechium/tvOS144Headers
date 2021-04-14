/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class NSArray, UIView, NSString;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController> {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                          //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(UIView *)customView;
-(BOOL)hidesExpandableButton;
-(NSArray *)displayedCandidates;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
@end
