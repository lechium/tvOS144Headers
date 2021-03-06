/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, ATUserDefaults, NSObject, ATClientController;

@interface ATDeviceDiskUsageProvider : NSObject {

	NSMutableDictionary* _diskUsageInfo;
	ATUserDefaults* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _usageInfoAccessQueue;
	NSObject*<OS_dispatch_group> _usageUpdateGroup;
	ATClientController* _clientController;

}
+(id)sharedInstance;
-(id)init;
-(void)getUpdatedUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCurrentDiskUsage;
-(void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)getCurrentUsage;
-(id)_diskUsageForDataClass:(id)arg1 ;
-(void)_updatePurgeableStorageUsage;
@end

