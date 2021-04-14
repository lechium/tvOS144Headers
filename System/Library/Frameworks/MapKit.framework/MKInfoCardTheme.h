/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UIColor;


@protocol MKInfoCardTheme <NSObject>
@property (nonatomic,readonly) unsigned long long themeType; 
@property (nonatomic,readonly) NSString * javaScriptName; 
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tertiaryTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * highlightedTintColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundPressedColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIColor * transitOntimeTextColor; 
@property (nonatomic,readonly) UIColor * transitDelayedTextColor; 
@property (nonatomic,readonly) UIColor * transitChevronBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalBackgroundColor; 
@property (nonatomic,readonly) UIColor * buttonNormalColor; 
@property (nonatomic,readonly) UIColor * buttonHighlightedColor; 
@property (nonatomic,readonly) UIColor * ratingBarStartColor; 
@property (nonatomic,readonly) UIColor * ratingBarEndColor; 
@property (nonatomic,readonly) UIColor * ratingBarBackgroundColor; 
@property (nonatomic,readonly) UIColor * transitIncidentBackgroundColor; 
@required
-(UIColor *)tertiaryTextColor;
-(UIColor *)textColor;
-(UIColor *)tintColor;
-(UIColor *)lightTextColor;
-(UIColor *)selectedRowColor;
-(UIColor *)rowColor;
-(UIColor *)separatorLineColor;
-(BOOL)isDarkTheme;
-(NSString *)javaScriptName;
-(UIColor *)ratingBarStartColor;
-(UIColor *)ratingBarEndColor;
-(UIColor *)ratingBarBackgroundColor;
-(UIColor *)transitOntimeTextColor;
-(UIColor *)transitDelayedTextColor;
-(UIColor *)normalBackgroundColor;
-(UIColor *)transitChevronBackgroundColor;
-(UIColor *)highlightedTintColor;
-(UIColor *)transitIncidentBackgroundColor;
-(unsigned long long)themeType;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)disabledActionRowBackgroundColor;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(UIColor *)buttonNormalColor;
-(UIColor *)buttonHighlightedColor;

@end

