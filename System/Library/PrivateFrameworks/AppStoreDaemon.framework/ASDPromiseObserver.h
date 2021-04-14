/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASDTaskScheduler;
@interface ASDPromiseObserver : NSObject {

	/*^block*/id _valueBlock;
	/*^block*/id _errorBlock;
	id<ASDTaskScheduler> _scheduler;

}

@property (readonly) id valueBlock;                               //@synthesize valueBlock=_valueBlock - In the implementation block
@property (readonly) id errorBlock;                               //@synthesize errorBlock=_errorBlock - In the implementation block
@property (readonly) id<ASDTaskScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
-(id<ASDTaskScheduler>)scheduler;
-(id)errorBlock;
-(id)valueBlock;
-(id)initWithValueBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
-(void)notifyResolvedWithValue:(id)arg1 ;
-(void)notifyRejectedWithError:(id)arg1 ;
@end
