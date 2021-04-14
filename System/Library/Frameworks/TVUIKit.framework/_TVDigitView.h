/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, NSString, UILabel;

@interface _TVDigitView : UIView {

	BOOL _secure;
	UIVisualEffectView* _visualEffectView;
	NSString* _text;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                        //@synthesize secure=_secure - In the implementation block
@property (nonatomic,copy) NSString * text;                                      //@synthesize text=_text - In the implementation block
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(void)reset;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
@end

