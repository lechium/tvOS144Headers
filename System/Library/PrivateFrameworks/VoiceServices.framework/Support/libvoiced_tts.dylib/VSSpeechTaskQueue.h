/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSSpeechTaskProtocol, OS_dispatch_queue;
#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class NSMutableArray, NSOperation, NSObject, VSSpeechRequest;

@interface VSSpeechTaskQueue : NSObject {

	NSMutableArray* _eagerTasks;
	NSMutableArray* _speakTasks;
	NSOperation*<VSSpeechTaskProtocol> _currentTask;
	NSObject*<OS_dispatch_queue> _speakingQueue;
	VSSpeechRequest* _lastSynthesisRequest;
	unsigned long long _lastSynthesisRequestCreatedTimeStamp;
	opaque_pthread_mutexattr_t _threadMutexAttr;
	opaque_pthread_mutex_t _threadMutex;

}

@property (nonatomic,retain) NSMutableArray * eagerTasks;                                          //@synthesize eagerTasks=_eagerTasks - In the implementation block
@property (nonatomic,retain) NSMutableArray * speakTasks;                                          //@synthesize speakTasks=_speakTasks - In the implementation block
@property (nonatomic,retain) NSOperation*<VSSpeechTaskProtocol> currentTask;                       //@synthesize currentTask=_currentTask - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t threadMutex;                                   //@synthesize threadMutex=_threadMutex - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutexattr_t threadMutexAttr;                           //@synthesize threadMutexAttr=_threadMutexAttr - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> speakingQueue;                           //@synthesize speakingQueue=_speakingQueue - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * lastSynthesisRequest;                               //@synthesize lastSynthesisRequest=_lastSynthesisRequest - In the implementation block
@property (assign,nonatomic) unsigned long long lastSynthesisRequestCreatedTimeStamp;              //@synthesize lastSynthesisRequestCreatedTimeStamp=_lastSynthesisRequestCreatedTimeStamp - In the implementation block
+(id)sharedQueue;
-(id)init;
-(NSOperation*<VSSpeechTaskProtocol>)currentTask;
-(void)setCurrentTask:(NSOperation*<VSSpeechTaskProtocol>)arg1 ;
-(void)addTask:(id)arg1 ;
-(void)_cancelTask:(id)arg1 ;
-(void)cancelCurrentTask;
-(void)suspendCurrentTask;
-(void)resumeCurrentTask;
-(void)spinNextTask;
-(void)setLastSynthesisRequest:(VSSpeechRequest *)arg1 ;
-(NSMutableArray *)eagerTasks;
-(void)setEagerTasks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)speakTasks;
-(void)setSpeakTasks:(NSMutableArray *)arg1 ;
-(opaque_pthread_mutex_t)threadMutex;
-(void)setThreadMutex:(opaque_pthread_mutex_t)arg1 ;
-(opaque_pthread_mutexattr_t)threadMutexAttr;
-(void)setThreadMutexAttr:(opaque_pthread_mutexattr_t)arg1 ;
-(NSObject*<OS_dispatch_queue>)speakingQueue;
-(void)setSpeakingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(VSSpeechRequest *)lastSynthesisRequest;
-(unsigned long long)lastSynthesisRequestCreatedTimeStamp;
-(void)setLastSynthesisRequestCreatedTimeStamp:(unsigned long long)arg1 ;
@end

