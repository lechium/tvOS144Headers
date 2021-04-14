/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIScrollView, IKViewElement;

@interface _TVNeedsMoreContentEvaluator : NSObject {

	UIScrollView* _scrollView;
	long long _axis;
	long long _state;
	IKViewElement* _viewElement;
	double _threshold;

}

@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double threshold;                         //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long axis;                         //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
-(long long)axis;
-(UIScrollView *)scrollView;
-(IKViewElement *)viewElement;
-(id)initWithScrollView:(id)arg1 axis:(long long)arg2 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)evaluateForState:(long long)arg1 ;
@end

