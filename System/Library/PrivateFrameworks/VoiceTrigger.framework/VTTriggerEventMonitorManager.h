/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface VTTriggerEventMonitorManager : NSObject {

	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)notifyVoiceTrigger;
-(void)notifyEarlyDetect;
@end

