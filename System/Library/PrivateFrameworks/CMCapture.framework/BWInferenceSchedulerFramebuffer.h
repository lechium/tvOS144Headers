/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class BWInferenceSchedulerJobList, BWInferenceSchedulerGraph;

@interface BWInferenceSchedulerFramebuffer : NSObject {

	os_unfair_lock_s framebufferLock;
	Ai failedJobStatus;
	BWInferenceSchedulerJobList* _jobs;
	BWInferenceSchedulerGraph* _graph;

}

@property (nonatomic,readonly) BWInferenceSchedulerJobList * jobs;              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,readonly) BWInferenceSchedulerGraph * graph;               //@synthesize graph=_graph - In the implementation block
-(void)dealloc;
-(BWInferenceSchedulerGraph *)graph;
-(BWInferenceSchedulerJobList *)jobs;
-(id)initWithGraph:(id)arg1 jobList:(id)arg2 ;
-(void)resetJobStatesWithPreventionBlock:(/*^block*/id)arg1 ;
@end
