/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowHostingSceneSafeAreaInsetsSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsSafeAreaInsetsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(id)sceneSettingsSafeAreaInsetsDiffInspector;
-(void)_updateSafeAreaInsetsWithSettingsObserverContext:(/*function pointer*/void*)arg1 windowHostingScene:(id)arg2 transitionContext:(id)arg3 ;
@end

