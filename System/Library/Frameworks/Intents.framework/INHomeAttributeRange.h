/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INHomeAttributeRange : NSObject <NSCopying, NSSecureCoding> {

	double _lowerValue;
	double _upperValue;

}

@property (nonatomic,readonly) double lowerValue;              //@synthesize lowerValue=_lowerValue - In the implementation block
@property (nonatomic,readonly) double upperValue;              //@synthesize upperValue=_upperValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRange:(double)arg1 upperValue:(double)arg2 ;
-(double)lowerValue;
-(double)upperValue;
@end

