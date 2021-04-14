/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>

@class SCNOrderedDictionary, NSMutableDictionary, NSString, SCNGeometry, UIColor, NSArray, NSDictionary;

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {

	C3DParticleSystemRef _particleSystem;
	unsigned _isPresentationInstance : 1;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	NSString* _name;
	double _emissionDuration;
	double _emissionDurationVariation;
	double _idleDuration;
	double _idleDurationVariation;
	double _birthRate;
	double _birthRateVariation;
	double _warmupDuration;
	SCNGeometry* _emitterShape;
	long long _birthLocation;
	long long _birthDirection;
	SCNVector3 _emittingDirection;
	SCNVector3 _orientationDirection;
	SCNVector3 _acceleration;
	double _spreadingAngle;
	BOOL _loops;
	BOOL _isLocal;
	BOOL _affectedByGravity;
	BOOL _affectedByPhysicsFields;
	BOOL _physicsCollisionsEnabled;
	BOOL _lightingEnabled;
	BOOL _softParticlesEnabled;
	BOOL _particleDiesOnCollision;
	BOOL _blackPassEnabled;
	double _particleAngle;
	double _particleAngleVariation;
	double _particleVelocity;
	double _particleVelocityVariation;
	double _particleAngularVelocity;
	double _particleAngularVelocityVariation;
	double _particleLifeSpan;
	double _particleLifeSpanVariation;
	double _particleBounce;
	double _particleBounceVariation;
	double _particleFriction;
	double _particleFrictionVariation;
	double _particleCharge;
	double _particleChargeVariation;
	id _particleImage;
	UIColor* _particleColor;
	SCNVector4 _particleColorVariation;
	SCNParticleSystem* _systemSpawnedOnCollision;
	SCNParticleSystem* _systemSpawnedOnDying;
	SCNParticleSystem* _systemSpawnedOnLiving;
	double _particleSize;
	double _particleSizeVariation;
	double _particleIntensity;
	double _particleIntensityVariation;
	long long _seed;
	long long _blendMode;
	long long _renderingMode;
	long long _orientationMode;
	long long _imageSequenceAnimationMode;
	NSArray* _particleGeometries;
	NSArray* _colliderNodes;
	NSDictionary* _propertyControllers;
	long long _sortingMode;
	double _particleMass;
	double _particleMassVariation;
	double _dampingFactor;
	double _speedFactor;
	double _fixedTimeStep;
	double _stretchFactor;
	double _lightEmissionRadiusFactor;
	double _fresnelExponent;
	unsigned long long _imageSequenceColumnCount;
	unsigned long long _imageSequenceRowCount;
	double _imageSequenceInitialFrame;
	double _imageSequenceInitialFrameVariation;
	double _imageSequenceFrameRate;
	double _imageSequenceFrameRateVariation;
	NSString* _referenceName;

}

@property (assign,nonatomic) double emissionDuration; 
@property (assign,nonatomic) double emissionDurationVariation; 
@property (assign,nonatomic) double idleDuration; 
@property (assign,nonatomic) double idleDurationVariation; 
@property (assign,nonatomic) BOOL loops; 
@property (assign,nonatomic) double birthRate; 
@property (assign,nonatomic) double birthRateVariation; 
@property (assign,nonatomic) double warmupDuration; 
@property (nonatomic,retain) SCNGeometry * emitterShape; 
@property (assign,nonatomic) long long birthLocation; 
@property (assign,nonatomic) long long birthDirection; 
@property (assign,nonatomic) double spreadingAngle; 
@property (assign,nonatomic) SCNVector3 emittingDirection; 
@property (assign,nonatomic) SCNVector3 orientationDirection; 
@property (assign,nonatomic) SCNVector3 acceleration; 
@property (assign,getter=isLocal,nonatomic) BOOL local; 
@property (assign,nonatomic) double particleAngle; 
@property (assign,nonatomic) double particleAngleVariation; 
@property (assign,nonatomic) double particleVelocity; 
@property (assign,nonatomic) double particleVelocityVariation; 
@property (assign,nonatomic) double particleAngularVelocity; 
@property (assign,nonatomic) double particleAngularVelocityVariation; 
@property (assign,nonatomic) double particleLifeSpan; 
@property (assign,nonatomic) double particleLifeSpanVariation; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnDying; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnCollision; 
@property (nonatomic,retain) SCNParticleSystem * systemSpawnedOnLiving; 
@property (nonatomic,retain) id particleImage; 
@property (assign,nonatomic) unsigned long long imageSequenceColumnCount; 
@property (assign,nonatomic) unsigned long long imageSequenceRowCount; 
@property (assign,nonatomic) double imageSequenceInitialFrame; 
@property (assign,nonatomic) double imageSequenceInitialFrameVariation; 
@property (assign,nonatomic) double imageSequenceFrameRate; 
@property (assign,nonatomic) double imageSequenceFrameRateVariation; 
@property (assign,nonatomic) long long imageSequenceAnimationMode; 
@property (nonatomic,retain) UIColor * particleColor; 
@property (assign,nonatomic) SCNVector4 particleColorVariation; 
@property (assign,nonatomic) double particleSize; 
@property (assign,nonatomic) double particleSizeVariation; 
@property (assign,nonatomic) double particleIntensity; 
@property (assign,nonatomic) double particleIntensityVariation; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isBlackPassEnabled,nonatomic) BOOL blackPassEnabled; 
@property (assign,nonatomic) long long orientationMode; 
@property (assign,nonatomic) long long sortingMode; 
@property (assign,getter=isLightingEnabled,nonatomic) BOOL lightingEnabled; 
@property (assign,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) BOOL affectedByPhysicsFields; 
@property (assign,nonatomic) BOOL particleDiesOnCollision; 
@property (nonatomic,copy) NSArray * colliderNodes; 
@property (assign,nonatomic) double particleMass; 
@property (assign,nonatomic) double particleMassVariation; 
@property (assign,nonatomic) double particleBounce; 
@property (assign,nonatomic) double particleBounceVariation; 
@property (assign,nonatomic) double particleFriction; 
@property (assign,nonatomic) double particleFrictionVariation; 
@property (assign,nonatomic) double particleCharge; 
@property (assign,nonatomic) double particleChargeVariation; 
@property (assign,nonatomic) double dampingFactor; 
@property (assign,nonatomic) double speedFactor; 
@property (assign,nonatomic) double stretchFactor; 
@property (assign,nonatomic) double fresnelExponent; 
@property (nonatomic,copy) NSDictionary * propertyControllers; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)particleSystem;
+(id)particleSystemNamed:(id)arg1 inDirectory:(id)arg2 ;
+(id)particleSystemWithParticleSystemRef:(C3DParticleSystemRef)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)reset;
-(long long)seed;
-(id)scene;
-(BOOL)isLocal;
-(double)birthRate;
-(void)setBirthRate:(double)arg1 ;
-(SCNGeometry *)emitterShape;
-(void)setEmitterShape:(SCNGeometry *)arg1 ;
-(void)setSeed:(long long)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(void)setAcceleration:(SCNVector3)arg1 ;
-(SCNVector3)acceleration;
-(void)setLocal:(BOOL)arg1 ;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(BOOL)affectedByGravity;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(long long)renderingMode;
-(void)setRenderingMode:(long long)arg1 ;
-(BOOL)loops;
-(const void*)__CFObject;
-(void)setLoops:(BOOL)arg1 ;
-(C3DSceneRef)sceneRef;
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
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(BOOL)_isAReference;
-(void)setReferenceName:(id)arg1 ;
-(id)referenceName;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(double)fresnelExponent;
-(void)setFresnelExponent:(double)arg1 ;
-(C3DParticleSystemRef)particleSystemRef;
-(void)setParticleColor:(UIColor *)arg1 ;
-(id)particleImage;
-(void)setParticleImage:(id)arg1 ;
-(double)emissionDuration;
-(void)setEmissionDuration:(double)arg1 ;
-(double)emissionDurationVariation;
-(void)setEmissionDurationVariation:(double)arg1 ;
-(double)idleDuration;
-(void)setIdleDuration:(double)arg1 ;
-(double)idleDurationVariation;
-(void)setIdleDurationVariation:(double)arg1 ;
-(double)birthRateVariation;
-(void)setBirthRateVariation:(double)arg1 ;
-(double)warmupDuration;
-(void)setWarmupDuration:(double)arg1 ;
-(long long)birthLocation;
-(void)setBirthLocation:(long long)arg1 ;
-(long long)birthDirection;
-(void)setBirthDirection:(long long)arg1 ;
-(SCNVector3)emittingDirection;
-(void)setEmittingDirection:(SCNVector3)arg1 ;
-(SCNVector3)orientationDirection;
-(void)setOrientationDirection:(SCNVector3)arg1 ;
-(double)spreadingAngle;
-(void)setSpreadingAngle:(double)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(BOOL)affectedByPhysicsFields;
-(void)setAffectedByPhysicsFields:(BOOL)arg1 ;
-(BOOL)physicsCollisionsEnabled;
-(void)setPhysicsCollisionsEnabled:(BOOL)arg1 ;
-(BOOL)isLightingEnabled;
-(void)setLightingEnabled:(BOOL)arg1 ;
-(BOOL)areSoftParticlesEnabled;
-(void)setSoftParticlesEnabled:(BOOL)arg1 ;
-(BOOL)particleDiesOnCollision;
-(void)setParticleDiesOnCollision:(BOOL)arg1 ;
-(BOOL)isBlackPassEnabled;
-(void)setBlackPassEnabled:(BOOL)arg1 ;
-(double)particleAngle;
-(void)setParticleAngle:(double)arg1 ;
-(double)particleAngleVariation;
-(void)setParticleAngleVariation:(double)arg1 ;
-(double)particleVelocity;
-(void)setParticleVelocity:(double)arg1 ;
-(double)particleVelocityVariation;
-(void)setParticleVelocityVariation:(double)arg1 ;
-(double)particleAngularVelocity;
-(void)setParticleAngularVelocity:(double)arg1 ;
-(double)particleAngularVelocityVariation;
-(void)setParticleAngularVelocityVariation:(double)arg1 ;
-(double)particleLifeSpan;
-(void)setParticleLifeSpan:(double)arg1 ;
-(double)particleLifeSpanVariation;
-(void)setParticleLifeSpanVariation:(double)arg1 ;
-(double)particleBounce;
-(void)setParticleBounce:(double)arg1 ;
-(double)particleBounceVariation;
-(void)setParticleBounceVariation:(double)arg1 ;
-(double)particleFriction;
-(void)setParticleFriction:(double)arg1 ;
-(double)particleFrictionVariation;
-(void)setParticleFrictionVariation:(double)arg1 ;
-(double)particleCharge;
-(void)setParticleCharge:(double)arg1 ;
-(double)particleChargeVariation;
-(void)setParticleChargeVariation:(double)arg1 ;
-(UIColor *)particleColor;
-(SCNVector4)particleColorVariation;
-(void)setParticleColorVariation:(SCNVector4)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnCollision;
-(void)setSystemSpawnedOnCollision:(SCNParticleSystem *)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnDying;
-(void)setSystemSpawnedOnDying:(SCNParticleSystem *)arg1 ;
-(SCNParticleSystem *)systemSpawnedOnLiving;
-(void)setSystemSpawnedOnLiving:(SCNParticleSystem *)arg1 ;
-(double)particleSize;
-(void)setParticleSize:(double)arg1 ;
-(double)particleSizeVariation;
-(void)setParticleSizeVariation:(double)arg1 ;
-(long long)orientationMode;
-(void)setOrientationMode:(long long)arg1 ;
-(long long)imageSequenceAnimationMode;
-(void)setImageSequenceAnimationMode:(long long)arg1 ;
-(id)particleGeometries;
-(void)setParticleGeometries:(id)arg1 ;
-(NSArray *)colliderNodes;
-(void)setColliderNodes:(NSArray *)arg1 ;
-(NSDictionary *)propertyControllers;
-(void)setPropertyControllers:(NSDictionary *)arg1 ;
-(long long)sortingMode;
-(void)setSortingMode:(long long)arg1 ;
-(double)particleMass;
-(void)setParticleMass:(double)arg1 ;
-(double)particleMassVariation;
-(void)setParticleMassVariation:(double)arg1 ;
-(double)dampingFactor;
-(void)setDampingFactor:(double)arg1 ;
-(double)speedFactor;
-(void)setSpeedFactor:(double)arg1 ;
-(double)fixedTimeStep;
-(void)setFixedTimeStep:(double)arg1 ;
-(double)stretchFactor;
-(void)setStretchFactor:(double)arg1 ;
-(unsigned long long)imageSequenceRowCount;
-(void)setImageSequenceRowCount:(unsigned long long)arg1 ;
-(unsigned long long)imageSequenceColumnCount;
-(void)setImageSequenceColumnCount:(unsigned long long)arg1 ;
-(double)imageSequenceInitialFrame;
-(void)setImageSequenceInitialFrame:(double)arg1 ;
-(double)imageSequenceInitialFrameVariation;
-(void)setImageSequenceInitialFrameVariation:(double)arg1 ;
-(double)imageSequenceFrameRate;
-(void)setImageSequenceFrameRate:(double)arg1 ;
-(double)imageSequenceFrameRateVariation;
-(void)setImageSequenceFrameRateVariation:(double)arg1 ;
-(id)initWithParticleSystemRef:(C3DParticleSystemRef)arg1 ;
-(id)initPresentationSystemWithSystemRef:(C3DParticleSystemRef)arg1 ;
-(void)_updateParticleC3DImage:(id)arg1 ;
-(BOOL)softParticlesEnabled;
-(BOOL)lightingEnabled;
-(BOOL)blackPassEnabled;
-(void)_customEncodingOfSCNParticleSystem:(id)arg1 ;
-(void)_customDecodingOfSCNParticleSystem:(id)arg1 ;
-(void)setParticleIntensity:(double)arg1 ;
-(void)setParticleIntensityVariation:(double)arg1 ;
-(short)typeOfProperty:(id)arg1 ;
-(void)_setParticleImagePath:(id)arg1 withResolvedPath:(id)arg2 ;
-(double)lightEmissionRadiusFactor;
-(void)setLightEmissionRadiusFactor:(double)arg1 ;
-(double)particleIntensity;
-(double)particleIntensityVariation;
-(void)handleEvent:(long long)arg1 forProperties:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)addModifierForProperties:(id)arg1 atStage:(long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)removeModifiersOfStage:(long long)arg1 ;
-(void)removeAllModifiers;
@end

