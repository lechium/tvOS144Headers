/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSOrderedSet, NSHashTable, FBScene;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {

	NSString* _identifier;
	NSOrderedSet* _layers;
	NSHashTable* _observers;
	FBScene* _scene;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) FBScene * scene;                  //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * layers;                   //@synthesize layers=_layers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSOrderedSet *)layers;
-(void)_setLayers:(id)arg1 ;
-(FBScene *)scene;
-(void)_observer_didStartTrackingLayers;
-(void)_observer_sceneLayerManagerDidUpdateLayers;
-(void)_observer_didStopTrackingLayers;
-(id)layerWithContextID:(unsigned)arg1 ;
-(id)_initWithScene:(id)arg1 ;
@end

