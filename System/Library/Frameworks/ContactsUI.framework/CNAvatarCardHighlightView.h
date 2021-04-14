/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIColor;

@interface CNAvatarCardHighlightView : UIView {

	CALayer* _highlightLayer;

}

@property (nonatomic,retain) CALayer * highlightLayer;              //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor; 
@property (nonatomic,readonly) BOOL highlighted; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(BOOL)highlighted;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLayer;
@end

