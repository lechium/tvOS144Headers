/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject {

	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;
	CGPoint _contactPoint;
	CGVector _contactNormal;
	double _impulse;
	BOOL _didBegin;
	BOOL _didEnd;

}

@property (assign) BOOL didBegin; 
@property (assign) BOOL didEnd; 
@property (nonatomic,readonly) PKPhysicsBody * bodyA; 
@property (nonatomic,readonly) PKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGPoint contactPoint; 
@property (nonatomic,readonly) CGVector contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
-(id)init;
-(BOOL)didBegin;
-(BOOL)didEnd;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(CGPoint)contactPoint;
-(CGVector)contactNormal;
-(double)collisionImpulse;
-(void)setDidBegin:(BOOL)arg1 ;
-(void)setDidEnd:(BOOL)arg1 ;
-(void)setContactPoint:(CGPoint)arg1 ;
-(void)setContactNormal:(CGVector)arg1 ;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(void)setCollisionImpulse:(double)arg1 ;
@end

