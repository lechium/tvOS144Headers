/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VGOEMApplicationFinderUpdates.h>
#import <libobjc.A.dylib/VGExternalAccessoryUpdating.h>
#import <libobjc.A.dylib/VGOEMAppSOCStreaming.h>

@protocol VGDataCoordinatorDelegate, OS_dispatch_queue, VGOEMApplicationFinding;
@class NSObject, NSArray, VGExternalAccessory, NSMutableArray, NSTimer, NSMutableSet, NSString;

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming> {

	id<VGDataCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<VGOEMApplicationFinding> _applicationFinder;
	NSArray* _applications;
	VGExternalAccessory* _accessory;
	NSMutableArray* _unpairedVehicles;
	NSTimer* _vehicleStateRefreshTimer;
	NSMutableSet* _observedVehicles;

}

@property (nonatomic,copy,readonly) NSArray * unpairedVehicles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)deviceIdentifier;
-(void)_loadIapVehicles;
-(void)_invalidateRefreshTimer;
-(unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)arg1 ;
-(id)_vehicleStateProviderForVehicle:(id)arg1 ;
-(void)_updateGarageWithVehicle:(id)arg1 selectVehicle:(BOOL)arg2 syncAcrossDevices:(BOOL)arg3 ;
-(id)_applicationForVehicle:(id)arg1 ;
-(void)_saveOnboardingInfoForVehicle:(id)arg1 ;
-(void)_loadAllOEMVehiclesForApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startChargeStreamForVehicle:(id)arg1 ;
-(void)_refreshStateForTrackedVehicles;
-(void)_setupTimerIfNeeded;
-(void)_stopChargeStreamForVehicle:(id)arg1 ;
-(void)_updateStateOfChargeForVehicle:(id)arg1 syncAcrossDevices:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_vehicleStateRefreshInterval;
-(id)_oemAppForChargeStreamForVehicle:(id)arg1 ;
-(void)_removeUnpairedIapVehicleIfNeeded;
-(void)accessoryUpdatedWithVehicle:(id)arg1 ;
-(void)OEMAppsUpdated:(id)arg1 ;
-(void)vehicleStateUpdated:(id)arg1 ;
-(id)initWithApplicationFinder:(id)arg1 externalAccessory:(id)arg2 delegate:(id)arg3 ;
-(NSArray *)unpairedVehicles;
-(void)finishOnboardingVehicle:(id)arg1 ;
-(BOOL)shouldUnpairVehicle:(id)arg1 ;
-(void)unpairVehicle:(id)arg1 ;
-(void)startContinuousUpdatesForVehicle:(id)arg1 ;
-(void)endAllContinuousUpdates;
-(void)getLatestStateOfVehicle:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

