/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPUserNotification : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackInvocationQueue;
	/*^block*/id _willShowNotificationHandler;
	id strongSelf;
	BOOL _isShowing;
	CFRunLoopSourceRef _runLoopSource;
	NSMutableArray* _showingCompletionHandlers;
	CFUserNotificationRef _cfUserNotification;

}

@property (nonatomic,readonly) CFUserNotificationRef cfUserNotification;              //@synthesize cfUserNotification=_cfUserNotification - In the implementation block
@property (nonatomic,copy) id willShowNotificationHandler; 
+(id)_userNotificationForCFUserNotification:(CFUserNotificationRef)arg1 ;
+(void)_setUserNotification:(id)arg1 forCFUserNotification:(CFUserNotificationRef)arg2 ;
+(id)_userNotificationConversionAccessQueue;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCFUserNotification:(CFUserNotificationRef)arg1 ;
-(id)willShowNotificationHandler;
-(void)setWillShowNotificationHandler:(id)arg1 ;
-(void)_cancelSynchronously:(BOOL)arg1 ;
-(void)_didReceiveResponseWithFlags:(unsigned long long)arg1 ;
-(CFUserNotificationRef)cfUserNotification;
@end

