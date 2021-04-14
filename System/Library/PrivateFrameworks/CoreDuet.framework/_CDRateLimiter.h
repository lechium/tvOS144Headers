/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDRateLimiting.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSString;

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {

	NSDate* _lastRecorded;
	long long _balance;
	NSObject*<OS_dispatch_queue> _queue;
	double _period;
	long long _count;

}

@property (readonly) double period;                                 //@synthesize period=_period - In the implementation block
@property (readonly) long long count;                               //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRateLimiter;
-(NSString *)description;
-(id)init;
-(long long)count;
-(double)period;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)credit;
-(BOOL)debited;
-(void)recordTimeAndRefillIfNeeded;
-(void)resetRateLimitWithTimeStamp:(id)arg1 ;
@end

