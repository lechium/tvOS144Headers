/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) double anchorValue; 
@property (nonatomic,readonly) double anchorTimeStamp; 
@property (nonatomic,readonly) double rate; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
+(double)currentTimeStamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)rate;
-(double)currentValue;
-(CGPoint)_timing;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(id)initWithValueTiming:(id)arg1 ;
-(BOOL)isEqualToValueTiming:(id)arg1 ;
-(double)valueForTimeStamp:(double)arg1 ;
-(double)timeStampForValue:(double)arg1 ;
@end

