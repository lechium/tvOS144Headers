/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __CFN_CoreSchedulingSetRunnable : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	/*^block*/id _setup;
	opaque_pthread_t* _tid;
	CFRunLoopRef _rl;
	long long _performCount;
	CFRunLoopSourceRef _pinnedSource;
	long long _count[5];

}
+(void)_run:(id)arg1 ;
-(void)dealloc;
@end

