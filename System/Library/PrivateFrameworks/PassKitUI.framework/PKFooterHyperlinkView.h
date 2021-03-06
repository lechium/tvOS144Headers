/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, UIColor;

@interface PKFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate> {

	UITextView* _textView;
	NSString* _text;
	UIColor* _linkTextColor;
	/*^block*/id _action;
	NSRange _linkRange;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSRange linkRange;                     //@synthesize linkRange=_linkRange - In the implementation block
@property (nonatomic,retain) UIColor * linkTextColor;               //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(NSRange)linkRange;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(UIColor *)linkTextColor;
-(void)_updateText;
-(BOOL)_isLinkRangeValid;
@end

