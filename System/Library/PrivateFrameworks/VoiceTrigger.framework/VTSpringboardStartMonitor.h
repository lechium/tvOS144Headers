/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSpringboardStartMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _isSpringBoardStarted;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(BOOL)isSpringboardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_checkSpringBoardStarted;
-(void)_didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withStarted:(BOOL)arg2 ;
-(void)_didReceiveSpringboardStartedInQueue:(BOOL)arg1 ;
@end

