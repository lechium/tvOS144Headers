/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding> {

	id _referenceObject;
	NSDictionary* _options;
	NSArray* _transforms;
	void* _cachedObject;
	btCollisionShape* _collisionShape;

}

@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) id sourceObject;                     //@synthesize referenceObject=_referenceObject - In the implementation block
@property (nonatomic,readonly) NSArray * transforms; 
+(BOOL)supportsSecureCoding;
+(id)shapeWithGeometry:(id)arg1 options:(id)arg2 ;
+(id)shapeWithNode:(id)arg1 options:(id)arg2 ;
+(id)shapeWithShapes:(id)arg1 transforms:(id)arg2 ;
+(id)defaultShapeForGeometry:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(btCollisionShape*)_handle;
-(NSArray *)transforms;
-(id)sourceObject;
-(id)referenceObject;
-(id)initWithContent:(id)arg1 options:(id)arg2 ;
-(void)_setTransforms:(id)arg1 ;
-(void)_customEncodingOfSCNPhysicsShape:(id)arg1 ;
-(void)_customDecodingOfSCNPhysicsShape:(id)arg1 ;
-(void)setReferenceObject:(id)arg1 ;
-(id)initWithCachedObject:(void*)arg1 options:(id)arg2 ;
@end

