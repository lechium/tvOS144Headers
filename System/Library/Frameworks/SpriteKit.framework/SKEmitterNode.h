/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKTexture, SKNode, SKKeyframeSequence, UIColor, SKAction, SKShader, NSDictionary;

@interface SKEmitterNode : SKNode {

	SKTexture* _particleTexture;
	SKCEmitterNode* _skcEmitterNode;
	SKNode* _target;
	SKKeyframeSequence* _colorSequence;
	SKKeyframeSequence* _colorBlendSequence;
	SKKeyframeSequence* _alphaSequence;
	SKKeyframeSequence* _scaleSequence;
	SKKeyframeSequence* _rotationSequence;
	SKKeyframeSequence* _fieldInfluenceSequence;
	SKKeyframeSequence* _particleSpeedSequence;
	unsigned long long _particleRenderOrder;

}

@property (nonatomic,retain) SKTexture * particleTexture; 
@property (assign,nonatomic) long long particleBlendMode; 
@property (nonatomic,retain) UIColor * particleColor; 
@property (assign,nonatomic) double particleColorRedRange; 
@property (assign,nonatomic) double particleColorGreenRange; 
@property (assign,nonatomic) double particleColorBlueRange; 
@property (assign,nonatomic) double particleColorAlphaRange; 
@property (assign,nonatomic) double particleColorRedSpeed; 
@property (assign,nonatomic) double particleColorGreenSpeed; 
@property (assign,nonatomic) double particleColorBlueSpeed; 
@property (assign,nonatomic) double particleColorAlphaSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleColorSequence; 
@property (assign,nonatomic) double particleColorBlendFactor; 
@property (assign,nonatomic) double particleColorBlendFactorRange; 
@property (assign,nonatomic) double particleColorBlendFactorSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleColorBlendFactorSequence; 
@property (assign,nonatomic) CGPoint particlePosition; 
@property (assign,nonatomic) CGVector particlePositionRange; 
@property (assign,nonatomic) double particleSpeed; 
@property (assign,nonatomic) double particleSpeedRange; 
@property (assign,nonatomic) double emissionAngle; 
@property (assign,nonatomic) double emissionAngleRange; 
@property (assign,nonatomic) double xAcceleration; 
@property (assign,nonatomic) double yAcceleration; 
@property (assign,nonatomic) double particleBirthRate; 
@property (assign,nonatomic) unsigned long long numParticlesToEmit; 
@property (assign,nonatomic) double particleLifetime; 
@property (assign,nonatomic) double particleLifetimeRange; 
@property (assign,nonatomic) double particleRotation; 
@property (assign,nonatomic) double particleRotationRange; 
@property (assign,nonatomic) double particleRotationSpeed; 
@property (assign,nonatomic) CGSize particleSize; 
@property (assign,nonatomic) double particleScale; 
@property (assign,nonatomic) double particleScaleRange; 
@property (assign,nonatomic) double particleScaleSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleScaleSequence; 
@property (assign,nonatomic) double particleAlpha; 
@property (assign,nonatomic) double particleAlphaRange; 
@property (assign,nonatomic) double particleAlphaSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleAlphaSequence; 
@property (nonatomic,copy) SKAction * particleAction; 
@property (assign,nonatomic) unsigned fieldBitMask; 
@property (assign,nonatomic,__weak) SKNode * targetNode; 
@property (nonatomic,retain) SKShader * shader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (assign,nonatomic) double particleZPosition; 
@property (assign,nonatomic) unsigned long long particleRenderOrder;                             //@synthesize particleRenderOrder=_particleRenderOrder - In the implementation block
@property (assign,nonatomic) double particleZPositionRange; 
@property (assign,nonatomic) double particleZPositionSpeed; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)xAcceleration;
-(void)setXAcceleration:(double)arg1 ;
-(double)yAcceleration;
-(void)setYAcceleration:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(void)commonInit;
-(unsigned)fieldBitMask;
-(void)setFieldBitMask:(unsigned)arg1 ;
-(id)physicsWorld;
-(void)setParticleColor:(UIColor *)arg1 ;
-(UIColor *)particleColor;
-(CGSize)particleSize;
-(void)setParticleSize:(CGSize)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(void)copyParticlePropertiesToNode:(id)arg1 ;
-(double)particleBirthRate;
-(unsigned long long)numParticlesToEmit;
-(SKNode *)targetNode;
-(double)particleLifetime;
-(double)particleLifetimeRange;
-(CGPoint)particlePosition;
-(CGVector)particlePositionRange;
-(double)particleZPosition;
-(double)particleSpeed;
-(double)particleSpeedRange;
-(double)emissionAngle;
-(double)emissionAngleRange;
-(double)particleRotation;
-(double)particleRotationRange;
-(double)particleRotationSpeed;
-(SKTexture *)particleTexture;
-(SKKeyframeSequence *)particleColorSequence;
-(double)particleColorAlphaRange;
-(double)particleColorBlueRange;
-(double)particleColorGreenRange;
-(double)particleColorRedRange;
-(double)particleColorAlphaSpeed;
-(double)particleColorBlueSpeed;
-(double)particleColorGreenSpeed;
-(double)particleColorRedSpeed;
-(SKKeyframeSequence *)particleColorBlendFactorSequence;
-(double)particleColorBlendFactor;
-(double)particleColorBlendFactorRange;
-(double)particleColorBlendFactorSpeed;
-(long long)particleBlendMode;
-(SKKeyframeSequence *)particleAlphaSequence;
-(double)particleAlpha;
-(double)particleAlphaRange;
-(double)particleAlphaSpeed;
-(id)particleSpeedSequence;
-(void)setTargetNode:(SKNode *)arg1 ;
-(void)setParticleTexture:(SKTexture *)arg1 ;
-(void)setParticlePosition:(CGPoint)arg1 ;
-(void)setParticlePositionRange:(CGVector)arg1 ;
-(void)setParticleBlendMode:(long long)arg1 ;
-(void)setParticleBirthRate:(double)arg1 ;
-(void)setParticleAction:(SKAction *)arg1 ;
-(void)setNumParticlesToEmit:(unsigned long long)arg1 ;
-(void)setEmissionDistance:(double)arg1 ;
-(void)setEmissionDistanceRange:(double)arg1 ;
-(void)setParticleAlphaSequence:(SKKeyframeSequence *)arg1 ;
-(void)setParticleColorSequence:(SKKeyframeSequence *)arg1 ;
-(void)setParticleColorBlendFactorSequence:(SKKeyframeSequence *)arg1 ;
-(void)setParticleScaleSequence:(SKKeyframeSequence *)arg1 ;
-(void)setParticleRotationSequence:(id)arg1 ;
-(void)setFieldInfluenceSequence:(id)arg1 ;
-(void)setParticleSpeedSequence:(id)arg1 ;
-(SKAction *)particleAction;
-(double)emissionDistance;
-(double)emissionDistanceRange;
-(SKKeyframeSequence *)particleScaleSequence;
-(id)particleRotationSequence;
-(id)fieldInfluenceSequence;
-(void)setParticleColorRedRange:(double)arg1 ;
-(void)setParticleColorGreenRange:(double)arg1 ;
-(void)setParticleColorBlueRange:(double)arg1 ;
-(void)setParticleColorAlphaRange:(double)arg1 ;
-(void)setParticleColorRedSpeed:(double)arg1 ;
-(void)setParticleColorGreenSpeed:(double)arg1 ;
-(void)setParticleColorBlueSpeed:(double)arg1 ;
-(void)setParticleColorAlphaSpeed:(double)arg1 ;
-(void)setParticleColorBlendFactor:(double)arg1 ;
-(void)setParticleColorBlendFactorRange:(double)arg1 ;
-(void)setParticleColorBlendFactorSpeed:(double)arg1 ;
-(void)setParticleLifetime:(double)arg1 ;
-(void)setParticleLifetimeRange:(double)arg1 ;
-(void)setParticleRotation:(double)arg1 ;
-(void)setParticleRotationRange:(double)arg1 ;
-(void)setParticleRotationSpeed:(double)arg1 ;
-(double)particleScale;
-(void)setParticleScale:(double)arg1 ;
-(double)particleScaleRange;
-(void)setParticleScaleRange:(double)arg1 ;
-(double)particleScaleSpeed;
-(void)setParticleScaleSpeed:(double)arg1 ;
-(void)setParticleAlpha:(double)arg1 ;
-(void)setParticleAlphaRange:(double)arg1 ;
-(void)setParticleAlphaSpeed:(double)arg1 ;
-(void)setParticleSpeed:(double)arg1 ;
-(void)setParticleSpeedRange:(double)arg1 ;
-(void)setEmissionAngle:(double)arg1 ;
-(void)setEmissionAngleRange:(double)arg1 ;
-(void)setParticleZPosition:(double)arg1 ;
-(BOOL)densityBased;
-(void)setDensityBased:(BOOL)arg1 ;
-(double)particleDensity;
-(void)setParticleDensity:(double)arg1 ;
-(BOOL)wantsNewParticles;
-(void)setWantsNewParticles:(BOOL)arg1 ;
-(BOOL)usesPointSprites;
-(void)setUsesPointSprites:(BOOL)arg1 ;
-(id)subEmitterNode;
-(void)setPhysicsWorld:(id)arg1 ;
-(unsigned)activeParticleCount;
-(double)particleZPositionSpeed;
-(void)setParticleZPositionSpeed:(double)arg1 ;
-(double)particleZPositionRange;
-(void)setParticleZPositionRange:(double)arg1 ;
-(void)resetSimulation;
-(id)initWithMinimumParticleCapacity:(unsigned long long)arg1 ;
-(id)initWithMinimumParticleCapacity:(unsigned long long)arg1 minimumPositionBufferCapacity:(unsigned long long)arg2 ;
-(void)advanceSimulationTime:(double)arg1 ;
-(unsigned long long)particleRenderOrder;
-(void)setParticleRenderOrder:(unsigned long long)arg1 ;
@end

