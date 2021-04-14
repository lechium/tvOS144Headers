/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsCalendarEventData, HMDAnalyticsCharacteristicEventData, HMDAnalyticsCharacteristicThresholdEventData, HMDAnalyticsDurationEventData, HMDAnalyticsLocationEventData, HMDAnalyticsPresenceEventData, HMDAnalyticsSignificantTimeEventData;

@interface HMDAnalyticsTriggerEventData : HMFObject {

	BOOL _endEvent;
	HMDAnalyticsCalendarEventData* _calendarEvent;
	HMDAnalyticsCharacteristicEventData* _charEvent;
	HMDAnalyticsCharacteristicThresholdEventData* _charThresholdEvent;
	HMDAnalyticsDurationEventData* _durationEvent;
	HMDAnalyticsLocationEventData* _locationEvent;
	HMDAnalyticsPresenceEventData* _presenceEvent;
	HMDAnalyticsSignificantTimeEventData* _significantTimeEvent;
	HMDAnalyticsCharacteristicThresholdEventData* _thresholdEvent;

}

@property (nonatomic,retain) HMDAnalyticsCalendarEventData * calendarEvent;                                  //@synthesize calendarEvent=_calendarEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsCharacteristicEventData * charEvent;                                //@synthesize charEvent=_charEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsCharacteristicThresholdEventData * charThresholdEvent;              //@synthesize charThresholdEvent=_charThresholdEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsDurationEventData * durationEvent;                                  //@synthesize durationEvent=_durationEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsLocationEventData * locationEvent;                                  //@synthesize locationEvent=_locationEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsPresenceEventData * presenceEvent;                                  //@synthesize presenceEvent=_presenceEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsSignificantTimeEventData * significantTimeEvent;                    //@synthesize significantTimeEvent=_significantTimeEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsCharacteristicThresholdEventData * thresholdEvent;                  //@synthesize thresholdEvent=_thresholdEvent - In the implementation block
@property (assign) BOOL endEvent;                                                                            //@synthesize endEvent=_endEvent - In the implementation block
-(HMDAnalyticsLocationEventData *)locationEvent;
-(void)setLocationEvent:(HMDAnalyticsLocationEventData *)arg1 ;
-(BOOL)endEvent;
-(void)setEndEvent:(BOOL)arg1 ;
-(HMDAnalyticsPresenceEventData *)presenceEvent;
-(void)setPresenceEvent:(HMDAnalyticsPresenceEventData *)arg1 ;
-(void)setCalendarEvent:(HMDAnalyticsCalendarEventData *)arg1 ;
-(void)setSignificantTimeEvent:(HMDAnalyticsSignificantTimeEventData *)arg1 ;
-(void)setCharEvent:(HMDAnalyticsCharacteristicEventData *)arg1 ;
-(void)setCharThresholdEvent:(HMDAnalyticsCharacteristicThresholdEventData *)arg1 ;
-(void)setDurationEvent:(HMDAnalyticsDurationEventData *)arg1 ;
-(void)setThresholdEvent:(HMDAnalyticsCharacteristicThresholdEventData *)arg1 ;
-(HMDAnalyticsCharacteristicEventData *)charEvent;
-(HMDAnalyticsCharacteristicThresholdEventData *)charThresholdEvent;
-(HMDAnalyticsSignificantTimeEventData *)significantTimeEvent;
-(HMDAnalyticsCharacteristicThresholdEventData *)thresholdEvent;
-(HMDAnalyticsCalendarEventData *)calendarEvent;
-(HMDAnalyticsDurationEventData *)durationEvent;
@end

