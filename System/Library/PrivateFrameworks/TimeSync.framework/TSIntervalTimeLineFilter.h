/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSTimeLineFilter.h>

@protocol OS_dispatch_queue;
@class NSObject, TSIntervalFilter;

@interface TSIntervalTimeLineFilter : TSTimeLineFilter {

	unsigned long long _AAnchor[8];
	unsigned long long _BAnchor[8];
	long long _AEntries[8];
	long long _BEntries[8];
	NSObject*<OS_dispatch_queue> _syncQueue;
	long long _validIndex;
	TSIntervalFilter* _aIntervalFilter;
	TSIntervalFilter* _bIntervalFilter;

}
-(void)addTimestamps:(SCD_Struct_TS0)arg1 ;
-(SCD_Struct_TS0)rateRatio;
-(void)getAnchors:(SCD_Struct_TS0*)arg1 andRateRatio:(SCD_Struct_TS0*)arg2 ;
-(unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1 ;
-(unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1 ;
-(unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1 ;
-(unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1 ;
-(void)resetFilter;
-(BOOL)canConvertTime;
-(void)changeToNewFilterSize:(unsigned char)arg1 ;
-(id)initWithExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 filterSize:(unsigned char)arg3 ;
-(void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 ;
-(void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 multiIntervalCount:(unsigned)arg3 ;
@end

