/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformOp.h>

@class NSString, MDLAnimatedQuaternion;

@interface MDLTransformOrientOp : NSObject <MDLTransformOp> {

	BOOL _inverse;
	NSString* _name;
	MDLAnimatedQuaternion* _animatedValue;

}

@property (assign,nonatomic) BOOL inverse;                                         //@synthesize inverse=_inverse - In the implementation block
@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MDLAnimatedQuaternion * animatedValue;              //@synthesize animatedValue=_animatedValue - In the implementation block
-(NSString *)name;
-(BOOL)inverse;
-(MDLAnimatedQuaternion *)animatedValue;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg1 inverse:(BOOL)arg2 data:(id)arg3 ;
-(void)setInverse:(BOOL)arg1 ;
@end

