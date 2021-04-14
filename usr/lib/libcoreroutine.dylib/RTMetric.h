/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSMutableDictionary, NSString;

@interface RTMetric : NSObject <RTMetricProtocol> {

	BOOL _loggingEnabled;
	BOOL _submitted;
	NSMutableDictionary* _metrics;

}

@property (assign,nonatomic) BOOL loggingEnabled;                          //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL submitted;                               //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)metricName;
+(id)binForNumber:(id)arg1 bins:(id)arg2 ;
+(id)supportedMetricKeys;
+(id)binsFromStart:(id)arg1 toEnd:(id)arg2 gap:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(NSMutableDictionary *)metrics;
-(BOOL)loggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitted;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(BOOL)setAllMetrics:(id)arg1 error:(id*)arg2 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
@end

