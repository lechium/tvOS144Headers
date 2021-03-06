//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASActivityRecorder : NSObject
{
}

+ (id)predicateForLaunchActivities;	// IMP=0x000000010001874c
+ (id)predicateForStartedActivities;	// IMP=0x0000000100018710
+ (id)predicateForPendingActivities;	// IMP=0x00000001000186d8
+ (id)predicateForUniqueRecord:(id)arg1;	// IMP=0x000000010001856c
+ (id)predicateForActivityWithSubmitDate:(id)arg1;	// IMP=0x0000000100018484
+ (id)predicateForActivityWithName:(id)arg1;	// IMP=0x000000010001844c
- (void)deleteActivitiesIfRequired:(id)arg1;	// IMP=0x000000010001a1c0
- (void)deleteOldActivities:(id)arg1;	// IMP=0x000000010001a050
- (void)deleteActivites:(id)arg1 moc:(id)arg2;	// IMP=0x0000000100019f94
- (void)deleteActivity:(id)arg1 context:(id)arg2;	// IMP=0x0000000100019e60
- (void)updateActivityCanceled:(id)arg1 context:(id)arg2;	// IMP=0x0000000100019e0c
- (void)updateActivityCompleted:(id)arg1 context:(id)arg2;	// IMP=0x0000000100019db8
- (void)updateActivityStarted:(id)arg1 context:(id)arg2;	// IMP=0x0000000100019d64
- (void)updateActivity:(id)arg1 value:(int)arg2 context:(id)arg3;	// IMP=0x0000000100019c6c
- (void)copyActivity:(id)arg1 toManagedObject:(id)arg2;	// IMP=0x00000001000194d8
- (id)getActivityFromManagedObject:(id)arg1;	// IMP=0x0000000100018d0c
- (id)fetchAllActivities:(id)arg1;	// IMP=0x0000000100018cf8
- (id)fetchActivity:(id)arg1 context:(id)arg2;	// IMP=0x0000000100018c20
- (id)fetchActivitiesUsingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100018ad0
- (id)createOrUpdateActivity:(id)arg1 context:(id)arg2;	// IMP=0x00000001000188f8
- (id)createNewActivity:(id)arg1;	// IMP=0x0000000100018868
- (id)entityName;	// IMP=0x0000000100018440

@end

