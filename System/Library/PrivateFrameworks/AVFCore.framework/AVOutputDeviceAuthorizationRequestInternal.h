/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOutputDeviceAuthorizationRequestInternal : NSObject {

	id<AVOutputDeviceAuthorizationRequestImpl> impl;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long status;
	NSError* error;

}
@end

