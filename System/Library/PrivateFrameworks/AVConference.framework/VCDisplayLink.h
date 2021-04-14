/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol OS_dispatch_semaphore;
@class CADisplayLink, NSRunLoop, NSObject;

@interface VCDisplayLink : VCObject {

	CADisplayLink* _caDisplayLink;
	tagVCRealTimeThread* _thread;
	NSRunLoop* _runLoop;
	unsigned long long _state;
	NSObject*<OS_dispatch_semaphore> _waitToRunSemaphore;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)activate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)deactivate;
-(BOOL)ensureDisplayIsReady;
-(void)handleWaitToRunTimeout;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadPriority:(unsigned)arg3 threadOptions:(unsigned)arg4 threadIdentifier:(id)arg5 ;
-(void)runDisplayLinkThreadWithStopRequested:(BOOL*)arg1 ;
@end

