/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFPriorityEnqueuing
@required
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1;
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
-(void)suspendScheduling;
-(void)resumeScheduling;

@end

