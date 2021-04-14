/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@interface VNCanceller : NSObject {

	/*^block*/id _signallingBlock;
	os_unfair_lock_s _lock;
	BOOL _signalled;

}
-(id)init;
-(void)reset;
-(void)_releaseSignallingBlock;
-(BOOL)tryToPerformBlock:(/*^block*/id)arg1 usingSignallingBlock:(/*^block*/id)arg2 ;
-(void)signalCancellation;
-(BOOL)wasSignalled;
@end

