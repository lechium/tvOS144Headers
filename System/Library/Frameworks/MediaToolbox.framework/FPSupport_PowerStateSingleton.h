/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPSupport_PowerStateSingleton : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQ;

}
+(id)sharedFPSupportPowerStateSingleton;
-(id)init;
-(void)dealloc;
-(void)postNotification;
-(void)_didChangePowerState:(id)arg1 ;
@end
