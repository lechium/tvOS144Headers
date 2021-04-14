/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UISwitchControl.h>
#import <UIKit/UISwitchVisualElementProvider.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIColor, UIImage, UISwitchVisualElement;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding> {

	BOOL _on;
	BOOL _alwaysShowOnOffLabel;
	NSString* _title;
	UIColor* _onTintColor;
	UIColor* _thumbTintColor;
	UIImage* _onImage;
	UIImage* _offImage;
	long long _style;
	long long _preferredStyle;
	UIColor* _tintColor;
	UISwitchVisualElement* _visualElement;
	long long _switchStyle;

}

@property (nonatomic,retain) UIColor * tintColor;                                                                                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UISwitchVisualElement * visualElement;                                                                 //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,setter=_setAlwaysShowsOnOffLabel:,getter=_alwaysShowOnOffLabel,nonatomic) BOOL alwaysShowOnOffLabel;              //@synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel - In the implementation block
@property (assign,nonatomic) long long switchStyle;                                                                                 //@synthesize switchStyle=_switchStyle - In the implementation block
@property (nonatomic,retain) UIColor * onTintColor;                                                                                 //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                                                              //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage;                                                                                     //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * offImage;                                                                                    //@synthesize offImage=_offImage - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                                                                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                                                              //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                                                                   //@synthesize on=_on - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)visualElementForTraitCollection:(id)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 style:(long long)arg2 ;
+(void)setVisualElementProvider:(id)arg1 ;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGPoint)accessibilityActivationPoint;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isOn;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(BOOL)_isFixedSize;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setOnTintColor:(UIColor *)arg1 ;
-(void)_setStyle:(long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_refreshVisualElement;
-(long long)preferredStyle;
-(UIColor *)onTintColor;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(UIColor *)thumbTintColor;
-(UISwitchVisualElement *)visualElement;
-(void)setVisualElement:(UISwitchVisualElement *)arg1 ;
-(void)setOnImage:(UIImage *)arg1 ;
-(void)setOffImage:(UIImage *)arg1 ;
-(UIImage *)onImage;
-(UIImage *)offImage;
-(BOOL)_shouldShowOnOffLabels;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyingVisualElement:(BOOL)arg3 ;
-(BOOL)_alwaysShowOnOffLabel;
-(void)visualElement:(id)arg1 transitionedToOn:(BOOL)arg2 ;
-(void)visualElementHadTouchUpInside:(id)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 ;
-(void)setSwitchStyle:(long long)arg1 ;
-(void)_setAlwaysShowsOnOffLabel:(BOOL)arg1 ;
-(void)_showingOnOffLabelChanged;
-(long long)switchStyle;
@end

