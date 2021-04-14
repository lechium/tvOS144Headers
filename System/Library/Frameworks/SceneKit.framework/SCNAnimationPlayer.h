/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNAnimation, SCNOrderedDictionary, NSMutableDictionary, NSArray, NSString;

@interface SCNAnimationPlayer : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {

	C3DAnimationPlayerRef _playerRef;
	SCNAnimation* _animation;
	float _weight;
	float _speed;
	BOOL _paused;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;

}

@property (nonatomic,readonly) SCNAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) double blendFactor; 
@property (assign,nonatomic) BOOL paused; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)animationPlayerWithSCNAnimation:(id)arg1 ;
+(id)animationPlayerWithAnimationPlayerRef:(C3DAnimationPlayerRef)arg1 ;
+(id)animationPlayerWithAnimation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)stop;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(SCNAnimation *)animation;
-(double)speed;
-(id)scene;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(void)play;
-(void)commonInit;
-(BOOL)paused;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2 ;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)_setAnimation:(id)arg1 ;
-(C3DAnimationPlayerRef)animationPlayerRef;
-(id)initWithAnimationPlayerRef:(C3DAnimationPlayerRef)arg1 ;
-(id)initWithSCNAnimation:(id)arg1 ;
-(void)setBlendFactor:(double)arg1 ;
-(void)stopWithBlendOutDuration:(double)arg1 ;
-(double)blendFactor;
-(void)stopWithFadeOutDuration:(double)arg1 ;
@end

