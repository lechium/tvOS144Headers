/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {

	NSLock* _queueLock;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _queueSource;
	NSMutableArray* _queue;
	NSMutableArray* _brailleEventQueue;
	id _target;
	BOOL _isValid;

}
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)start;
-(id)initWithTarget:(id)arg1 ;
-(void)_processQueue;
-(void)enqueueEvent:(id)arg1 ;
@end

