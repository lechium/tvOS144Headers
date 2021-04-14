/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CMMotionAlarmManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSMutableDictionary* fAlarms;
	BOOL fListening;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startListeners;
-(void)_stopListeners;
-(void)_handleAlarmFire:(id)arg1 ;
-(BOOL)_registerAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_launchRemoteAppWithError:(id*)arg1 delegate:(id)arg2 ;
@end

