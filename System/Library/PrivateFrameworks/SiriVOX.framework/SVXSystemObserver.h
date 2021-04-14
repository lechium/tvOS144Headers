/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SACInfoDelegate.h>
#import <libobjc.A.dylib/SVXModuleInstance.h>
#import <libobjc.A.dylib/SVXSessionActivityListening.h>
#import <libobjc.A.dylib/SVXSystemVolumeDataSource.h>

@class SVXModule, SACInfoListener, SACInfo, SVXSystemVolumeAnnouncer, NSMutableDictionary, NSString;

@interface SVXSystemObserver : NSObject <SACInfoDelegate, SVXModuleInstance, SVXSessionActivityListening, SVXSystemVolumeDataSource> {

	SVXModule* _module;
	SACInfoListener* _infoListener;
	SACInfo* _currentSACInfo;
	SVXSystemVolumeAnnouncer* _volumeAnnouncer;
	NSMutableDictionary* _volumesByCategory;

}

@property (nonatomic,readonly) id<SVXSystemVolumeDataSource> volumeDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(void)mediaServerConnectionDied:(id)arg1 ;
-(void)handleSACInfo:(id)arg1 ;
-(void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2 ;
-(void)stopWithModuleInstanceProvider:(id)arg1 ;
-(void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)sessionWillStartSoundWithID:(long long)arg1 ;
-(void)sessionDidStartSoundWithID:(long long)arg1 ;
-(void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2 ;
-(void)sessionWillBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionDidBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg1 ;
-(void)audioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)audioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(id<SVXSystemVolumeDataSource>)volumeDataSource;
-(void)addVolumeListener:(id)arg1 ;
-(void)getVolumeForAudioCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeVolumeListener:(id)arg1 ;
-(void)_startObservingInfo;
-(void)_startObservingMediaServerConnection;
-(void)_startObservingSystemVolume;
-(void)_fetchSystemVolumes;
-(void)_stopObservingMediaServerConnection;
-(void)_stopObservingSystemVolume;
-(void)_stopObservingInfo;
-(void)_logSnapshot;
-(void)_handleMediaServerConnectionDied;
-(void)systemVolumeChanged:(id)arg1 ;
-(void)_handleSystemVolumeChangeForCategory:(id)arg1 volume:(float)arg2 reason:(id)arg3 ;
-(void)_handleSACInfo:(id)arg1 ;
@end

