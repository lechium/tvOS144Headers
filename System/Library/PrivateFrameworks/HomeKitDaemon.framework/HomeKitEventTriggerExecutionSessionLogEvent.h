/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAnalyticsEventTriggerExecutionSessionData, NSString;

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	HMDAnalyticsEventTriggerExecutionSessionData* _analyticsData;

}

@property (nonatomic,readonly) HMDAnalyticsEventTriggerExecutionSessionData * analyticsData;              //@synthesize analyticsData=_analyticsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(id)initWithSessionID:(id)arg1 ;
-(HMDAnalyticsEventTriggerExecutionSessionData *)analyticsData;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(int)toAWDExecutionState:(int)arg1 ;
@end

