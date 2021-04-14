/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXComposeRecipientViewDelegate;
@class UIFont, NSString, UIButton, NSArray;

@interface PXComposeRecipientView : UIView {

	SCD_Struct_PX44 _delegateRespondsTo;
	BOOL _separatorHidden;
	id<PXComposeRecipientViewDelegate> _delegate;
	UIFont* _baseFont;
	NSString* _text;
	NSString* _label;
	UIButton* _addButton;
	long long _maxRecipients;
	NSArray* _recipients;

}

@property (assign,nonatomic,__weak) id<PXComposeRecipientViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIFont * baseFont;                                             //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIButton * addButton;                                          //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                         //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                   //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
-(id)init;
-(id<PXComposeRecipientViewDelegate>)delegate;
-(void)setDelegate:(id<PXComposeRecipientViewDelegate>)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(NSArray *)recipients;
-(void)addRecipients:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)removeRecipients:(id)arg1 ;
-(UIFont *)baseFont;
-(UIButton *)addButton;
-(long long)maxRecipients;
-(void)setMaxRecipients:(long long)arg1 ;
@end

