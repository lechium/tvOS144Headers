/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet;

@interface UISnapshottingAssertionManager : NSObject {

	opaque_pthread_mutex_t lock;
	NSMutableSet* _heldAssertions;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)withLock:(/*^block*/id)arg1 ;
-(void)relinquishAssertion:(id)arg1 ;
-(id)acquireNewAssertion;
-(void)executeIfNoActiveAssertions:(/*^block*/id)arg1 ;
@end

