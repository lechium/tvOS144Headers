/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVServices/TVServices-Structs.h>
@interface TVSNetworkUtilities : NSObject
+(id)proxies;
+(void)setupNetworkMonitoring;
+(BOOL)internetAvailable;
+(id)_networkServices;
+(void)_setupDynamicStoreInterfaceStateNotifications;
+(id)_safeNameForInterface:(SCNetworkInterfaceRef)arg1 ;
+(SCDynamicStoreRef)_dynamicStoreSingleton;
+(id)_mergedStateForService:(CFStringRef)arg1 ;
+(void)_setupDynamicStoreSingleton;
+(void)_updateDynamicStoreObservers:(BOOL)arg1 ;
+(void)_setupReachabilityCallback;
+(void)_setNeedsUpdateNetworkState;
+(void)_updatePhysicalNetworkState;
+(void)_updateDynamicStoreAvailabilityWithDelay:(double)arg1 ;
+(BOOL)physicalNetworkAvailable;
+(void)_handleSysConfigUpdate;
+(void)_handleNetworkAvailabilityUpdate;
@end

