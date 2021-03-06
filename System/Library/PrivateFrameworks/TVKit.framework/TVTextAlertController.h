/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIImage, NSString, UIImageView, UILabel, UITextView, UIButton, NSMutableArray, NSMapTable, UITapGestureRecognizer;

@interface TVTextAlertController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate> {

	BOOL _shouldDismissAutomatically;
	BOOL _hasLongText;
	UIImage* _headerImage;
	NSString* _text;
	UIImageView* _headerImageView;
	UILabel* _titleLabel;
	UITextView* _textView;
	UIButton* _cancelButton;
	UIButton* _initialFocusButton;
	NSMutableArray* _buttons;
	NSMapTable* _buttonHandlers;
	UITapGestureRecognizer* _menuRecognizer;

}

@property (nonatomic,readonly) UIImageView * headerImageView;                        //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * initialFocusButton;                        //@synthesize initialFocusButton=_initialFocusButton - In the implementation block
@property (nonatomic,readonly) NSMutableArray * buttons;                             //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,readonly) NSMapTable * buttonHandlers;                          //@synthesize buttonHandlers=_buttonHandlers - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * menuRecognizer;              //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL hasLongText;                                     //@synthesize hasLongText=_hasLongText - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                                  //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissAutomatically;                        //@synthesize shouldDismissAutomatically=_shouldDismissAutomatically - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonBackgroundColor;
+(id)_destructiveFocusedButtonBackgroundColor;
+(id)_destructiveButtonBackgroundColor;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSMutableArray *)buttons;
-(void)viewDidLoad;
-(UITextView *)textView;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)viewDidLayoutSubviews;
-(UIButton *)cancelButton;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIImage *)headerImage;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImageView *)headerImageView;
-(void)removeAllButtons;
-(void)setShouldDismissAutomatically:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 text:(id)arg2 ;
-(void)_didSelectButton:(id)arg1 ;
-(void)_updateForLongText;
-(CGRect)_textViewLongTextFrame;
-(void)_handleMenuButton;
-(id)_preferredButton;
-(CGRect)_titleLabelLongTextFrame;
-(void)_configureTextViews;
-(double)_buttonAreaLongTextHeight;
-(void)addButtonWithTitle:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)shouldDismissAutomatically;
-(UIButton *)initialFocusButton;
-(NSMapTable *)buttonHandlers;
-(BOOL)hasLongText;
@end

