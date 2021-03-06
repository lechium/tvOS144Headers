/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSharedEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTLSharedEventListenerInternal : MTLSharedEventListener {

	IONotificationPortRef _notificationPort;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(id)init;
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_notifyEventPort:(unsigned)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)dispatchQueue;
@end

