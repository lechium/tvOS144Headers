//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDispatchGroup, GKThreadsafeDictionary, NSString;

@interface GKRequestDeduper : NSObject
{
    GKDispatchGroup *_dispatchGroup;	// 8 = 0x8
    GKThreadsafeDictionary *_processedResources;	// 16 = 0x10
    NSString *_poolName;	// 24 = 0x18
}

+ (id)deduperForPool:(id)arg1;	// IMP=0x0000000100144920
+ (id)deduper;	// IMP=0x0000000100144904
@property(copy, nonatomic) NSString *poolName; // @synthesize poolName=_poolName;
@property(retain, nonatomic) GKThreadsafeDictionary *processedResources; // @synthesize processedResources=_processedResources;
@property(retain, nonatomic) GKDispatchGroup *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010014590c
- (void)openRequestForResources:(id)arg1 processCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100144cd4
- (void)getTransactionPool:(CDUnknownBlockType)arg1;	// IMP=0x0000000100144a98
- (void)dealloc;	// IMP=0x0000000100144a40
- (id)initWithPool:(id)arg1;	// IMP=0x0000000100144968
- (id)init;	// IMP=0x0000000100144958

@end

