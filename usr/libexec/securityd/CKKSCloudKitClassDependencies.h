//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKKSCloudKitClassDependencies : NSObject
{
    Class _fetchRecordZoneChangesOperationClass;	// 8 = 0x8
    Class _fetchRecordsOperationClass;	// 16 = 0x10
    Class _queryOperationClass;	// 24 = 0x18
    Class _modifySubscriptionsOperationClass;	// 32 = 0x20
    Class _modifyRecordZonesOperationClass;	// 40 = 0x28
    Class _apsConnectionClass;	// 48 = 0x30
    Class _nsnotificationCenterClass;	// 56 = 0x38
    Class _nsdistributednotificationCenterClass;	// 64 = 0x40
    Class _notifierClass;	// 72 = 0x48
}

+ (id)forLiveCloudKit;	// IMP=0x0000000100131b78
- (void).cxx_destruct;	// IMP=0x0000000100131af4
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(readonly) Class nsdistributednotificationCenterClass; // @synthesize nsdistributednotificationCenterClass=_nsdistributednotificationCenterClass;
@property(readonly) Class nsnotificationCenterClass; // @synthesize nsnotificationCenterClass=_nsnotificationCenterClass;
@property(readonly) Class apsConnectionClass; // @synthesize apsConnectionClass=_apsConnectionClass;
@property(readonly) Class modifyRecordZonesOperationClass; // @synthesize modifyRecordZonesOperationClass=_modifyRecordZonesOperationClass;
@property(readonly) Class modifySubscriptionsOperationClass; // @synthesize modifySubscriptionsOperationClass=_modifySubscriptionsOperationClass;
@property(readonly) Class queryOperationClass; // @synthesize queryOperationClass=_queryOperationClass;
@property(readonly) Class fetchRecordsOperationClass; // @synthesize fetchRecordsOperationClass=_fetchRecordsOperationClass;
@property(readonly) Class fetchRecordZoneChangesOperationClass; // @synthesize fetchRecordZoneChangesOperationClass=_fetchRecordZoneChangesOperationClass;
- (id)initWithFetchRecordZoneChangesOperationClass:(Class)arg1 fetchRecordsOperationClass:(Class)arg2 queryOperationClass:(Class)arg3 modifySubscriptionsOperationClass:(Class)arg4 modifyRecordZonesOperationClass:(Class)arg5 apsConnectionClass:(Class)arg6 nsnotificationCenterClass:(Class)arg7 nsdistributednotificationCenterClass:(Class)arg8 notifierClass:(Class)arg9;	// IMP=0x0000000100131994

@end

