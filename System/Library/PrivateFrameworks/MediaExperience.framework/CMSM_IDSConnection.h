/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, IDSDevice, NSString;

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {

	IDSService* pIdsService;
	NSObject*<OS_dispatch_queue> idsDispatchQueue;
	IDSDevice* pNearbyPairedDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)updateNearbyPairedDevice;
-(id)getNearbyPairedDevice;
-(id)copyNearbyPairedDeviceUniqueID;
-(id)copyNearbyPairedDeviceName;
-(id)copyNearbyPairedDeviceModelIdentifier;
-(id)copyNearbyPairedDeviceProductName;
@end
