/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface ABCPeriodicMaintenanceActivity : NSObject {

	NSMutableArray* _activities;
	unsigned long long _nextActivityIndex;

}
+(id)sharedInstance;
+(void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
+(const char*)periodicActivityID;
+(long long)periodicActivityInterval;
-(id)init;
-(void)dealloc;
-(void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(/*^block*/id)arg3 ;
-(void)_registerPeriodicMaintenanceActivity;
-(void)_handleActivityRun:(id)arg1 ;
@end

