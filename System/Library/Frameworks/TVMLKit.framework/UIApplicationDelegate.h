/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIWindow;


@protocol UIApplicationDelegate <NSObject>
@property (nonatomic,retain) UIWindow * window; 
@optional
-(void)applicationWillResignActive:(id)arg1;
-(UIWindow *)window;
-(void)applicationWillEnterForeground:(id)arg1;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)setWindow:(id)arg1;
-(void)applicationWillTerminate:(id)arg1;
-(void)applicationDidFinishLaunching:(id)arg1;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
-(void)applicationDidReceiveMemoryWarning:(id)arg1;
-(void)applicationSignificantTimeChange:(id)arg1;
-(void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
-(void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;
-(void)application:(id)arg1 willChangeStatusBarFrame:(CGRect)arg2;
-(void)application:(id)arg1 didChangeStatusBarFrame:(CGRect)arg2;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(/*^block*/id)arg3;
-(void)applicationShouldRequestHealthAuthorization:(id)arg1;
-(id)application:(id)arg1 handlerForIntent:(id)arg2;
-(void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)applicationProtectedDataWillBecomeUnavailable:(id)arg1;
-(void)applicationProtectedDataDidBecomeAvailable:(id)arg1;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
-(BOOL)application:(id)arg1 shouldAllowExtensionPointIdentifier:(id)arg2;
-(id)application:(id)arg1 viewControllerWithRestorationIdentifierPath:(id)arg2 coder:(id)arg3;
-(BOOL)application:(id)arg1 shouldSaveSecureApplicationState:(id)arg2;
-(BOOL)application:(id)arg1 shouldRestoreSecureApplicationState:(id)arg2;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2;
-(void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
-(void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
-(void)application:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;
-(id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
-(void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;

@end

