/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSString;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding> {

	double _deviceLaunchScale;
	double _deviceResumeScale;
	double _additionalFirstPartyScale;
	BOOL _enableThirdPartyPre9;
	int _daNotificationToken;
	NSDictionary* _watchdogPolicyExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPolicy;
+(double)_scaleForGestaltKey:(CFStringRef)arg1 ;
+(double)_defaultLaunchScale;
+(double)_defaultResumeScale;
+(double)_defaultFirstPartyAdditionalScale;
-(id)init;
-(void)dealloc;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
-(void)_queue_reloadDefaultSettings;
-(double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(BOOL)arg2 ;
@end

