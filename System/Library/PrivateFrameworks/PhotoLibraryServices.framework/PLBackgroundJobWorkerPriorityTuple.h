/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject {

	PLBackgroundJobWorker* _worker;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLBackgroundJobWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
-(id)description;
-(unsigned long long)priority;
-(id)initWithWorker:(id)arg1 priority:(unsigned long long)arg2 ;
-(PLBackgroundJobWorker *)worker;
@end

