/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_tcp_listener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableArray, NSObject;

@interface NSNetServicesInternal : NSObject {

	NSMutableArray* _monitors;
	NSObject*<OS_tcp_listener> _listener;
	CFRunLoopRef _scheduledRunLoop;
	CFStringRef _scheduledMode;

}
-(void)dealloc;
@end

