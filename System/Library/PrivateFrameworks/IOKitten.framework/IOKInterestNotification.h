/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, IOKInterestNotificationRef;

@interface IOKInterestNotification : NSObject {

	unsigned _object;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	IOKInterestNotificationRef* _notificationRef;

}

@property (nonatomic,copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned object;                                             //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IOKInterestNotificationRef * notificationRef;              //@synthesize notificationRef=_notificationRef - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setObject:(unsigned)arg1 ;
-(unsigned)object;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setHandler:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)handler;
-(IOKInterestNotificationRef *)notificationRef;
@end

