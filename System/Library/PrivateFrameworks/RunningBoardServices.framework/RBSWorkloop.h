/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_workloop;
@class NSObject;

@interface RBSWorkloop : NSObject {

	NSObject*<OS_dispatch_workloop> _calloutWorkloop;
	NSObject*<OS_dispatch_workloop> _backgroundWorkloop;
	NSObject*<OS_dispatch_workloop> _syncingWorkloop;

}
+(void)performBackgroundWork:(/*^block*/id)arg1 ;
+(id)sharedBackgroundWorkloop;
+(id)createBackgroundQueue:(id)arg1 ;
+(id)createSyncingQueue:(id)arg1 ;
+(void)performBackgroundWorkWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
+(id)sharedCalloutWorkloop;
+(id)createCalloutQueue:(id)arg1 ;
+(void)performCallout:(/*^block*/id)arg1 ;
+(void)performCalloutWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
@end
