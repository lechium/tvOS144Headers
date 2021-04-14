/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libMobileGestaltExtensions.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MGNotificationRegistration : NSObject {

	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	BOOL _deliverNotifications;
	NSMutableDictionary* _requestedRegistrations;

}
-(void)dealloc;
-(void)cancel;
-(BOOL)start;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)registerForNotification:(int)arg1 argument:(const char*)arg2 question:(id)arg3 ;
@end

