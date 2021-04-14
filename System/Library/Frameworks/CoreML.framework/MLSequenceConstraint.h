/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	MLFeatureDescription* _valueDescription;
	NSRange _countRange;

}

@property (nonatomic,readonly) MLFeatureDescription * valueDescription;              //@synthesize valueDescription=_valueDescription - In the implementation block
@property (nonatomic,readonly) NSRange countRange;                                   //@synthesize countRange=_countRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithValueDescription:(id)arg1 countRange:(NSRange)arg2 ;
-(MLFeatureDescription *)valueDescription;
-(NSRange)countRange;
@end

