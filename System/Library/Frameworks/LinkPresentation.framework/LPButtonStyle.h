/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor, UIFont, LPPadding;

@interface LPButtonStyle : NSObject {

	UIColor* _foregroundColor;
	UIColor* _backgroundColor;
	UIFont* _font;
	LPPadding* _padding;
	LPPadding* _margin;

}

@property (nonatomic,retain) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) LPPadding * padding;                    //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) LPPadding * margin;                     //@synthesize margin=_margin - In the implementation block
+(id)systemPillButtonStyleForPlatform:(long long)arg1 ;
-(id)init;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(LPPadding *)padding;
-(void)setPadding:(LPPadding *)arg1 ;
-(LPPadding *)margin;
-(void)setMargin:(LPPadding *)arg1 ;
@end

