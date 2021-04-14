/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHyperplane : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	double* __point;
	double* __normal;
	unsigned long long __dimensions;

}

@property (nonatomic,readonly) const double* _point; 
@property (nonatomic,readonly) const double* _normal; 
@property (nonatomic,readonly) unsigned long long _dimensions;              //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const double*)_point;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(unsigned long long)_dimensions;
-(const double*)_normal;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(void)_mutatePoint:(/*^block*/id)arg1 ;
-(void)_mutateNormal:(/*^block*/id)arg1 ;
@end

