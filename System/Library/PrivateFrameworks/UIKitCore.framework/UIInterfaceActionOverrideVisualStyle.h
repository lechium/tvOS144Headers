/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionSeparatorAttributes, UIInterfaceActionHighlightAttributes;

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle {

	BOOL _alignActionSeparatorLeadingEdgeWithContent;
	double _customSelectionHighlightContinuousCornerRadius;
	UIInterfaceActionSeparatorAttributes* _customSeparatorAttributes;
	UIInterfaceActionHighlightAttributes* _customActionHighlightAttributes;
	/*^block*/id _customTitleLabelFontProviderForViewState;

}

@property (assign) double customSelectionHighlightContinuousCornerRadius;                                         //@synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent;                                     //@synthesize alignActionSeparatorLeadingEdgeWithContent=_alignActionSeparatorLeadingEdgeWithContent - In the implementation block
@property (nonatomic,retain) UIInterfaceActionSeparatorAttributes * customSeparatorAttributes;                    //@synthesize customSeparatorAttributes=_customSeparatorAttributes - In the implementation block
@property (nonatomic,retain) UIInterfaceActionHighlightAttributes * customActionHighlightAttributes;              //@synthesize customActionHighlightAttributes=_customActionHighlightAttributes - In the implementation block
@property (nonatomic,copy) id customTitleLabelFontProviderForViewState;                                           //@synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState - In the implementation block
+(id)styleOverride;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(UIInterfaceActionSeparatorAttributes *)customSeparatorAttributes;
-(UIInterfaceActionHighlightAttributes *)customActionHighlightAttributes;
-(double)customSelectionHighlightContinuousCornerRadius;
-(void)setCustomSelectionHighlightContinuousCornerRadius:(double)arg1 ;
-(BOOL)alignActionSeparatorLeadingEdgeWithContent;
-(void)setAlignActionSeparatorLeadingEdgeWithContent:(BOOL)arg1 ;
-(void)setCustomSeparatorAttributes:(UIInterfaceActionSeparatorAttributes *)arg1 ;
-(void)setCustomActionHighlightAttributes:(UIInterfaceActionHighlightAttributes *)arg1 ;
-(id)customTitleLabelFontProviderForViewState;
-(void)setCustomTitleLabelFontProviderForViewState:(id)arg1 ;
@end

