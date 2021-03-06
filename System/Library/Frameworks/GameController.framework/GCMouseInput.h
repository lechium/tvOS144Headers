/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>

@class NSMutableArray, UIWindow, GCDeviceCursor, GCControllerButtonInput, NSArray;

@interface GCMouseInput : GCPhysicalInputProfile {

	BOOL _isActive;
	BOOL _wasInitialized;
	long long _buttons;
	NSMutableArray* _auxiliaryButtons;
	UIWindow* _window;
	/*^block*/id _mouseMovedHandler;
	GCDeviceCursor* _scroll;
	GCControllerButtonInput* _leftButton;
	GCControllerButtonInput* _rightButton;
	GCControllerButtonInput* _middleButton;

}

@property (nonatomic,copy) id mouseMovedHandler;                                    //@synthesize mouseMovedHandler=_mouseMovedHandler - In the implementation block
@property (nonatomic,readonly) GCDeviceCursor * scroll;                             //@synthesize scroll=_scroll - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * leftButton;                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * rightButton;               //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * middleButton;              //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,readonly) NSArray * auxiliaryButtons; 
-(id)name;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(id)initWithController:(id)arg1 ;
-(GCControllerButtonInput *)leftButton;
-(GCControllerButtonInput *)rightButton;
-(id)productCategory;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(void)_handleEventImpl:(IOHIDEventRef)arg1 ;
-(BOOL)shouldAcceptMouseEvents;
-(GCDeviceCursor *)scroll;
-(GCControllerButtonInput *)middleButton;
-(BOOL)_handleEventRec:(IOHIDEventRef)arg1 ;
-(void)_handleDigitizerEvent:(CGPoint)arg1 ;
-(void)_handlePointerEvent:(CGPoint)arg1 ;
-(void)_handleButtonEvent:(long long)arg1 ;
-(void)_handleScrollEvent:(CGPoint)arg1 ;
-(void)_fireMouseMovedWithQueue:(id)arg1 deltaX:(float)arg2 deltaY:(float)arg3 ;
-(NSArray *)auxiliaryButtons;
-(long long)_mouseButtons;
-(id)mouseMovedHandler;
-(void)setMouseMovedHandler:(id)arg1 ;
@end

