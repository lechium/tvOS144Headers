//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServiceProperties, NSArray, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface IDSDServiceController : NSObject
{
    NSMapTable *_services;	// 8 = 0x8
    NSMapTable *_servicesToNameMap;	// 16 = 0x10
    NSMapTable *_servicesToTopicMap;	// 24 = 0x18
    NSMutableDictionary *_deviceIDToSubServicesMap;	// 32 = 0x20
    NSSet *_allAdHocServices;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (_Bool)shouldLoadService:(id)arg1;	// IMP=0x00000001005d53c4
+ (id)sharedInstance;	// IMP=0x00000001005d5218
- (void).cxx_destruct;	// IMP=0x00000001005da7b8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *allAdHocServices; // @synthesize allAdHocServices=_allAdHocServices;
- (id)adHocServicesForIdentifier:(id)arg1;	// IMP=0x00000001005da188
- (id)linkedServicesForService:(id)arg1;	// IMP=0x00000001005d9e8c
- (id)serviceWithPushTopic:(id)arg1;	// IMP=0x00000001005d9d78
- (id)serviceWithName:(id)arg1;	// IMP=0x00000001005d9c64
- (id)serviceWithIdentifier:(id)arg1;	// IMP=0x00000001005d9bd0
@property(readonly, nonatomic) __weak NSArray *allServicesStrings;
@property(readonly, nonatomic) __weak NSArray *allTinkerServices;
@property(readonly, nonatomic) __weak NSArray *allServices;
@property(readonly, nonatomic) NSSet *allPrimaryServices;
- (id)allServicesWithAdHocServiceType:(unsigned int)arg1;	// IMP=0x00000001005d9834
- (id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2;	// IMP=0x00000001005d9740
- (void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3;	// IMP=0x00000001005d94e4
- (_Bool)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2;	// IMP=0x00000001005d9064
- (id)_combinedServicesForAllDevices;	// IMP=0x00000001005d8be8
- (void)_loadSubServices;	// IMP=0x00000001005d7b90
- (void)_saveSubServices;	// IMP=0x00000001005d78b0
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x00000001005d67bc
- (void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001005d63f8
- (void)_unloadServiceWithName:(id)arg1;	// IMP=0x00000001005d625c
- (void)_loadService:(id)arg1;	// IMP=0x00000001005d5f14
- (void)_loadServices;	// IMP=0x00000001005d5708
@property(readonly, nonatomic) IDSServiceProperties *iCloudService;
@property(readonly, nonatomic) IDSServiceProperties *iTunesService;
- (id)userDefaults;	// IMP=0x00000001005d5164
- (id)serviceLoader;	// IMP=0x00000001005d5128
- (id)init;	// IMP=0x00000001005d4f84

@end
