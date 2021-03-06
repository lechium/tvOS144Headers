/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, NSDictionary;

@interface PGGraphHolidayMetricEvent : NSObject <PLMetricEvent> {

	NSString* _identifier;
	NSDictionary* _payload;
	NSString* _holidayName;
	unsigned long long _numberOfCelebrations;

}

@property (nonatomic,retain) NSString * holidayName;                               //@synthesize holidayName=_holidayName - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCelebrations;              //@synthesize numberOfCelebrations=_numberOfCelebrations - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                             //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventIdentifier;
+(id)celebratedHolidayMetricEventsWithGraphManager:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(NSDictionary *)payload;
-(NSString *)holidayName;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithHolidayName:(id)arg1 numberOfCelebrations:(unsigned long long)arg2 ;
-(void)setHolidayName:(NSString *)arg1 ;
-(unsigned long long)numberOfCelebrations;
-(void)setNumberOfCelebrations:(unsigned long long)arg1 ;
@end

