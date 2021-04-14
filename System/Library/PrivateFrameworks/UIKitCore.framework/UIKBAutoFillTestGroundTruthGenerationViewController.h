/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKBAutoFillTestTaggerViewDelegate.h>

@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;
@class UIKBAutoFillTestViewController, UIKBAutoFillTestExpectedResult, UIScrollView, UIKBAutoFillTestTaggerView, NSLayoutConstraint, UIView, UIBarButtonItem, NSString;

@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController <UIKBAutoFillTestTaggerViewDelegate> {

	UIKBAutoFillTestViewController* _testViewController;
	UIKBAutoFillTestExpectedResult* _expectedResult;
	UIScrollView* _scrollView;
	UIKBAutoFillTestTaggerView* _taggerView;
	NSLayoutConstraint* _scrollViewBottomConstraint;
	UIView* _highlightView;
	UIView* _highlightBox;
	UIBarButtonItem* _doneBarButtonItem;
	id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIKBAutoFillTestViewController * testViewController;                                        //@synthesize testViewController=_testViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3 ;
-(void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3 ;
-(void)taggerView:(id)arg1 willTagRequest:(id)arg2 ;
-(long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2 ;
-(long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2 ;
-(void)taggerViewDidFinish:(id)arg1 ;
-(void)_cancelBarButtonItemAction:(id)arg1 ;
-(void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_removeTaggerHighlightView;
-(void)_moveTaggerHighlightViewOverView:(id)arg1 ;
-(id)initWithAutoFillTestViewController:(id)arg1 ;
-(UIKBAutoFillTestViewController *)testViewController;
@end

