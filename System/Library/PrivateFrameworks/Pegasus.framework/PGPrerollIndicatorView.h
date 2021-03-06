/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PGButtonViewDelegate.h>

@class PGControlsViewModel, UILabel, PGButtonView, PGDisplayLink, NSString;

@interface PGPrerollIndicatorView : UIView <PGButtonViewDelegate> {

	PGControlsViewModel* _viewModel;
	UILabel* _contentTypeLabel;
	PGButtonView* _skipPrerollButtonView;
	PGDisplayLink* _displayLink;
	CGSize _labelSize;

}

@property (nonatomic,readonly) PGControlsViewModel * viewModel;                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UILabel * contentTypeLabel;                        //@synthesize contentTypeLabel=_contentTypeLabel - In the implementation block
@property (nonatomic,readonly) PGButtonView * skipPrerollButtonView;              //@synthesize skipPrerollButtonView=_skipPrerollButtonView - In the implementation block
@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,copy) NSString * timeRemainingText; 
@property (assign,nonatomic) CGSize labelSize;                                    //@synthesize labelSize=_labelSize - In the implementation block
@property (nonatomic,readonly) PGDisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)dealloc;
-(CGSize)labelSize;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(PGDisplayLink *)displayLink;
-(void)layoutSubviews;
-(double)labelWidth;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateValues;
-(PGControlsViewModel *)viewModel;
-(void)setTimeRemainingText:(NSString *)arg1 ;
-(UILabel *)contentTypeLabel;
-(void)setLabelSize:(CGSize)arg1 ;
-(void)_layoutContentTypeLabel;
-(NSString *)timeRemainingText;
-(void)_layoutSkipPrerollButton;
-(CGAffineTransform)_subviewTransform;
-(void)buttonViewDidReceiveTouchUpInside:(id)arg1 ;
-(CGRect)buttonView:(id)arg1 imageRectForContentRect:(CGRect)arg2 proposedRect:(CGRect)arg3 ;
-(CGRect)buttonView:(id)arg1 titleRectForContentRect:(CGRect)arg2 proposedRect:(CGRect)arg3 ;
-(UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(UIEdgeInsets)arg2 ;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(PGButtonView *)skipPrerollButtonView;
@end

