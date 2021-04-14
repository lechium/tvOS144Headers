/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface CSSiriRestrictionOnLockScreenMonitor : CSEventMonitor <MCProfileConnectionObserver> {

	BOOL _isRestricted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isRestricted;
-(void)_stopMonitoring;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_checkSiriRestrictedOnLockScreen;
-(void)_notifyObserver:(id)arg1 withRestricted:(BOOL)arg2 ;
-(void)_didReceiveRestrictionChanged:(BOOL)arg1 ;
-(void)_didReceiveRestrictionChangedInQueue:(BOOL)arg1 ;
@end

