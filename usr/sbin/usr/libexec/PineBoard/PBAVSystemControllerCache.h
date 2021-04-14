//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, PBAVSystemControllerDataProviding;

@interface PBAVSystemControllerCache : NSObject
{
    _Bool _airplayDisplayActive;	// 8 = 0x8
    _Bool _cacheInitialized;	// 9 = 0x9
    CDUnknownBlockType _dataProviderInitializer;	// 16 = 0x10
    id <PBAVSystemControllerDataProviding> _dataProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dataProviderSerialQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cacheDataAccessSerialQueue;	// 40 = 0x28
    NSDictionary *_notificationNameToHandlerMap;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001001869c8
+ (id)new;	// IMP=0x0000000100186638
- (void).cxx_destruct;	// IMP=0x000000010018809c
@property(nonatomic, getter=isCacheInitialized) _Bool cacheInitialized; // @synthesize cacheInitialized=_cacheInitialized;
@property(readonly, nonatomic) NSDictionary *notificationNameToHandlerMap; // @synthesize notificationNameToHandlerMap=_notificationNameToHandlerMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDataAccessSerialQueue; // @synthesize cacheDataAccessSerialQueue=_cacheDataAccessSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dataProviderSerialQueue; // @synthesize dataProviderSerialQueue=_dataProviderSerialQueue;
@property(retain, nonatomic) id <PBAVSystemControllerDataProviding> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType dataProviderInitializer; // @synthesize dataProviderInitializer=_dataProviderInitializer;
- (void)_callUpdateHandlerForNotificationName:(id)arg1 notification:(id)arg2;	// IMP=0x0000000100187e58
- (void)_updateAirplayDisplayActiveFromNotification:(id)arg1;	// IMP=0x0000000100187a24
- (void)_rebuildCache;	// IMP=0x00000001001877bc
- (void)_initializeCache;	// IMP=0x00000001001872e0
- (void)_handleSystemControllerMetadataDidChangeNotification:(id)arg1;	// IMP=0x0000000100186eec
- (void)_handleSystemControllerServerConnectionDied:(id)arg1;	// IMP=0x0000000100186c54
@property(readonly, nonatomic, getter=isAirplayDisplayActive) _Bool airplayDisplayActive; // @synthesize airplayDisplayActive=_airplayDisplayActive;
- (void)dealloc;	// IMP=0x0000000100186934
- (id)initWithDataProviderInitializer:(CDUnknownBlockType)arg1;	// IMP=0x00000001001866d0
- (id)init;	// IMP=0x0000000100186678

@end

