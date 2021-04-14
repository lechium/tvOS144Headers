/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSDisplayState_Private.h>
#import <libobjc.A.dylib/PBSDisplayState.h>

@class NSDictionary, NSArray, PBSDisplayMode, NSSet, NSString, NSHashTable, PBSDisplayManagerServiceProxy;

@interface PBSDisplayManager : NSObject <PBSDisplayState_Private, PBSDisplayState> {

	BOOL _canHandleHighBandwidthModes;
	BOOL _shouldModeSwitchForDynamicRange;
	BOOL _shouldModeSwitchForFrameRate;
	BOOL _atmosEnabled;
	BOOL _detectedPoorCableConnection;
	BOOL _deemed4KCapable;
	double _localeRefreshRate;
	NSArray* _sortedDisplayModes;
	PBSDisplayMode* _currentDisplayMode;
	PBSDisplayMode* _fallbackDisplayMode;
	PBSDisplayMode* _userSelectedDisplayMode;
	NSSet* _seenDisplayIDs;
	NSString* _currentDisplayID;
	long long _displayConnection;
	NSSet* _promotedVirtualDisplayModes;
	long long _lastCablePollStatus;
	NSHashTable* _stateObservers;
	PBSDisplayManagerServiceProxy* _serviceProxy;
	NSDictionary* _audioLatencies;

}

@property (nonatomic,readonly) BOOL canAttemptUpgradeWithDisplayAssistant; 
@property (assign,nonatomic) double localeRefreshRate;                                    //@synthesize localeRefreshRate=_localeRefreshRate - In the implementation block
@property (nonatomic,retain) NSArray * sortedDisplayModes;                                //@synthesize sortedDisplayModes=_sortedDisplayModes - In the implementation block
@property (nonatomic,retain) PBSDisplayMode * currentDisplayMode;                         //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (nonatomic,retain) PBSDisplayMode * fallbackDisplayMode;                        //@synthesize fallbackDisplayMode=_fallbackDisplayMode - In the implementation block
@property (nonatomic,retain) PBSDisplayMode * userSelectedDisplayMode;                    //@synthesize userSelectedDisplayMode=_userSelectedDisplayMode - In the implementation block
@property (nonatomic,retain) NSSet * seenDisplayIDs;                                      //@synthesize seenDisplayIDs=_seenDisplayIDs - In the implementation block
@property (nonatomic,retain) NSString * currentDisplayID;                                 //@synthesize currentDisplayID=_currentDisplayID - In the implementation block
@property (assign,nonatomic) BOOL canHandleHighBandwidthModes;                            //@synthesize canHandleHighBandwidthModes=_canHandleHighBandwidthModes - In the implementation block
@property (assign,nonatomic) BOOL shouldModeSwitchForDynamicRange;                        //@synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange - In the implementation block
@property (assign,nonatomic) BOOL shouldModeSwitchForFrameRate;                           //@synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate - In the implementation block
@property (assign,nonatomic) BOOL atmosEnabled;                                           //@synthesize atmosEnabled=_atmosEnabled - In the implementation block
@property (assign,nonatomic) long long displayConnection;                                 //@synthesize displayConnection=_displayConnection - In the implementation block
@property (assign,nonatomic) BOOL detectedPoorCableConnection;                            //@synthesize detectedPoorCableConnection=_detectedPoorCableConnection - In the implementation block
@property (nonatomic,retain) NSSet * promotedVirtualDisplayModes;                         //@synthesize promotedVirtualDisplayModes=_promotedVirtualDisplayModes - In the implementation block
@property (assign,nonatomic) long long lastCablePollStatus;                               //@synthesize lastCablePollStatus=_lastCablePollStatus - In the implementation block
@property (assign,nonatomic) BOOL deemed4KCapable;                                        //@synthesize deemed4KCapable=_deemed4KCapable - In the implementation block
@property (nonatomic,retain) NSHashTable * stateObservers;                                //@synthesize stateObservers=_stateObservers - In the implementation block
@property (nonatomic,readonly) PBSDisplayManagerServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSDictionary * audioLatencies;                               //@synthesize audioLatencies=_audioLatencies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)sharedInstance;
+(void)preheat;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)shouldModeSwitchForFrameRate;
-(BOOL)shouldModeSwitchForDynamicRange;
-(void)removeStateObserver:(id)arg1 ;
-(void)addStateObserver:(id)arg1 ;
-(PBSDisplayManagerServiceProxy *)serviceProxy;
-(PBSDisplayMode *)currentDisplayMode;
-(void)setCurrentDisplayMode:(PBSDisplayMode *)arg1 ;
-(void)setStateObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)stateObservers;
-(NSDictionary *)audioLatencies;
-(void)setAudioLatencies:(NSDictionary *)arg1 ;
-(void)setAudioLatency:(double)arg1 forDisplayMode:(id)arg2 ;
-(void)enableModeSwitchingForDynamicRange:(BOOL)arg1 ;
-(void)enableModeSwitchingForFrameRate:(BOOL)arg1 ;
-(void)enableAtmos:(BOOL)arg1 ;
-(void)forgetDisplaysForDisplayAssistant;
-(void)removeCableCheckHistory;
-(void)displayAssistantDidStartForKind:(id)arg1 ;
-(void)displayAssistantDidCompleteForKind:(id)arg1 ;
-(BOOL)canAttemptUpgradeWithDisplayAssistant;
-(BOOL)needsHDRBuddyForDisplayMode:(id)arg1 ;
-(void)handleRegionChangeWithNewCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentDisplayAssistantWithRequest:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(NSArray *)sortedDisplayModes;
-(NSSet *)promotedVirtualDisplayModes;
-(id)findFirstMode:(/*^block*/id)arg1 ;
-(double)localeRefreshRate;
-(void)refreshValuesOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshValuesFromSerialisedState:(id)arg1 notifyObservers:(BOOL)arg2 ;
-(id)audioLatencyForDisplayMode:(id)arg1 ;
-(BOOL)isAdvertisingHDMI2;
-(id)filterModes:(/*^block*/id)arg1 ;
-(id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(BOOL)arg2 ;
-(PBSDisplayMode *)fallbackDisplayMode;
-(PBSDisplayMode *)userSelectedDisplayMode;
-(NSSet *)seenDisplayIDs;
-(NSString *)currentDisplayID;
-(BOOL)canHandleHighBandwidthModes;
-(BOOL)atmosEnabled;
-(long long)displayConnection;
-(BOOL)detectedPoorCableConnection;
-(BOOL)deemed4KCapable;
-(long long)lastCablePollStatus;
-(BOOL)updateDisplayManagerWithRequest:(id)arg1 errror:(id*)arg2 ;
-(void)updateDisplayManagerWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sleepDisplay:(/*^block*/id)arg1 ;
-(void)wakeDisplay:(/*^block*/id)arg1 ;
-(void)setLocaleRefreshRate:(double)arg1 ;
-(void)setSortedDisplayModes:(NSArray *)arg1 ;
-(void)setFallbackDisplayMode:(PBSDisplayMode *)arg1 ;
-(void)setUserSelectedDisplayMode:(PBSDisplayMode *)arg1 ;
-(void)setSeenDisplayIDs:(NSSet *)arg1 ;
-(void)setCurrentDisplayID:(NSString *)arg1 ;
-(void)setCanHandleHighBandwidthModes:(BOOL)arg1 ;
-(void)setShouldModeSwitchForDynamicRange:(BOOL)arg1 ;
-(void)setShouldModeSwitchForFrameRate:(BOOL)arg1 ;
-(void)setAtmosEnabled:(BOOL)arg1 ;
-(void)setDisplayConnection:(long long)arg1 ;
-(void)setDetectedPoorCableConnection:(BOOL)arg1 ;
-(void)setPromotedVirtualDisplayModes:(NSSet *)arg1 ;
-(void)setLastCablePollStatus:(long long)arg1 ;
-(void)setDeemed4KCapable:(BOOL)arg1 ;
@end

