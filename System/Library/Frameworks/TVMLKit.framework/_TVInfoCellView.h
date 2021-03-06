/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, NSString;

@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable> {

	BOOL _headerOnLeading;
	UIView* _headerContentView;
	NSArray* _dataViews;
	double _headerWidth;
	double _headerMaxWidth;
	double _headerMinWidth;
	double _normalizedHeaderWidth;
	UIEdgeInsets _headerMargin;

}

@property (nonatomic,retain) UIView * headerContentView;                //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                       //@synthesize dataViews=_dataViews - In the implementation block
@property (assign,nonatomic) BOOL headerOnLeading;                      //@synthesize headerOnLeading=_headerOnLeading - In the implementation block
@property (assign,nonatomic) double headerWidth;                        //@synthesize headerWidth=_headerWidth - In the implementation block
@property (assign,nonatomic) double headerMaxWidth;                     //@synthesize headerMaxWidth=_headerMaxWidth - In the implementation block
@property (assign,nonatomic) double headerMinWidth;                     //@synthesize headerMinWidth=_headerMinWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;                 //@synthesize headerMargin=_headerMargin - In the implementation block
@property (assign,nonatomic) double normalizedHeaderWidth;              //@synthesize normalizedHeaderWidth=_normalizedHeaderWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(UIView *)headerContentView;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setHeaderWidth:(double)arg1 ;
-(void)setHeaderMaxWidth:(double)arg1 ;
-(void)setHeaderMinWidth:(double)arg1 ;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(void)setDataViews:(NSArray *)arg1 ;
-(void)setHeaderOnLeading:(BOOL)arg1 ;
-(double)headerWidth;
-(double)headerMaxWidth;
-(double)headerMinWidth;
-(double)normalizedHeaderWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 withHeaderWidth:(double)arg2 ;
-(NSArray *)dataViews;
-(double)minimumHeaderWidth;
-(BOOL)headerOnLeading;
-(UIEdgeInsets)headerMargin;
-(void)setNormalizedHeaderWidth:(double)arg1 ;
@end

