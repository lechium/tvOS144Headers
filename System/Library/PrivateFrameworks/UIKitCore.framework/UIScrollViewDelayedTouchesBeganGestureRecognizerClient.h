/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
@required
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
-(BOOL)delaysContentTouches;
-(double)_touchDelayForScrollDetection;
-(double)_scrollHysteresis;

@end

