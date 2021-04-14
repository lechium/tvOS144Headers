/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class EAAccessory, EASession, NSMutableData, NSCondition, NSRecursiveLock, NSObject;

@interface EAInputStream : NSInputStream {

	id _delegate;
	EAAccessory* _accessory;
	EASession* _session;
	int _sock;
	BOOL _useSocket;
	NSMutableData* _inputFromAccData;
	NSCondition* _inputFromAccCondition;
	NSRecursiveLock* _statusLock;
	NSRecursiveLock* _runloopLock;
	NSObject*<OS_dispatch_queue> _inputFromAccQueue;
	NSObject*<OS_dispatch_source> _sockListenSource;
	char* _inputFromAccBuffer;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasNewBytesAvailable;
	BOOL _isAtEndEventSent;
	unsigned long long _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	int _zeroBytesReadCount;

}

@property (assign) int zeroBytesReadCount;              //@synthesize zeroBytesReadCount=_zeroBytesReadCount - In the implementation block
-(void)dealloc;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(void)_streamEventTrigger;
-(void)_scheduleCallback;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)openCompleted;
-(void)_performAtEndOfStreamValidation;
-(id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3 ;
-(id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2 ;
-(void)endStream;
-(void)processIncomingAccessoryData:(id)arg1 ;
-(int)zeroBytesReadCount;
-(void)setZeroBytesReadCount:(int)arg1 ;
@end

