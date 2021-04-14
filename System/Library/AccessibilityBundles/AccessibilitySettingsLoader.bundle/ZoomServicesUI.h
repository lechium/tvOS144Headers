/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface ZoomServicesUI : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(void)enableZoomServices;
+(void)disableZoomServices;
+(CGPoint)_unMappedZoomPoint:(CGPoint)arg1 ;
+(BOOL)_deviceIsPortrait;
+(BOOL)_shouldUnmapPointsForFluidGestures;
-(id)init;
-(void)dealloc;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1 ;
-(void)_updateForCurrentZoomStatus;
-(void)_unregisterForAppNotifications;
-(void)_installZoomUISafeCategoriesIfNeeded;
-(void)_registerForAppNotifications;
-(BOOL)isRegisteredForAppNotifications;
-(void)_handleRegisterZoomConflictNotification:(id)arg1 ;
-(void)_handleZoomFocusDidChangeNotification:(id)arg1 ;
-(void)_handleFirstResponderDidChangeNotification:(id)arg1 ;
-(void)_handleKeyboardWillShowNotification:(id)arg1 ;
-(void)_handleKeyboardDidHideNotification:(id)arg1 ;
-(void)_handleAlertWillAppearNotification:(id)arg1 ;
-(void)_handleLockButtonWasPressedNotification:(id)arg1 ;
-(void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1 ;
-(void)_handleAppDidBecomeActiveNotification:(id)arg1 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(CGRect)_keyboardFrameInScreenCoordinates;
-(Class)_accessibilityBundlePrincipalClass;
@end

