/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSOrderedSet;

@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding> {

	long long _type;
	NSArray* _sizeRangeForDimension;
	NSOrderedSet* _shapeSet;

}

@property (nonatomic,readonly) NSOrderedSet * shapeSet;                      //@synthesize shapeSet=_shapeSet - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * sizeRangeForDimension;              //@synthesize sizeRangeForDimension=_sizeRangeForDimension - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedShapes; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSArray *)enumeratedShapes;
-(id)initUnspecified;
-(id)initWithSizeRangeForDimension:(id)arg1 ;
-(id)initWithEnumeratedShapes:(id)arg1 ;
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(id)findAvailableShape:(id)arg1 ;
-(NSArray *)sizeRangeForDimension;
-(NSOrderedSet *)shapeSet;
@end

