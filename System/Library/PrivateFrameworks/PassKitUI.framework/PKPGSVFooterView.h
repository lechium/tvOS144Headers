/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPGSVFooterViewDelegate;
@class PKContinuousButton;

@interface PKPGSVFooterView : UIView {

	PKContinuousButton* _editButton;
	id<PKPGSVFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPGSVFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPGSVFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPGSVFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_editTapped:(id)arg1 ;
@end

