/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSArray, RBEventQueueEvent;

@interface RBEventQueue : NSObject {

	NSMutableArray* _eventQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _eventTimer;
	BOOL _isProcessingEvents;
	BOOL _inModifyBlock;
	BOOL _dirtyDuringModify;

}

@property (nonatomic,readonly) NSArray * events;                           //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) RBEventQueueEvent * nextEvent; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)description;
-(unsigned long long)count;
-(id)initWithQueue:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
-(RBEventQueueEvent *)nextEvent;
-(void)removeEvent:(id)arg1 ;
-(void)batchModify:(/*^block*/id)arg1 ;
-(void)removeEvents:(id)arg1 ;
@end
