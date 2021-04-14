/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSHashTable, NSArray, MNAudioOutputSetting, NSObject;

@interface MNAudioOutputSettingsManager : NSObject {

	NSHashTable* _observers;
	unsigned long long _routeSelection;
	NSArray* _audioSettings;
	NSArray* _pickableRoutes;
	MNAudioOutputSetting* _currentSetting;
	MNAudioOutputSetting* _currentSettingForSystem;
	BOOL _isCurrentSettingCached;
	NSObject*<OS_dispatch_queue> _pickableRoutesQueue;

}

@property (nonatomic,retain) MNAudioOutputSetting * currentSetting; 
@property (nonatomic,readonly) MNAudioOutputSetting * currentSettingForVoicePrompt; 
@property (nonatomic,readonly) NSArray * audioSettings;                                          //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeSelection;                                //@synthesize routeSelection=_routeSelection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_registerForNotifications;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)updatePickableRoutes;
-(void)_unregisterForNotifications;
-(void)_pickableRoutesChanged;
-(void)_mediaServerConnectionDied;
-(void)updateRouteSelectionObservers;
-(BOOL)_pickCurrentSetting;
-(void)updateCurrentSettingObservers;
-(void)updatedCurrentSettingForVoicePromptObservers;
-(void)updateRouteSelection;
-(void)reloadSettings;
-(void)updateSettingsObservers;
-(void)updatePickableRoutesWithHandler:(/*^block*/id)arg1 ;
-(MNAudioOutputSetting *)currentSetting;
-(MNAudioOutputSetting *)currentSettingForVoicePrompt;
-(unsigned long long)routeSelection;
-(void)setCurrentSetting:(MNAudioOutputSetting *)arg1 ;
-(NSArray *)audioSettings;
@end

