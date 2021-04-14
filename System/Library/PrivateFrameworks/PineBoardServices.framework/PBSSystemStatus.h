/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSSystemStatus : NSObject
+(void)initialize;
+(void)load;
+(BOOL)isVideoPlaying;
+(BOOL)isPresenceDetectionActive;
+(void)addPermanentObserverForProperty:(id)arg1 notifyInitial:(BOOL)arg2 invokeOnMainThread:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(unsigned long long)systemAttentionState;
+(BOOL)isSystemSleptManually;
+(unsigned long long)systemPlayingState;
+(id)keyPathsForValuesAffectingVideoPlaying;
+(id)keyPathsForValuesAffectingMusicPlaying;
+(BOOL)isMusicPlaying;
+(BOOL)isInternetAvailable;
+(BOOL)isSystemUsingEthernet;
+(BOOL)isSystemUsingWiFi;
+(BOOL)isAppleRemoteConnected;
+(BOOL)isProximityPairingInProgress;
+(BOOL)isBluetoothKeyboardConnected;
+(unsigned long long)systemDisplayState;
+(unsigned long long)lateNightMode;
+(unsigned long long)systemThermalState;
+(BOOL)isSystemUpdating;
+(void)_setSystemActive;
+(void)_setHiliteModeStarting;
+(void)_setHiliteModeActive;
+(void)_setScreenSaverStarting;
+(void)_setScreenSaverActive;
+(void)_setSystemSleepStarting:(BOOL)arg1 ;
+(void)_setSystemSleepActive;
+(void)_setSystemSleepStopping;
+(void)_setPresenceDetectionActive:(BOOL)arg1 ;
+(void)_setSystemPlayingState:(unsigned long long)arg1 ;
+(void)_setThermalState:(unsigned long long)arg1 ;
+(void)_setUpdatingOS:(BOOL)arg1 ;
-(id)init;
@end

