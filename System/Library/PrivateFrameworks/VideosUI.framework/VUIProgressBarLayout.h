/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@class UIColor;

@interface VUIProgressBarLayout : NSObject {

	BOOL _shouldProgressBarUseRoundCorner;
	BOOL _useMaterial;
	UIColor* _fillColor;
	UIColor* _tintColor;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	double _height;
	double _cornerRadius;
	UIEdgeInsets _margin;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIColor * fillColor;                               //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                      //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                        //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double height;                                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                               //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL shouldProgressBarUseRoundCorner;              //@synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                                  //@synthesize useMaterial=_useMaterial - In the implementation block
+(id)defaultProgressBarLayout;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)margin;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(void)setShouldProgressBarUseRoundCorner:(BOOL)arg1 ;
-(void)setUseMaterial:(BOOL)arg1 ;
-(BOOL)useMaterial;
-(BOOL)shouldProgressBarUseRoundCorner;
@end

