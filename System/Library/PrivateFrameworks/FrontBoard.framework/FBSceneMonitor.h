/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>

@protocol FBSceneMonitorDelegate;
@class FBSceneManager, FBScene, FBSSceneIdentityToken, NSString, NSMutableSet, FBSSceneClientSettingsDiffInspector, FBSMutableSceneSettings, FBSceneMonitorBehaviors, FBSSceneSettings;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver> {

	FBSceneManager* _sceneManager;
	FBScene* _scene;
	FBSSceneIdentityToken* _identityToken;
	NSString* _sceneID;
	NSMutableSet* _externalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	FBSSceneClientSettingsDiffInspector* _diffInspector;
	FBSMutableSceneSettings* _sceneSettings;
	FBSceneMonitorBehaviors* _givenMonitorBehaviors;
	FBSceneMonitorBehaviors* _delegateMonitorBehaviors;
	FBSceneMonitorBehaviors* _effectiveMonitorBehaviors;
	BOOL _invalidated;
	BOOL _isSynchronizing;
	BOOL _updateSettingsAfterSync;
	BOOL _updateExternalScenesAfterSync;
	id<FBSceneMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) FBScene * scene;                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                               //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSceneMonitorBehaviors * behaviors;                       //@synthesize givenMonitorBehaviors=_givenMonitorBehaviors - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * sceneSettings;                      //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(id<FBSceneMonitorDelegate>)delegate;
-(void)setDelegate:(id<FBSceneMonitorDelegate>)arg1 ;
-(NSString *)sceneID;
-(FBScene *)scene;
-(FBSceneMonitorBehaviors *)behaviors;
-(id)initWithScene:(id)arg1 ;
-(FBSSceneSettings *)sceneSettings;
-(void)_evaluateEffectiveMonitorBehaviors;
-(id)initWithSceneID:(id)arg1 ;
-(id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2 ;
-(void)_updateAllSceneStateIgnoringDelegate;
-(void)_setEffectiveMonitorBehaviors:(id)arg1 ;
-(void)_updateSceneSettings:(BOOL)arg1 ;
-(void)_updateExternalScenes:(BOOL)arg1 ;
-(void)_updateScenePairingState:(BOOL)arg1 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg1 ;
-(void)setBehaviors:(FBSceneMonitorBehaviors *)arg1 ;
-(BOOL)isPairedWithExternalSceneID:(id)arg1 ;
-(id)_effectiveBehaviors;
@end

