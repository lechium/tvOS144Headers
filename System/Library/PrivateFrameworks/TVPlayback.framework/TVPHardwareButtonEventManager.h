/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/PBSBulletinServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, MPAVRoute, MPVolumeController, PBSPlayPauseButtonEventAssertion, PBSVolumeButtonEventAssertion, PBSBulletin, NSObject;

@interface TVPHardwareButtonEventManager : NSObject <MPVolumeControllerDelegate, PBSBulletinServiceDelegate> {

	BOOL _canAcceptHardwareButtonEvents;
	BOOL _wantsVolumeButtonEvents;
	BOOL _wantsExclusivePlayPauseButtonEvents;
	BOOL _volumeNotificationHandlersEnabled;
	float _lastVolumeLevel;
	NSString* _name;
	MPAVRoute* _route;
	MPVolumeController* _volumeController;
	PBSPlayPauseButtonEventAssertion* _playPauseButtonAssertion;
	PBSVolumeButtonEventAssertion* _volumeButtonAssertion;
	PBSBulletin* _volumeBulletin;
	NSObject*<OS_dispatch_queue> _volumeUpdateQueue;

}

@property (nonatomic,readonly) MPVolumeController * volumeController;                                    //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,readonly) PBSPlayPauseButtonEventAssertion * playPauseButtonAssertion;              //@synthesize playPauseButtonAssertion=_playPauseButtonAssertion - In the implementation block
@property (nonatomic,readonly) PBSVolumeButtonEventAssertion * volumeButtonAssertion;                    //@synthesize volumeButtonAssertion=_volumeButtonAssertion - In the implementation block
@property (assign,nonatomic) BOOL volumeNotificationHandlersEnabled;                                     //@synthesize volumeNotificationHandlersEnabled=_volumeNotificationHandlersEnabled - In the implementation block
@property (nonatomic,retain) PBSBulletin * volumeBulletin;                                               //@synthesize volumeBulletin=_volumeBulletin - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeUpdateQueue;                             //@synthesize volumeUpdateQueue=_volumeUpdateQueue - In the implementation block
@property (assign,nonatomic) float lastVolumeLevel;                                                      //@synthesize lastVolumeLevel=_lastVolumeLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                                          //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL canAcceptHardwareButtonEvents;                                         //@synthesize canAcceptHardwareButtonEvents=_canAcceptHardwareButtonEvents - In the implementation block
@property (assign,nonatomic) BOOL wantsVolumeButtonEvents;                                               //@synthesize wantsVolumeButtonEvents=_wantsVolumeButtonEvents - In the implementation block
@property (assign,nonatomic) BOOL wantsExclusivePlayPauseButtonEvents;                                   //@synthesize wantsExclusivePlayPauseButtonEvents=_wantsExclusivePlayPauseButtonEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(id)initWithName:(id)arg1 ;
-(MPAVRoute *)route;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(MPVolumeController *)volumeController;
-(void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
-(void)setCanAcceptHardwareButtonEvents:(BOOL)arg1 ;
-(void)setLastVolumeLevel:(float)arg1 ;
-(void)_updateButtonOverrides;
-(void)volumeUpRequested:(id)arg1 ;
-(void)volumeDownRequested:(id)arg1 ;
-(void)_presentBulletinWithVolume:(float)arg1 ;
-(BOOL)_canControlVolume;
-(float)lastVolumeLevel;
-(void)setVolumeBulletin:(PBSBulletin *)arg1 ;
-(BOOL)canAcceptHardwareButtonEvents;
-(void)setVolumeNotificationHandlersEnabled:(BOOL)arg1 ;
-(BOOL)volumeNotificationHandlersEnabled;
-(PBSBulletin *)volumeBulletin;
-(BOOL)wantsVolumeButtonEvents;
-(BOOL)wantsExclusivePlayPauseButtonEvents;
-(void)setWantsExclusivePlayPauseButtonEvents:(BOOL)arg1 ;
-(PBSPlayPauseButtonEventAssertion *)playPauseButtonAssertion;
-(PBSVolumeButtonEventAssertion *)volumeButtonAssertion;
-(NSObject*<OS_dispatch_queue>)volumeUpdateQueue;
-(void)setVolumeUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

