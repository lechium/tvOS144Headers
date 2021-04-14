/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface CMPocketStateQueueBlockPair : NSObject {

	NSObject*<OS_dispatch_queue> fQueryQueue;
	/*^block*/id fQueryBlock;

}
-(void)dealloc;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)dispatchWithState:(long long)arg1 andError:(id)arg2 ;
@end

