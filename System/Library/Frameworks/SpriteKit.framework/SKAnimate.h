/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class NSArray;

@interface SKAnimate : SKAction {

	SKCAnimate* _mycaction;
	NSArray* _textures;

}

@property (assign,nonatomic) double timePerFrame; 
+(BOOL)supportsSecureCoding;
+(id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4 ;
+(id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)reversedAction;
-(double)timePerFrame;
-(void)setTimePerFrame:(double)arg1 ;
@end

