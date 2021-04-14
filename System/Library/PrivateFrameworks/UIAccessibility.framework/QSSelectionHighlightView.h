/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView {

	BOOL _sentenceHighlight;
	NSArray* _highlightSelectionRects;
	UIColor* _selectionColor;
	UIColor* _underlineColor;

}

@property (nonatomic,retain) NSArray * highlightSelectionRects;              //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                       //@synthesize selectionColor=_selectionColor - In the implementation block
@property (nonatomic,retain) UIColor * underlineColor;                       //@synthesize underlineColor=_underlineColor - In the implementation block
@property (assign,nonatomic) BOOL sentenceHighlight;                         //@synthesize sentenceHighlight=_sentenceHighlight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)sentenceHighlight;
-(UIColor *)underlineColor;
-(NSArray *)highlightSelectionRects;
-(UIColor *)selectionColor;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(void)setUnderlineColor:(UIColor *)arg1 ;
-(void)setSentenceHighlight:(BOOL)arg1 ;
@end
