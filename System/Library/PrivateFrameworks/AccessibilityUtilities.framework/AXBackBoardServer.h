/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer {

	BOOL _overrideGestureRecognition;
	NSMutableArray* _eventListeners;
	NSMutableArray* _zoomAttributeListeners;

}

@property (assign,nonatomic) BOOL invertColorsEnabled; 
@property (assign,nonatomic) BOOL inPreboardMode; 
@property (assign,nonatomic) BOOL inCheckerBoardMode; 
+(id)server;
-(id)init;
-(void)dealloc;
-(id)_serviceName;
-(unsigned long long)currentGuidedAccessModeAndSessionApp:(id*)arg1 ;
-(BOOL)supportsAdaptation;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(BOOL)tripleClickHomeButtonPress;
-(void)homeClickSwallowedForGuidedAccess;
-(void)resetAccessibilityFeatures;
-(void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3 ;
-(id)accessibilityPreferenceAsMobile:(id)arg1 ;
-(unsigned long long)guidedAccessAvailability;
-(BOOL)inPreboardMode;
-(BOOL)inCheckerBoardMode;
-(BOOL)supportsAccessibilityDisplayFilters;
-(BOOL)isGuidedAccessActive;
-(void)_willClearServer;
-(void)_didConnectToServer;
-(id)_handleEventListener:(id)arg1 ;
-(void)registerSiriViewServicePID:(int)arg1 ;
-(void)registerAccessibilityUIServicePID:(int)arg1 ;
-(void)registerHearingAidServerPID:(int)arg1 ;
-(void)setInPreboardMode:(BOOL)arg1 ;
-(void)setInCheckerBoardMode:(BOOL)arg1 ;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(AXBColorFilterDescription)colorFilterFromLastUpdate;
-(BOOL)_shouldDispatchLocally;
-(id)backboardServiceInstance;
-(void)setSessionIsLoginSession:(BOOL)arg1 ;
-(void)registerAssistiveTouchPID:(int)arg1 ;
-(void)userEventOccurred;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 ;
-(void)setCapsLockLightOn:(BOOL)arg1 ;
-(void)setIsSpeakScreenHighlightVisible:(BOOL)arg1 ;
-(id)_springboardParametersForGuidedAccessAvailability;
-(void)_sendRequestGuidedAccessSessionMessage:(id)arg1 numberOfRetryAttempts:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerGestureConflictWithZoom:(id)arg1 ;
-(void)adjustSystemZoom:(int)arg1 ;
-(int)accessibilityAssistiveTouchPID;
-(int)accessibilityFullKeyboardAccessDaemonPID;
-(int)accessibilityUIServicePID;
-(void)registerFullKeyboardAccessDaemonPID:(int)arg1 ;
-(int)hearingAidServerPID;
-(void)sessionIsLoginSessionWithResult:(/*^block*/id)arg1 ;
-(BOOL)invertColorsEnabled;
-(void)setInvertColorsEnabled:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 ;
-(unsigned)contextIdForPosition:(CGPoint)arg1 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 toContextId:(unsigned)arg3 ;
-(CGRect)convertFrame:(CGRect)arg1 toContextId:(unsigned)arg2 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(void)setHearingAidControlIsVisible:(BOOL)arg1 ;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
-(void)setSwitchControlHasScreenSwitch:(BOOL)arg1 ;
-(void)setZoomInitialFocusRect:(CGRect)arg1 fromContext:(unsigned)arg2 ;
-(CGRect)zoomInitialFocusRectWithQueryingContext:(unsigned)arg1 ;
-(BOOL)isGuidedAccessInWorkspace;
-(id)guidedAccessEffectiveAppBundleIdentifier;
-(void)guidedAccessEffectiveAppBundleIdentifier:(/*^block*/id)arg1 ;
-(id)performGuidedAccessAutomationCommand:(id)arg1 error:(id*)arg2 ;
-(void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestGuidedAccessSessionEndWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isGuidedAccessSelfLockedToApp:(id)arg1 ;
-(BOOL)isGuidedAccessUnmanagedSelfLocked;
-(BOOL)isRestrictedForAAC;
-(void)toggleGuidedAccess;
-(id)guidedAccessIgnoredRegions;
-(void)jetsamThirdPartyApps;
-(BOOL)loadGAXBundleForUnmanagedASAM;
@end

