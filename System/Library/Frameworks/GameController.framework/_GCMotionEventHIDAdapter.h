/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCMotionEventSource.h>

@protocol _GCHIDEventSource;
@class NSArray, NSString;

@interface _GCMotionEventHIDAdapter : NSObject <_GCMotionEventSource> {

	id<_GCHIDEventSource> _HIDEventSource;
	id _HIDEventObservation;
	NSArray* _observers;

}

@property (nonatomic,retain) id<_GCHIDEventSource> HIDEventSource;              //@synthesize HIDEventSource=_HIDEventSource - In the implementation block
@property (nonatomic,retain) id HIDEventObservation;                            //@synthesize HIDEventObservation=_HIDEventObservation - In the implementation block
@property (copy) NSArray * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSArray *)observers;
-(void)setObservers:(NSArray *)arg1 ;
-(id)observeMotionEvents:(/*^block*/id)arg1 ;
-(id)initWithSource:(id)arg1 service:(id)arg2 ;
-(id<_GCHIDEventSource>)HIDEventSource;
-(void)setHIDEventSource:(id<_GCHIDEventSource>)arg1 ;
-(id)HIDEventObservation;
-(void)setHIDEventObservation:(id)arg1 ;
@end

