/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface IMEventListener : NSObject {

	BOOL _willRepeat;
	double _timerStart;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	double _timeListeningStarted;
	double _timeListeningStopped;
	double _timeLastEventReceived;
	double _timeout;
	unsigned long long _eventCount;
	id _target;
	/*^block*/id _completionBlock;
	/*^block*/id _willInvokeCompletion;
	/*^block*/id _didInvokeCompletion;

}

@property (assign,nonatomic) double timerStart;                                         //@synthesize timerStart=_timerStart - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (__weak) id target;                                                           //@synthesize target=_target - In the implementation block
@property (copy) id completionBlock;                                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id willInvokeCompletion;                                               //@synthesize willInvokeCompletion=_willInvokeCompletion - In the implementation block
@property (copy) id didInvokeCompletion;                                                //@synthesize didInvokeCompletion=_didInvokeCompletion - In the implementation block
@property (assign) double timeout;                                                      //@synthesize timeout=_timeout - In the implementation block
@property (getter=isListening,readonly) BOOL listening; 
@property (readonly) double timeListeningStarted;                                       //@synthesize timeListeningStarted=_timeListeningStarted - In the implementation block
@property (readonly) double timeListeningStopped;                                       //@synthesize timeListeningStopped=_timeListeningStopped - In the implementation block
@property (readonly) double timeLastEventReceived;                                      //@synthesize timeLastEventReceived=_timeLastEventReceived - In the implementation block
@property (readonly) double elapsedWaitingTime; 
@property (readonly) unsigned long long eventCount;                                     //@synthesize eventCount=_eventCount - In the implementation block
@property (assign,nonatomic) BOOL willRepeat;                                           //@synthesize willRepeat=_willRepeat - In the implementation block
+(id)_mutableListenerDictionary;
+(id)allListeners;
+(id)eventListener;
+(id)eventListenerWithNotificationName:(id)arg1 object:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)_reset;
-(void)_startListening;
-(id)completionBlock;
-(void)reset;
-(double)timeout;
-(void)startListening;
-(void)stopListening;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(unsigned long long)eventCount;
-(BOOL)isListening;
-(void)_stopListening;
-(void)_cancelTimeoutTimer;
-(id)willInvokeCompletion;
-(id)createResult:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(id)didInvokeCompletion;
-(void)_invokeCompletion:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)willStartListening;
-(void)_addToListeners;
-(void)_startTimeoutTimerIfNeeded;
-(void)_removeFromListeners;
-(void)willStopListening;
-(void)willReset;
-(double)timerStart;
-(void)_handleTimeout:(id)arg1 ;
-(void)startListeningForEventTarget:(id)arg1 sendStartingEvent:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dispatchStartEventBlock:(/*^block*/id)arg1 ;
-(void)waitForCompletion;
-(void)startListeningForEventTarget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)timeListeningStarted;
-(double)timeListeningStopped;
-(double)timeLastEventReceived;
-(double)elapsedWaitingTime;
-(void)_didReceiveEvent:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)setTimerStart:(double)arg1 ;
-(void)setWillInvokeCompletion:(id)arg1 ;
-(void)setDidInvokeCompletion:(id)arg1 ;
-(BOOL)willRepeat;
-(void)setWillRepeat:(BOOL)arg1 ;
@end

