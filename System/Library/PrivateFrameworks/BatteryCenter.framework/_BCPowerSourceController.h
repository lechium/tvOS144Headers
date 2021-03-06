/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <libobjc.A.dylib/BCBatteryDeviceObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSArray, NSString;

@interface _BCPowerSourceController : NSObject <BCBatteryDeviceObservable> {

	int _powerSourceBatteryChangeNotifyToken;
	int _powerSourceTimeRemainingNotifyToken;
	int _accPowerSourceNotifyToken;
	int _accPowerSourceTimeRemainingNotifyToken;
	int _accAttachNotifyToken;
	int _batterySaverNotifyToken;
	BOOL _batterySaverModeActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _observersToQueues;

}

@property (nonatomic,copy,readonly) NSArray * connectedDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSArray *)connectedDevices;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_endPowerSourceObserving;
-(id)_orderedDevicesFromPowerSourcesBlob:(void*)arg1 powerSourcesList:(CFArrayRef)arg2 ;
-(void)_notifyObserver:(id)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_beginPowerSourceObservingIfNecessary;
-(id)_nameForCurrentDevice;
-(long long)_lowBatteryLevelForCurrentDevice;
-(BOOL)_isDevicePartOfPair:(id)arg1 ;
-(BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1 ;
-(id)_identifierFromPowerSourceDescription:(id)arg1 ;
-(long long)_transportTypeFromPowerSourceTransportTypeString:(id)arg1 ;
-(long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg1 transportType:(long long)arg2 ;
-(unsigned long long)_partFromPowerSourcePartIdentifier:(id)arg1 ;
-(unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg1 partType:(unsigned long long)arg2 transportType:(long long)arg3 vendor:(long long)arg4 productIdentifier:(long long)arg5 ;
-(long long)_powerSourceStateFromPowerSourceStateString:(id)arg1 ;
-(id)_nameForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 name:(id)arg3 partName:(id)arg4 isInternal:(BOOL)arg5 ;
-(int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3 ;
-(long long)_lowBatteryLevelForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 transportType:(long long)arg3 ;
-(BOOL)_isBatterySaverModeActive;
-(BOOL)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long*)arg2 ;
-(id)_deviceByCoalescingDevice:(id)arg1 ;
-(void)_queryConnectedDevices;
-(int)_registerForNotification:(const char*)arg1 token:(int*)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(int)_registerForPowerSourceChangeNotification:(const char*)arg1 token:(int*)arg2 queue:(id)arg3 ;
-(void)_handleBatterySaverModeChanged:(int)arg1 ;
-(void)_updateBatterySaverModeState;
-(void)addBatteryDeviceObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeBatteryDeviceObserver:(id)arg1 ;
@end

