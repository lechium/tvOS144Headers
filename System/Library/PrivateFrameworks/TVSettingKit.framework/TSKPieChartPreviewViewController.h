/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, TSKPieChartView, UILabel;

@interface TSKPieChartPreviewViewController : UIViewController {

	NSArray* _pieChartItems;
	NSString* _auxiliaryMessage;
	TSKPieChartView* _pieChartView;
	NSArray* _dots;
	NSArray* _labels;
	UILabel* _auxiliaryLabel;

}

@property (nonatomic,retain) TSKPieChartView * pieChartView;              //@synthesize pieChartView=_pieChartView - In the implementation block
@property (nonatomic,retain) NSArray * dots;                              //@synthesize dots=_dots - In the implementation block
@property (nonatomic,retain) NSArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UILabel * auxiliaryLabel;                    //@synthesize auxiliaryLabel=_auxiliaryLabel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pieChartItems;              //@synthesize pieChartItems=_pieChartItems - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMessage;                   //@synthesize auxiliaryMessage=_auxiliaryMessage - In the implementation block
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithPieChartItems:(id)arg1 ;
-(void)applyValues:(BOOL)arg1 ;
-(id)itemWithTitle:(id)arg1 ;
-(void)setAuxiliaryMessage:(NSString *)arg1 ;
-(NSArray *)pieChartItems;
-(NSString *)auxiliaryMessage;
-(TSKPieChartView *)pieChartView;
-(void)setPieChartView:(TSKPieChartView *)arg1 ;
-(NSArray *)dots;
-(void)setDots:(NSArray *)arg1 ;
-(UILabel *)auxiliaryLabel;
-(void)setAuxiliaryLabel:(UILabel *)arg1 ;
@end
