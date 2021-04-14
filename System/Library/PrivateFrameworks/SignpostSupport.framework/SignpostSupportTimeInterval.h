/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SignpostSupportTimeInterval <NSObject>
@required
-(float)durationSeconds;
-(double)durationMs;
-(unsigned long long)durationMachContinuousTime;
-(double)timebaseRatio;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(unsigned long long)durationNanoseconds;
-(unsigned long long)startNanoseconds;
-(unsigned long long)endNanoseconds;
-(double)startSeconds;
-(double)endSeconds;
-(double)startMs;
-(double)endMs;

@end
