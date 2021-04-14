/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UILongPressGestureRecognizer.h>
#import <UIKit/UIAutoscrollDelegate.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>

@class UIScrollView, UIAutoscroll, NSString;

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollViewScrollObserver> {

	UIScrollView* _targetScrollView;
	UIAutoscroll* _autoscroll;
	UIEdgeInsets _draggingInsets;

}

@property (nonatomic,retain) UIScrollView * targetScrollView;              //@synthesize targetScrollView=_targetScrollView - In the implementation block
@property (nonatomic,retain) UIAutoscroll * autoscroll;                    //@synthesize autoscroll=_autoscroll - In the implementation block
@property (assign,nonatomic) UIEdgeInsets draggingInsets;                  //@synthesize draggingInsets=_draggingInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(long long)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelAutoscroll;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)setDraggingInsets:(UIEdgeInsets)arg1 ;
-(void)setTargetScrollView:(UIScrollView *)arg1 ;
-(void)beginAutoscrollAndUpdateDirectionIfNeeded;
-(UIAutoscroll *)autoscroll;
-(void)updateAutoscroll:(id)arg1 ;
-(void)setAutoscroll:(UIAutoscroll *)arg1 ;
-(UIScrollView *)targetScrollView;
-(int)autoscrollDirectionsForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(UIEdgeInsets)draggingInsets;
-(void)autoscrollWillNotStart;
@end

