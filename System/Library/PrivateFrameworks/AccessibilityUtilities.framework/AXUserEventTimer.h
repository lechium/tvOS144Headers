/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface AXUserEventTimer : NSObject {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSHashTable* _assertions;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopTrackingPoorMansAssertion:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg1 ;
-(void)userEventOccurred;
-(BOOL)_canUseIdleTimerServices;
-(id)acquireAssertionToDisableIdleTimerWithReason:(id)arg1 ;
@end

