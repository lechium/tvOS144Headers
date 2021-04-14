/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScene, UIApplicationSceneSettings;

@interface _UISceneLifecycleMultiplexer : NSObject {

	UIScene* _uiSceneOfRecord;
	UIApplicationSceneSettings* _transitionalLifecycleState;
	struct {
		unsigned completedLaunch : 1;
		unsigned activatedOnce : 1;
	}  _multiplexerFlags;

}

@property (nonatomic,readonly) BOOL activatedOnce; 
@property (nonatomic,readonly) BOOL lifecycleWantsUnnecessaryDelayForSceneDelivery; 
@property (nonatomic,readonly) long long applicationState; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) BOOL suspendedEventsOnly; 
@property (nonatomic,readonly) BOOL suspendedUnderLock; 
@property (nonatomic,readonly) BOOL runningInTaskSwitcher; 
+(id)sharedInstance;
+(id)mostActiveScene;
+(id)_mostActiveSceneIncludingInternal:(BOOL)arg1 withTest:(/*^block*/id)arg2 ;
+(long long)_compareLifecycleStateOfScene:(id)arg1 toScene:(id)arg2 ;
+(id)mostActiveSceneWithTest:(/*^block*/id)arg1 ;
+(id)_mostActiveSceneForApplicationState;
+(id)mostActiveWindowSceneOnScreen:(id)arg1 ;
+(void)configureInitialDeactivationReasons:(unsigned long long)arg1 ;
-(BOOL)isActive;
-(long long)applicationState;
-(BOOL)isTrackingScene:(id)arg1 ;
-(void)uiScene:(id)arg1 transitionedFromState:(id)arg2 withTransitionContext:(id)arg3 ;
-(id)initForAppSingleton:(id)arg1 ;
-(BOOL)activatedOnce;
-(void)_evalTransitionToSettings:(id)arg1 fromSettings:(id)arg2 forceExit:(BOOL)arg3 withTransitionStore:(SCD_Struct_UI31)arg4 ;
-(void)_globalTestRelatedActivationActionsForFirstActivation:(BOOL)arg1 foreground:(BOOL)arg2 interfaceStyle:(long long)arg3 transitionContext:(id)arg4 ;
-(BOOL)lifecycleWantsUnnecessaryDelayForSceneDelivery;
-(void)completeApplicationLaunchWithFBSScene:(id)arg1 transitionContext:(id)arg2 ;
-(void)_scheduleFirstCommit;
-(BOOL)_prepareForClientSuspensionWithScene:(id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 withApplicationOfDeactivationReasons:(unsigned long long)arg2 fromReasons:(unsigned long long)arg3 ;
-(BOOL)suspendedEventsOnly;
-(BOOL)suspendedUnderLock;
-(BOOL)runningInTaskSwitcher;
-(void)noteApplicationLaunchCompleted;
-(void)forceExitWithTransitionContext:(id)arg1 scene:(id)arg2 ;
-(void)collectBackingStores;
@end

