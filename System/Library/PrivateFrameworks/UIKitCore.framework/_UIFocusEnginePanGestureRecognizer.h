/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIFocusEnginePanGestureTouchObserver;
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer {

	id<_UIFocusEnginePanGestureTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_UIFocusEnginePanGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<_UIFocusEnginePanGestureTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchObserver:(id<_UIFocusEnginePanGestureTouchObserver>)arg1 ;
-(id<_UIFocusEnginePanGestureTouchObserver>)touchObserver;
@end

