/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GEOMapItemOpenState : NSObject
+(unsigned long long)_geoMapItemOpeningHoursOptionsForNormalizedHours:(id)arg1 compareDate:(id)arg2 timeZone:(id)arg3 ;
+(unsigned long long)_checkForStateWithStartTime:(double)arg1 endtime:(double)arg2 compareTimeInSeconds:(double)arg3 openingSoonThreshold:(double)arg4 closingSoonThreshold:(double)arg5 secondsOverMidnightForTomorrow:(double)arg6 isTodaysNormalizedHours:(BOOL)arg7 tomorrowsHoursBeginAtMidnight:(BOOL)arg8 ;
+(unsigned long long)_geoMapItemOpeningHoursOptionsForBusinessHours:(id)arg1 compareDate:(id)arg2 timeZone:(id)arg3 ;
@end

