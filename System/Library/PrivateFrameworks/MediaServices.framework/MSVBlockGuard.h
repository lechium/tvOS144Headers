/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, MSVTimer;

@interface MSVBlockGuard : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _disarmed;
	BOOL _didTimeout;
	MSVTimer* _timeoutTimer;
	/*^block*/id _interruptionHandler;

}
-(id)init;
-(void)dealloc;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithTimeout:(double)arg1 interruptionHandler:(/*^block*/id)arg2 ;
-(void)_interruptWithReason:(long long)arg1 ;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
-(BOOL)disarm;
@end

