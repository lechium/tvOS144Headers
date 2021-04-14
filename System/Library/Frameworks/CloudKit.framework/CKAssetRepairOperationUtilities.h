/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKAssetRepairOperationUtilities : NSObject
+(id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2 ;
+(BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg1 ;
+(BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg1 ;
+(BOOL)errorIsRetriableInNearFuture:(id)arg1 ;
+(id)createRepairOperationGroupWithName:(id)arg1 ;
+(id)createRepairContainerFromContainer:(id)arg1 ;
+(void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4 ;
+(id)uploadRequestMetadataFromRepairRecord:(id)arg1 ;
@end
