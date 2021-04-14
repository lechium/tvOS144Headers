/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol SKTermsPageViewControllerDelegate;
@class UINavigationBar, NSString, UIToolbar, UIWebView;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate> {

	UINavigationBar* _navbar;
	NSString* _terms;
	UIToolbar* _toolbar;
	UIWebView* _webview;
	id<SKTermsPageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKTermsPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SKTermsPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKTermsPageViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(void)_dismissViewController;
-(id)initWithTerms:(id)arg1 ;
-(id)_markupTermsWithHTML:(id)arg1 ;
-(void)_loadSubviews;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 withAcceptance:(BOOL)arg2 ;
-(void)_buttonAccept:(id)arg1 ;
-(void)_buttonDecline:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
@end

