/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying> {

	NSTimeZone* _nsTimeZone;

}

@property (nonatomic,retain) NSTimeZone * nsTimeZone;              //@synthesize nsTimeZone=_nsTimeZone - In the implementation block
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(id)initWithNSTimeZone:(id)arg1 ;
-(NSTimeZone *)nsTimeZone;
-(id)NSTimeZone;
-(void)setNsTimeZone:(NSTimeZone *)arg1 ;
@end

