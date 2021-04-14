/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class NSMutableDictionary;

@interface _WKTouchEventGenerator : NSObject {

	IOHIDEventSystemClientRef _ioSystemClient;
	SCD_Struct_WK6 _activePoints[5];
	unsigned long long _activePointCount;
	NSMutableDictionary* _eventCallbacks;

}

@property (nonatomic,retain) NSMutableDictionary * eventCallbacks;              //@synthesize eventCallbacks=_eventCallbacks - In the implementation block
+(long long)nextEventCallbackID;
+(id)sharedTouchEventGenerator;
-(id)init;
-(void)dealloc;
-(IOHIDEventRef)_createIOHIDEventType:(int)arg1 ;
-(BOOL)_sendHIDEvent:(IOHIDEventRef)arg1 ;
-(void)touchDownAtPoints:(CGPoint*)arg1 touchCount:(unsigned long long)arg2 ;
-(void)liftUpAtPoints:(CGPoint*)arg1 touchCount:(unsigned long long)arg2 ;
-(void)liftUp:(CGPoint)arg1 touchCount:(unsigned long long)arg2 ;
-(void)_updateTouchPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)touchDown:(CGPoint)arg1 touchCount:(unsigned long long)arg2 ;
-(BOOL)_sendMarkerHIDEventWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)moveToPoints:(CGPoint*)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3 ;
-(void)touchDown:(CGPoint)arg1 ;
-(void)liftUp:(CGPoint)arg1 ;
-(void)touchDown:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)liftUp:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)moveToPoint:(CGPoint)arg1 duration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)receivedHIDEvent:(IOHIDEventRef)arg1 ;
-(NSMutableDictionary *)eventCallbacks;
-(void)setEventCallbacks:(NSMutableDictionary *)arg1 ;
@end
