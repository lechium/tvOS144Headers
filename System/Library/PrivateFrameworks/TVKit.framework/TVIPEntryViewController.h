/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <TVKit/TVIPEntryViewDelegate.h>

@protocol TVIPEntryViewControllerDelegate;
@class TVHeaderView, UILabel, TVIPEntryView, NSString;

@interface TVIPEntryViewController : UIViewController <TVIPEntryViewDelegate> {

	TVHeaderView* _titleView;
	UILabel* _promptLabel;
	TVIPEntryView* _ipEntryView;
	NSString* _prompt;
	id<TVIPEntryViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * prompt;                                                  //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) NSString * ipAddress; 
@property (assign,nonatomic,__weak) id<TVIPEntryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVIPEntryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVIPEntryViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(id)_ipEntryView;
-(void)ipEntryViewDidFinishEditing:(id)arg1 ;
@end

