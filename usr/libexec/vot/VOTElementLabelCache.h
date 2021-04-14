//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VOTElementLabelCache : NSObject
{
    NSMutableDictionary *_labelCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_labelCacheAccessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_iCloudInteractionQueue;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000001000fe6a0
- (void).cxx_destruct;	// IMP=0x00000001000ff9d4
- (id)userLabelForIdentification:(id)arg1;	// IMP=0x00000001000ff75c
- (void)storeUserLabel:(id)arg1 forIdentification:(id)arg2;	// IMP=0x00000001000ff4ac
- (void)_syncLabelCache;	// IMP=0x00000001000ff284
- (void)_iCloudPublishData:(id)arg1;	// IMP=0x00000001000fef90
- (void)_iCloudReconcileDataStore:(id)arg1;	// IMP=0x00000001000fecfc
- (void)_icloudDataChanged:(id)arg1;	// IMP=0x00000001000feaac
- (void)dealloc;	// IMP=0x00000001000fea54
- (id)init;	// IMP=0x00000001000fe718

@end

