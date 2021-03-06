/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _TVInspectorCapturingViewDelegate;
@class UILabel;

@interface _TVInspectorCapturingView : UIView {

	BOOL _testingHits;
	UILabel* _descriptionLabel;
	id<_TVInspectorCapturingViewDelegate> _delegate;

}

@property (getter=isTestingHits,nonatomic,readonly) BOOL testingHits;                            //@synthesize testingHits=_testingHits - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * descriptionLabel;                                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) id<_TVInspectorCapturingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVInspectorCapturingViewDelegate>)delegate;
-(void)setDelegate:(id<_TVInspectorCapturingViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UILabel *)descriptionLabel;
-(void)didTapView:(id)arg1 ;
-(BOOL)isTestingHits;
@end

