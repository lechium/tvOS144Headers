/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface TRILogger : NSObject {

	int _projectId;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}
-(id)init;
-(void)logEvent:(id)arg1 ;
-(id)initWithProjectId:(int)arg1 ;
-(unsigned long long)_incrementedLogEventCount;
-(void)_dispatchLogEvent:(id)arg1 ;
-(void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3 ;
-(void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3 ;
-(id)messageWithOneofField:(id)arg1 withName:(id)arg2 ;
-(void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(char*)arg4 ;
-(void)logWithTrackingId:(id)arg1 message:(id)arg2 ;
-(void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 ;
-(void)logWithTrackingId:(id)arg1 metric:(id)arg2 ;
@end

