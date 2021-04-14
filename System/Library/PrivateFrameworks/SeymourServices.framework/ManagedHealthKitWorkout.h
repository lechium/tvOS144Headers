/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, ManagedHealthKitSessionReference;

@interface ManagedHealthKitWorkout : NSManagedObject

@property (assign,nonatomic) double duration; 
@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) BOOL isIndoorWorkout; 
@property (copy,nonatomic) NSDate * startDate; 
@property (assign,nonatomic) int workoutActivityType; 
@property (retain,nonatomic) ManagedHealthKitSessionReference * sessionReference; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

