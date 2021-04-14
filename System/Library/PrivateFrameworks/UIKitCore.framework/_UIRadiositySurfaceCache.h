/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface _UIRadiositySurfaceCache : NSObject {

	NSObject*<OS_dispatch_semaphore> _dispatchSemaphore;
	NSMutableArray* _surfaces;

}
-(id)initWithDimension:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(id)_popSurface;
-(void)_pushSurface:(id)arg1 ;
@end

