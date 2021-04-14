/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSError, HMFActivity, HAP2PropertyLock;

@interface HAP2AsynchronousOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	BOOL _cancelled;
	NSError* _error;
	HMFActivity* _activity;
	HAP2PropertyLock* _propertyLock;

}

@property (getter=isExecuting,nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                         //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finish;
-(void)cancelWithError:(id)arg1 ;
-(HMFActivity *)activity;
-(void)finishWithError:(id)arg1 ;
-(id)initWithName:(id)arg1 optionalActivity:(id)arg2 ;
-(id)initWithName:(id)arg1 activity:(id)arg2 ;
@end

