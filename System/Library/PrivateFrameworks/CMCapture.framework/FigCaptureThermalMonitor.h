/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCaptureThermalMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _thermalHandler;
	OpaqueFigSimpleMutexRef _thermalNotificationLock;
	float _maxTorchLevel;
	int _thermalLevel;

}

@property (readonly) float maxTorchLevel; 
@property (readonly) int thermalLevel; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(int)thermalLevel;
-(float)maxTorchLevel;
-(void)setThermalHandler:(/*^block*/id)arg1 ;
-(void)_thermalNotification:(int)arg1 ;
@end

