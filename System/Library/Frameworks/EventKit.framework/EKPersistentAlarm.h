/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAlarm : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
+(Class)meltedClass;
+(Class)alternateUniverseClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(long long)alarmType;
-(long long)proximity;
-(int)entityType;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(id)acknowledgedDate;
-(id)semanticIdentifier;
-(void)setStructuredLocation:(id)arg1 ;
-(id)structuredLocation;
-(id)externalData;
-(id)snoozedAlarms;
-(id)calendarItemOwner;
-(id)originalAlarm;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setOriginalAlarm:(id)arg1 ;
-(void)setExternalData:(id)arg1 ;
-(void)setCalendarItemOwner:(id)arg1 ;
-(id)absoluteDate;
-(void)setAbsoluteDate:(id)arg1 ;
-(id)relativeOffset;
-(void)setRelativeOffset:(id)arg1 ;
-(void)setAlarmType:(long long)arg1 ;
-(BOOL)isDefaultAlarm;
-(id)calendarOwner;
-(void)setCalendarOwner:(id)arg1 ;
-(void)setIsDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(id)arg1 ;
@end
