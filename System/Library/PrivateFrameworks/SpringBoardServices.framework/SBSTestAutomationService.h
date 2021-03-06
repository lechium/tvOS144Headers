/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
-(void)stashSwitcherModelToPath:(id)arg1 ;
-(void)loadStashedSwitcherModelFromPath:(id)arg1 ;
-(void)suspendAllDisplays;
-(void)setAlertsEnabled:(BOOL)arg1 ;
-(void)setHiddenFeaturesEnabled:(BOOL)arg1 ;
-(void)setIdleTimerEnabled:(BOOL)arg1 ;
-(void)setOrientationLockEnabled:(BOOL)arg1 ;
-(void)setMallocStackLoggingEnabled:(BOOL)arg1 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 ;
-(void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addWidgetsToEachPage;
-(void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3 ;
@end

