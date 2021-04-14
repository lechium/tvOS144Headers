/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDDoorbellChimeControllerContext.h>
@class HMDHAPAccessory, NSNotificationCenter, HMDCharacteristicsAvailabilityListener;


@protocol HMDDoorbellChimeControllerContext <NSObject>
@property (__weak,readonly) HMDHAPAccessory * accessory; 
@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (readonly) HMDCharacteristicsAvailabilityListener * listener; 
@property (getter=isFeatureEnabled,readonly) BOOL featureEnabled; 
@property (getter=isCurrentDevicePrimaryResident,readonly) BOOL currentDevicePrimaryResident; 
@property (readonly) Class doorbellBulletinUtilitiesClass; 
@property (readonly) double doorbellChimeMaximumAnnounceDelay; 
@required
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCharacteristicsAvailabilityListener *)listener;
-(HMDHAPAccessory *)accessory;
-(NSNotificationCenter *)notificationCenter;
-(BOOL)isFeatureEnabled;
-(BOOL)isCurrentDevicePrimaryResident;
-(Class)doorbellBulletinUtilitiesClass;
-(id)postCULiveAction:(id)arg1;
-(double)doorbellChimeMaximumAnnounceDelay;

@end


@protocol OS_dispatch_queue;
@class HMDHAPAccessory, NSNotificationCenter, HMDCharacteristicsAvailabilityListener, NSObject, NSString;

@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext> {

	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCharacteristicsAvailabilityListener* _listener;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                                                   //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                               //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (readonly) HMDCharacteristicsAvailabilityListener * listener;                                    //@synthesize listener=_listener - In the implementation block
@property (getter=isFeatureEnabled,readonly) BOOL featureEnabled; 
@property (getter=isCurrentDevicePrimaryResident,readonly) BOOL currentDevicePrimaryResident; 
@property (readonly) Class doorbellBulletinUtilitiesClass; 
@property (readonly) double doorbellChimeMaximumAnnounceDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCharacteristicsAvailabilityListener *)listener;
-(HMDHAPAccessory *)accessory;
-(NSNotificationCenter *)notificationCenter;
-(BOOL)isFeatureEnabled;
-(BOOL)isCurrentDevicePrimaryResident;
-(Class)doorbellBulletinUtilitiesClass;
-(id)postCULiveAction:(id)arg1 ;
-(double)doorbellChimeMaximumAnnounceDelay;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
@end
