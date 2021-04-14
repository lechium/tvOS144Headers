/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UITextFieldBackgroundView : UIView {

	BOOL _active;
	BOOL _enabled;
	float _progress;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)_updateImages;
@end

