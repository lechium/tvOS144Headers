/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSClock.h>

@interface TSMachAbsoluteNanoseconds : TSClock {

	mach_timebase_info _timebaseInfo;

}
+(id)machAbsoluteNanosecondsClock;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1 ;
-(unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
-(id)clockName;
-(unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1 ;
-(unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1 ;
@end

