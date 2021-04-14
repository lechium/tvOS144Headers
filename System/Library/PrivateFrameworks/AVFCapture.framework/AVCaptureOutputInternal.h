/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class NSObject, AVCaptureSession, NSString, NSMutableArray;

@interface AVCaptureOutputInternal : NSObject {

	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;
	AVCaptureSession* session;
	NSString* sinkID;
	NSMutableArray* connections;
	int changeSeed;
	CGAffineTransform metadataTransform;
	double rollAdjustment;
	BOOL physicallyMirrorsVideo;

}
-(id)init;
-(void)dealloc;
@end
