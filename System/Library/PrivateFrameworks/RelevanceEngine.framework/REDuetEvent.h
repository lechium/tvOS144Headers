/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject {

	NSDateInterval* _interval;
	REFeatureValue* _value;
	double _confidence;

}

@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) REFeatureValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
+(id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(REFeatureValue *)value;
-(double)confidence;
-(NSDateInterval *)interval;
@end

