/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVButton.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUIButtonLayout, _TVImageView, NSString;

@interface VUILegacyButton : TVButton <VUILabelBaselineProtocol> {

	BOOL _hasDisclaimerText;
	VUIButtonLayout* _layout;
	_TVImageView* _backgroundImageView;
	NSString* _groupName;
	_TVImageView* _imagesViewDefaultState;
	_TVImageView* _imagesViewHighlightedState;
	_TVImageView* _backgroundImagesViewDefaultState;
	_TVImageView* _backgroundImagesViewHighlightedState;

}

@property (nonatomic,retain) VUIButtonLayout * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewDefaultState;                            //@synthesize imagesViewDefaultState=_imagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewHighlightedState;                        //@synthesize imagesViewHighlightedState=_imagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewDefaultState;                  //@synthesize backgroundImagesViewDefaultState=_backgroundImagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewHighlightedState;              //@synthesize backgroundImagesViewHighlightedState=_backgroundImagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImageView;                               //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                               //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL hasDisclaimerText;                                           //@synthesize hasDisclaimerText=_hasDisclaimerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIButtonLayout *)layout;
-(void)setLayout:(VUIButtonLayout *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromBottom;
-(CGSize)intrinsicContentSize;
-(BOOL)_hasTitle;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImageView:(id)arg1 ;
-(void)_updateBackgroundColor;
-(_TVImageView *)backgroundImageView;
-(void)setBackgroundImageView:(_TVImageView *)arg1 ;
-(BOOL)_hasBackgroundImage;
-(BOOL)_hasImage;
-(void)setTextContentView:(id)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(void)setImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(void)setBackgroundImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(void)setImageView:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2 ;
-(CGSize)_imageSizeThatFits:(CGSize)arg1 ;
-(BOOL)hasDisclaimerText;
-(void)setHasDisclaimerText:(BOOL)arg1 ;
-(_TVImageView *)imagesViewDefaultState;
-(void)setImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)imagesViewHighlightedState;
-(_TVImageView *)backgroundImagesViewDefaultState;
-(void)setBackgroundImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)backgroundImagesViewHighlightedState;
-(void)_configureWithLayout:(id)arg1 ;
@end
