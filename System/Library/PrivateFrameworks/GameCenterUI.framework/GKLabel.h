/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/GKTextStyleReplay.h>

@class GKTextStyle, NSString;

@interface GKLabel : UILabel <GKTextStyleReplay> {

	GKTextStyle* _baseStyle;
	GKTextStyle* _appliedStyle;
	BOOL _shouldEnforcePreferredWidth;
	BOOL _usingAttributedText;
	BOOL _shouldInhibitReplay;
	double _actualFontShrinkageFactor;
	UIEdgeInsets _titleEdgeInsets;

}

@property (nonatomic,retain) GKTextStyle * baseStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKTextStyle * appliedStyle;                    //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) double actualFontShrinkageFactor;              //@synthesize actualFontShrinkageFactor=_actualFontShrinkageFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldEnforcePreferredWidth;              //@synthesize shouldEnforcePreferredWidth=_shouldEnforcePreferredWidth - In the implementation block
@property (nonatomic,readonly) BOOL usingAttributedText;                    //@synthesize usingAttributedText=_usingAttributedText - In the implementation block
@property (assign,nonatomic) BOOL shouldInhibitReplay;                      //@synthesize shouldInhibitReplay=_shouldInhibitReplay - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets;                  //@synthesize titleEdgeInsets=_titleEdgeInsets - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setBaseStyle:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setAttributedText:(id)arg1 ;
-(void)updateConstraints;
-(UIEdgeInsets)titleEdgeInsets;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(GKTextStyle *)appliedStyle;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1 ;
-(GKTextStyle *)baseStyle;
-(void)setBaseStyle:(GKTextStyle *)arg1 ;
-(BOOL)shouldInhibitReplay;
-(BOOL)usingAttributedText;
-(void)replayAndApplyStyleUnlessInhibited;
-(CGSize)shrinkFontToFitSize:(CGSize)arg1 ;
-(void)setActualFontShrinkageFactor:(double)arg1 ;
-(BOOL)shouldEnforcePreferredWidth;
-(double)actualFontShrinkageFactor;
-(void)shrinkFontToFitWidth;
-(void)setShouldEnforcePreferredWidth:(BOOL)arg1 ;
-(void)setShouldInhibitReplay:(BOOL)arg1 ;
@end

