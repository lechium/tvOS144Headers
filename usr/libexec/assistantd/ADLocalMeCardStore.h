//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SAPerson;
@protocol OS_dispatch_queue;

@interface ADLocalMeCardStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SAPerson *_ownerMeCard;	// 16 = 0x10
    NSMutableSet *_observers;	// 24 = 0x18
}

+ (id)sharedStore;	// IMP=0x00000001001e180c
- (void).cxx_destruct;	// IMP=0x00000001001e2064
- (void)removeMeCardObserver:(id)arg1;	// IMP=0x00000001001e1fc0
- (void)addMeCardObserver:(id)arg1;	// IMP=0x00000001001e1f1c
- (void)meCard:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e1dac
- (void)storeMeCard:(id)arg1;	// IMP=0x00000001001e1b08
- (id)_init;	// IMP=0x00000001001e1884

@end

