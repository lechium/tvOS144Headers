/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_io;
@class OS_xpc_remote_channel, NSObject;

@interface OS_xpc_remote_pending_stream : NSObject {

	unsigned long long stream_id;
	OS_xpc_remote_channel* channel;
	NSObject*<OS_dispatch_io> io;
	int direction;
	/*^block*/id completion_handler;
	int error;
	OS_xpc_remote_pending_stream* link_stqe_next;

}
@end

