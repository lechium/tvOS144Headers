/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIInputSwitcherGestureState : NSObject {

	BOOL _didMoveBeyondThreshold;
	BOOL _hideSwitcher;
	double _touchDown;
	double _lastSeenKeyboardTouchDown;
	CGPoint _firstReferencePoint;

}

@property (assign,nonatomic) BOOL didMoveBeyondThreshold;                   //@synthesize didMoveBeyondThreshold=_didMoveBeyondThreshold - In the implementation block
@property (assign,nonatomic) BOOL hideSwitcher;                             //@synthesize hideSwitcher=_hideSwitcher - In the implementation block
@property (assign,nonatomic) CGPoint firstReferencePoint;                   //@synthesize firstReferencePoint=_firstReferencePoint - In the implementation block
@property (assign,nonatomic) double touchDown;                              //@synthesize touchDown=_touchDown - In the implementation block
@property (assign,nonatomic) double lastSeenKeyboardTouchDown;              //@synthesize lastSeenKeyboardTouchDown=_lastSeenKeyboardTouchDown - In the implementation block
-(double)touchDown;
-(void)setTouchDown:(double)arg1 ;
-(BOOL)hideSwitcher;
-(double)lastSeenKeyboardTouchDown;
-(BOOL)gestureConflictsWithTypingWindow;
-(BOOL)didMoveBeyondThreshold;
-(void)setDidMoveBeyondThreshold:(BOOL)arg1 ;
-(void)setHideSwitcher:(BOOL)arg1 ;
-(CGPoint)firstReferencePoint;
-(void)setFirstReferencePoint:(CGPoint)arg1 ;
-(void)setLastSeenKeyboardTouchDown:(double)arg1 ;
@end

