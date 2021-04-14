/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PHMemoryRelevanceHelper : NSObject
+(double)relevanceScoreForMemory:(id)arg1 atDate:(id)arg2 ;
+(BOOL)isMemory:(id)arg1 relevantAtDate:(id)arg2 ;
+(BOOL)isMemory:(id)arg1 proactiveWorthyAtDate:(id)arg2 ;
+(BOOL)_isMemoryTemporal:(id)arg1 ;
+(BOOL)_isMemoryCategoryTemporal:(unsigned long long)arg1 ;
+(BOOL)_isMemorySubcategoryTemporal:(unsigned long long)arg1 ;
+(BOOL)_isDate:(id)arg1 inSameDayAndMonthAsDate:(id)arg2 ;
+(double)_notificationLevelWeightForMemory:(id)arg1 ;
+(double)_categoryWeightForMemory:(id)arg1 ;
+(double)_subcategoryWeightForMemory:(id)arg1 ;
@end

