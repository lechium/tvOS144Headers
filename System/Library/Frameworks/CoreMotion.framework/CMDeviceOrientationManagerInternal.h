/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	os_unfair_lock_s fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject*<OS_dispatch_semaphore> fDeviceOrientationSemaphore;
	BOOL fDidSignalSemaphore;
	int fOrientationCallbackMode;
	BOOL fEnableOrientationNotification;
	Sample fLatestDeviceOrientationSample;
	Sample fLastSignificantOrientationSample;

}
-(id)init;
-(void)dealloc;
@end

