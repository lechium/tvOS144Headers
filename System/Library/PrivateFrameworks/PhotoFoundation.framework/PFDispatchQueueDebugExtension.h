/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFDispatchQueueStatisticsExtension.h>

@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {

	NSMutableDictionary* _allBlockInfoByCallSite;
	unsigned long long _count;
	PFSerialQueue* _serializer;

}
-(id)description;
-(id)init;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 receivedDispatchSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAfter:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(/*^block*/id)arg3 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(/*^block*/id)arg3 ;
-(id)recordBlockInfo:(id)arg1 ;
-(Class)blockInfoClass;
-(id)_queueUsageByExecutionTimeDescription;
-(void)showQueueUsageByExecutionTime;
-(id)_queueUsageByEnqueueSiteDescription;
-(void)showQueueUsageByEnqueueSite;
@end

