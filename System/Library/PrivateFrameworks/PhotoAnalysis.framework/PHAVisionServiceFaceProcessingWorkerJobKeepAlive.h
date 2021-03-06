/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PHAWorkerJob;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PHAWorkerJob* _job;
	BOOL _continueReporting;

}
-(void)start;
-(void)stop;
-(id)initWithJob:(id)arg1 ;
-(id)job;
-(void)_extendTimeoutAndDispatchAgainIfNecessary;
@end

