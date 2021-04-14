/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCharacteristicsAvailabilityListenerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRecordingSessionNotificationTriggerDelegate, OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDCharacteristicsAvailabilityListener, NSNotificationCenter, NSSet, NSString;

@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging> {

	id<HMDCameraRecordingSessionNotificationTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _cameraAccessory;
	HMDCharacteristicsAvailabilityListener* _availabilityListener;
	NSNotificationCenter* _notificationCenter;
	NSSet* _availableCharacteristics;
	NSString* _clientIdentifier;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                       //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * cameraAccessory;                                     //@synthesize cameraAccessory=_cameraAccessory - In the implementation block
@property (readonly) HMDCharacteristicsAvailabilityListener * availabilityListener;                //@synthesize availabilityListener=_availabilityListener - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (retain) NSSet * availableCharacteristics;                                               //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (copy,readonly) NSString * clientIdentifier;                                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (__weak) id<HMDCameraRecordingSessionNotificationTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraRecordingSessionNotificationTriggerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingSessionNotificationTriggerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(NSString *)clientIdentifier;
-(NSNotificationCenter *)notificationCenter;
-(id)logIdentifier;
-(void)handleAccessoryConnected:(id)arg1 ;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(void)handleCharacteristicsValueUpdated:(id)arg1 ;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
-(NSSet *)availableCharacteristics;
-(id)initWithCamera:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithCamera:(id)arg1 workQueue:(id)arg2 availabilityListener:(id)arg3 notificationCenter:(id)arg4 ;
-(HMDHAPAccessory *)cameraAccessory;
-(HMDCharacteristicsAvailabilityListener *)availabilityListener;
-(void)_handleObservedCharacteristicsValueUpdate:(id)arg1 ;
@end

