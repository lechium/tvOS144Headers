//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x00000001000343c8
- (void).cxx_destruct;	// IMP=0x00000001000348f8
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyObservers:(id)arg1;	// IMP=0x0000000100034714
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000010003467c
- (void)registerObserver:(id)arg1;	// IMP=0x00000001000345e4
- (id)defaultFallbackModelIfNil:(id)arg1;	// IMP=0x00000001000344f8
- (void)getVoiceTriggerAsset:(CDUnknownBlockType)arg1;	// IMP=0x00000001000344c8
- (id)init;	// IMP=0x0000000100034434

@end
