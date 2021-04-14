/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, NSTimeZone, NSSet;

@interface CLSManagedPublicEvent : NSManagedObject

@property (nonatomic,retain) NSNumber * expectedAttendanceAsNumber; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSDate * localStartDate; 
@property (nonatomic,retain) NSDate * localEndDate; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long timeZoneOffset; 
@property (assign,nonatomic) double localStartTime; 
@property (assign,nonatomic) double localEndTime; 
@property (assign,nonatomic) long long expectedAttendance; 
@property (assign,nonatomic) unsigned long long businessItemMuid; 
@property (assign,nonatomic) double businessItemLatitude; 
@property (assign,nonatomic) double businessItemLongitude; 
@property (nonatomic,retain) NSSet * categories; 
@property (nonatomic,retain) NSSet * queryLocations; 
@property (nonatomic,retain) NSSet * performers; 
+(id)entityName;
-(NSTimeZone *)timeZone;
-(void)setExpectedAttendance:(long long)arg1 ;
-(long long)expectedAttendance;
@end

