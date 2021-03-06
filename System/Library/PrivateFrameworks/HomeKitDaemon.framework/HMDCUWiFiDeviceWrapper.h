/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDWACDevice.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, CUWiFiDevice, CUWACSession, NSObject;

@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging> {

	CUWiFiDevice* _cuWiFiDevice;
	CUWACSession* _wacSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* deviceID;

}

@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)name;
-(NSString *)description;
-(NSUUID *)identifier;
-(BOOL)isConfigured;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)deviceID;
-(NSString *)ssid;
-(id)logIdentifier;
-(id)underlyingDevice;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsAirPlay2;
-(id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2 ;
@end

