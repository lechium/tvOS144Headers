/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHistogram.h>

@class RESortedDictionary;

@interface _REContinuousHistogram : REHistogram {

	unsigned long long _binningValue;
	RESortedDictionary* _values;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)addValue:(unsigned long long)arg1 ;
-(void)removeValue:(unsigned long long)arg1 ;
-(unsigned long long)mean;
-(unsigned long long)standardDeviation;
-(unsigned long long)countForValue:(unsigned long long)arg1 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 ;
-(void)_enumerateValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
@end

