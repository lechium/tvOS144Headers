/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPFilterSupport.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>
#import <libobjc.A.dylib/MPAudioSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>
#import <libobjc.A.dylib/MPLayerableSupport.h>
#import <libobjc.A.dylib/MPGeometrySupport.h>
#import <libobjc.A.dylib/MPTimingSupport.h>
#import <libobjc.A.dylib/MPActionSupport.h>

@class MCPlugParallel, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCMontage, MPLayerInternal, NSString;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {

	MCPlugParallel* _plug;
	NSMutableDictionary* _attributes;
	NSMutableArray* _effectContainers;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;
	MPAudioPlaylist* _audioPlaylist;
	MCMontage* _montage;
	id _parent;
	MPLayerInternal* _internal;
	BOOL _skipTimeCalculations;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL isAudioLayer; 
@property (assign,nonatomic) long long audioPriority; 
@property (nonatomic,copy) NSString * layerID; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)layer;
+(id)animatedLayer;
+(id)sequentialLayer;
+(id)effectLayer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(CGSize)size;
-(void)cleanup;
-(double)scale;
-(void)dump;
-(CGPoint)position;
-(double)duration;
-(void)setPosition:(CGPoint)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)parent;
-(id)objectID;
-(id)uuid;
-(double)width;
-(double)height;
-(void)setScale:(double)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)actions;
-(id)action;
-(double)opacity;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(id)filters;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)addFilter:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)addFilters:(id)arg1 ;
-(void)setMontage:(id)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(long long)audioPriority;
-(void)setAudioPriority:(long long)arg1 ;
-(void)removeActionForKey:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(NSString *)layerID;
-(void)setLayerID:(NSString *)arg1 ;
-(id)parentDocument;
-(void)configureActions;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(id)montage;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)fullDebugLog;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(long long)countOfEffectContainers;
-(id)effectContainers;
-(void)removeAllEffectContainers;
-(void)addEffectContainers:(id)arg1 ;
-(BOOL)isAudioLayer;
-(void)removeEffectContainersAtIndices:(id)arg1 ;
-(void)insertEffectContainers:(id)arg1 atIndex:(long long)arg2 ;
-(void)addEffectContainer:(id)arg1 ;
-(id)objectInEffectContainersAtIndex:(long long)arg1 ;
-(void)setSkipTimeCalculations:(BOOL)arg1 ;
-(void)moveEffectContainersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)allSlides:(BOOL)arg1 ;
-(id)plug;
-(id)allSongs;
-(void)reconnectAllTransitions;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)copyFilters:(id)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(double)yPosition;
-(double)xPosition;
-(long long)countOfFilters;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setXPosition:(double)arg1 ;
-(void)setYPosition:(double)arg1 ;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
-(void)updateDurationPadding:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setIsAudioLayer:(BOOL)arg1 ;
-(void)copyEffectContainers:(id)arg1 ;
-(double)timeIn;
-(void)updateMainDuration;
-(void)resetStartTimes;
-(BOOL)startsPaused;
-(id)layerKey;
-(BOOL)skipTimeCalculations;
-(void)reconnectTransitionForEffectContainerAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inEffectContainersAtIndex:(long long)arg2 ;
-(void)removeObjectFromEffectContainersAtIndex:(long long)arg1 ;
-(void)replaceObjectInEffectContainersAtIndex:(long long)arg1 withObject:(id)arg2 ;
@end

