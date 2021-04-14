/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSObject;

@interface PFVideoExportRangeWaitingCaller : NSObject {

	BOOL _requestedRangeIsAvailable;
	BOOL _cancelled;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSRange _requestedRange;

}

@property (retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (assign) NSRange requestedRange;                                  //@synthesize requestedRange=_requestedRange - In the implementation block
@property (assign) BOOL requestedRangeIsAvailable;                          //@synthesize requestedRangeIsAvailable=_requestedRangeIsAvailable - In the implementation block
@property (assign) BOOL cancelled;                                          //@synthesize cancelled=_cancelled - In the implementation block
+(id)waitingCallerWithRequestedRange:(NSRange)arg1 ;
-(id)init;
-(void)resume;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)waitWithTimeout:(unsigned long long)arg1 ;
-(BOOL)canResumeForRange:(NSRange)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSRange)requestedRange;
-(void)setRequestedRange:(NSRange)arg1 ;
-(BOOL)requestedRangeIsAvailable;
-(void)setRequestedRangeIsAvailable:(BOOL)arg1 ;
@end

