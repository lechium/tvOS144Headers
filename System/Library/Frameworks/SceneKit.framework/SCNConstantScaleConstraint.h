/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNConstantScaleConstraint : SCNConstraint {

	float _scale;
	BOOL _screenSpace;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) BOOL screenSpace; 
+(BOOL)supportsSecureCoding;
+(id)constantScaleConstraint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
@end

