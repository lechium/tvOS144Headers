/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHImageDecoder.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface PHImageIODecoder : PHImageDecoder {

	NSObject*<OS_dispatch_queue> _pendingRequestQueue;
	NSObject*<OS_dispatch_queue> _activeRequestQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSemaphore;

}
+(long long)maxConcurrentDecodeCount;
+(id)sharedDecoder;
+(void)setMaxConcurrentDecodeCount:(long long)arg1 ;
-(id)init;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 existingRequestHandle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1 ;
@end

