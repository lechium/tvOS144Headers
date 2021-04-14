/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RETrainingScheduler.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface REOpportunisticTrainingScheduler : RETrainingScheduler {

	NSObject*<OS_xpc_object> _criteria;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	BOOL _scheduled;

}
-(id)init;
-(void)dealloc;
-(void)performTask:(/*^block*/id)arg1 ;
-(void)cancelPendindTasks;
-(void)_queue_unschedule;
-(void)_performAllTasks;
@end

