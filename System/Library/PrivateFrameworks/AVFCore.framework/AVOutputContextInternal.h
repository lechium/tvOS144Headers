/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AVOutputContextImpl, AVOutputContextCommunicationChannelDelegate;
@class NSObject;

@interface AVOutputContextInternal : NSObject {

	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	id<AVOutputContextImpl> impl;
	unsigned long long outputDeviceFeatures;
	int applicationPID;
	BOOL applicationPIDWasSet;
	id<AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;

}
@end

