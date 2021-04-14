/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUILabel, UIVisualEffectView, NSString;

@interface VUIVisualEffectLabel : UIView <VUILabelBaselineProtocol> {

	VUILabel* _label;
	UIVisualEffectView* _visualEffectView;
	unsigned long long _visualEffectLabelType;
	long long _blurEffectStyle;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                 //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) VUILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long visualEffectLabelType;              //@synthesize visualEffectLabelType=_visualEffectLabelType - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                             //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_backdropStyleForVisualEffectType:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)labelWithType:(unsigned long long)arg1 label:(id)arg2 traitCollection:(id)arg3 existingVisualEffectLabel:(id)arg4 ;
-(VUILabel *)label;
-(void)setLabel:(VUILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(unsigned long long)visualEffectLabelType;
-(void)setVisualEffectLabelType:(unsigned long long)arg1 ;
-(void)_configureVisualEffectForTraitCollection;
@end

