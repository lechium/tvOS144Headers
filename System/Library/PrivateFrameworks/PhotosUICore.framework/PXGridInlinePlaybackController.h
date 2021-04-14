/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPreferencesObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSMutableArray, PXUpdater, NSArray, NSString;

@interface PXGridInlinePlaybackController : NSObject <PXPreferencesObserver> {

	NSObject*<OS_dispatch_queue> _recordsQueue;
	os_unfair_lock_s _lookupLock;
	NSMapTable* _lookupLock_recordsByDisplayAsset;
	NSMutableArray* _currentlyPlayingRecords;
	NSMutableArray* _visibleRecords;
	PXUpdater* _updater;
	BOOL _isContentViewVisible;
	BOOL _isOneUpVisible;
	BOOL _isContextMenuInteractionActive;
	BOOL _isDragSessionActive;
	BOOL _active;
	BOOL _canCreateRecords;
	BOOL _playbackEnabled;
	BOOL _applicationActive;
	BOOL _lowPowerModeEnabled;
	BOOL _autoplaySettingEnabled;

}

@property (assign,nonatomic) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL canCreateRecords;                              //@synthesize canCreateRecords=_canCreateRecords - In the implementation block
@property (assign,nonatomic) BOOL playbackEnabled;                               //@synthesize playbackEnabled=_playbackEnabled - In the implementation block
@property (assign,nonatomic) BOOL applicationActive;                             //@synthesize applicationActive=_applicationActive - In the implementation block
@property (assign,nonatomic) BOOL lowPowerModeEnabled;                           //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoplaySettingEnabled;                        //@synthesize autoplaySettingEnabled=_autoplaySettingEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentRecords; 
@property (nonatomic,readonly) CGRect currentVisibleRect; 
@property (nonatomic,readonly) BOOL canProvideGeometriesForRecords; 
@property (nonatomic,readonly) BOOL shouldEnablePlayback; 
@property (assign,nonatomic) BOOL isContentViewVisible;                          //@synthesize isContentViewVisible=_isContentViewVisible - In the implementation block
@property (assign,nonatomic) BOOL isOneUpVisible;                                //@synthesize isOneUpVisible=_isOneUpVisible - In the implementation block
@property (assign,nonatomic) BOOL isContextMenuInteractionActive;                //@synthesize isContextMenuInteractionActive=_isContextMenuInteractionActive - In the implementation block
@property (assign,nonatomic) BOOL isDragSessionActive;                           //@synthesize isDragSessionActive=_isDragSessionActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setNeedsUpdate;
-(void)visibleRectDidChange;
-(BOOL)isDragSessionActive;
-(id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(CGRect)currentVisibleRect;
-(BOOL)canUpdatePlayingRecords;
-(void)didUpdatePlayingRecords;
-(id)filterSortedRecordsToPlay:(id)arg1 ;
-(CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out CGSize*)arg2 ;
-(BOOL)canProvideGeometriesForRecords;
-(BOOL)shouldEnablePlayback;
-(BOOL)canPlayAsset:(id)arg1 ;
-(void)preferencesDidChange;
-(id)checkOutPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(id)checkOutPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(void)willCheckInPlaybackRecordForDisplayAsset:(id)arg1 ;
-(void)checkInPlaybackRecordForDisplayAsset:(id)arg1 ;
-(void)checkInPlaybackRecordForDisplayAssets:(id)arg1 ;
-(BOOL)isPlayingDisplayAsset:(id)arg1 ;
-(void)invalidatePlaybackEnabled;
-(void)invalidatePlayingRecords;
-(void)setIsContentViewVisible:(BOOL)arg1 ;
-(void)setIsOneUpVisible:(BOOL)arg1 ;
-(void)setIsContextMenuInteractionActive:(BOOL)arg1 ;
-(void)setIsDragSessionActive:(BOOL)arg1 ;
-(void)setApplicationActive:(BOOL)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(void)setAutoplaySettingEnabled:(BOOL)arg1 ;
-(void)setPlaybackEnabled:(BOOL)arg1 ;
-(void)_processInfoPowerStateDidChange:(id)arg1 ;
-(void)_applicationDidResignActive:(id)arg1 ;
-(void)_updateActive;
-(void)_updateLowPowerModeEnabled;
-(void)_updateCanCreateRecords;
-(void)_updatePlaybackEnabled;
-(void)_updateVisibilityOfRecords;
-(void)_updatePlayingRecords;
-(void)_startPlaybackForRecords:(id)arg1 ;
-(void)_stopPlaybackForRecords:(id)arg1 ;
-(BOOL)isDisplayAssetEligibleForAutoPlayback:(id)arg1 ;
-(BOOL)_hasAnyPlaybackRecords;
-(NSArray *)currentRecords;
-(BOOL)isContentViewVisible;
-(BOOL)isOneUpVisible;
-(BOOL)isContextMenuInteractionActive;
-(BOOL)canCreateRecords;
-(void)setCanCreateRecords:(BOOL)arg1 ;
-(BOOL)playbackEnabled;
-(BOOL)applicationActive;
-(BOOL)lowPowerModeEnabled;
-(BOOL)autoplaySettingEnabled;
@end

