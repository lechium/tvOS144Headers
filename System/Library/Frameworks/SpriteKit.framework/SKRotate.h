/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKRotate : SKAction {

	SKCRotate* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(double)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(double)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3 ;
+(id)rotateByX:(double)arg1 duration:(double)arg2 ;
+(id)rotateToX:(double)arg1 duration:(double)arg2 ;
+(id)rotateByY:(double)arg1 duration:(double)arg2 ;
+(id)rotateToY:(double)arg1 duration:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end
