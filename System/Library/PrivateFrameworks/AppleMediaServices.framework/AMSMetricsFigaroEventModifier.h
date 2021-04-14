/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject {

	NSDictionary* _fieldFilters;
	NSString* _sampleSessionKey;
	NSDictionary* _metricsDictionary;
	NSDictionary* _overrideDictionary;

}

@property (nonatomic,readonly) NSDictionary * fieldFilters;                    //@synthesize fieldFilters=_fieldFilters - In the implementation block
@property (nonatomic,readonly) NSDictionary * metricsDictionary;               //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * overrideDictionary;              //@synthesize overrideDictionary=_overrideDictionary - In the implementation block
@property (nonatomic,readonly) NSString * sampleSessionKey;                    //@synthesize sampleSessionKey=_sampleSessionKey - In the implementation block
@property (nonatomic,readonly) double flushInterval; 
-(NSDictionary *)metricsDictionary;
-(double)flushInterval;
-(id)initWithMetricsDictionary:(id)arg1 overrideDictionary:(id)arg2 ;
-(BOOL)fieldFiltersMatchEvent:(id)arg1 ;
-(id)_fieldFiltersFromOverrides:(id)arg1 ;
-(id)_createSampleSessionKey;
-(NSDictionary *)fieldFilters;
-(id)_overridePropertyForKey:(id)arg1 ;
-(BOOL)_shouldSampleEvent:(id)arg1 ;
-(NSDictionary *)overrideDictionary;
-(NSString *)sampleSessionKey;
-(id)prepareEvent:(id)arg1 ;
-(id)reportingURLForEvent:(id)arg1 ;
-(BOOL)shouldDropEvent:(id)arg1 ;
-(BOOL)shouldSkipEvent:(id)arg1 ;
@end
