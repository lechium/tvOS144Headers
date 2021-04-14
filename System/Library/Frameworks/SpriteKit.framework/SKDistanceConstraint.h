/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange, SKNode;

@interface SKDistanceConstraint : SKConstraint {

	SKRange* _distanceRange;
	SKNode* _node;
	CGPoint _point;

}

@property (copy) SKRange * distanceRange;              //@synthesize distanceRange=_distanceRange - In the implementation block
@property (__weak) SKNode * node;                      //@synthesize node=_node - In the implementation block
@property (assign) CGPoint point;                      //@synthesize point=_point - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithNode:(id)arg1 distanceRange:(id)arg2 ;
+(id)constraintWithPoint:(CGPoint)arg1 distanceRange:(id)arg2 ;
+(id)constraintWithPoint:(CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)point;
-(SKNode *)node;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setNode:(SKNode *)arg1 ;
-(SKRange *)distanceRange;
-(BOOL)isEqualToDistanceConstraint:(id)arg1 ;
-(void)setDistanceRange:(SKRange *)arg1 ;
-(id)initWithPoint:(CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3 ;
@end

