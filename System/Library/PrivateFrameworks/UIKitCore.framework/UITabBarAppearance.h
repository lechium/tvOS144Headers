/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIBarAppearance.h>

@class _UITabBarLayoutData, UITabBarItemAppearance, UIColor, UIImage;

@interface UITabBarAppearance : UIBarAppearance {

	_UITabBarLayoutData* _layoutData;
	UITabBarItemAppearance* _stackedLayoutAppearance;
	UITabBarItemAppearance* _inlineLayoutAppearance;
	UITabBarItemAppearance* _compactInlineLayoutAppearance;

}

@property (nonatomic,copy) UITabBarItemAppearance * stackedLayoutAppearance;                    //@synthesize stackedLayoutAppearance=_stackedLayoutAppearance - In the implementation block
@property (nonatomic,copy) UITabBarItemAppearance * inlineLayoutAppearance;                     //@synthesize inlineLayoutAppearance=_inlineLayoutAppearance - In the implementation block
@property (nonatomic,copy) UITabBarItemAppearance * compactInlineLayoutAppearance;              //@synthesize compactInlineLayoutAppearance=_compactInlineLayoutAppearance - In the implementation block
@property (nonatomic,copy) UIColor * selectionIndicatorTintColor; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (assign,nonatomic) long long stackedItemPositioning; 
@property (assign,nonatomic) double stackedItemWidth; 
@property (assign,nonatomic) double stackedItemSpacing; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSelectionIndicatorTintColor:(UIColor *)arg1 ;
-(void)_setupDefaults;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg1 ;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(void)_describeInto:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 ;
-(id)_stackedTabButtonAppearanceData;
-(id)_inlineTabButtonAppearanceData;
-(id)_compactInlineTabButtonAppearanceData;
-(id)_tabLayoutAppearanceData;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(id)_dataForItemStyle:(long long)arg1 ;
-(UIColor *)selectionIndicatorTintColor;
-(void)_tabBarItemDataChanged:(id)arg1 ;
-(void)setStackedLayoutAppearance:(UITabBarItemAppearance *)arg1 ;
-(void)setInlineLayoutAppearance:(UITabBarItemAppearance *)arg1 ;
-(void)setCompactInlineLayoutAppearance:(UITabBarItemAppearance *)arg1 ;
-(long long)stackedItemPositioning;
-(void)setStackedItemPositioning:(long long)arg1 ;
-(double)stackedItemWidth;
-(void)setStackedItemWidth:(double)arg1 ;
-(double)stackedItemSpacing;
-(void)setStackedItemSpacing:(double)arg1 ;
-(UITabBarItemAppearance *)stackedLayoutAppearance;
-(UITabBarItemAppearance *)inlineLayoutAppearance;
-(UITabBarItemAppearance *)compactInlineLayoutAppearance;
@end

