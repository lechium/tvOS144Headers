//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKTouchLifecycleObserver-Protocol.h"

@class BKDisplayAnnotationController, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchAnnotationController : NSObject <BKTouchLifecycleObserver>
{
    _Bool _shouldVisualizeTouches;	// 8 = 0x8
    _Bool _shouldVisualizeHitTestRegions;	// 9 = 0x9
    BKDisplayAnnotationController *_displayAnnotationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)workQueue;	// IMP=0x000000010001edf4
- (void).cxx_destruct;	// IMP=0x000000010001e384
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) BKDisplayAnnotationController *displayAnnotationController; // @synthesize displayAnnotationController=_displayAnnotationController;
- (void)_queue_touchWasSoftCanceled:(unsigned int)arg1;	// IMP=0x000000010001e19c
- (void)_queue_touchWasHardCanceled:(unsigned int)arg1;	// IMP=0x000000010001e0e0
- (void)_queue_setCenter:(struct CGPoint)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x000000010001df60
- (id)_keyPathForTouchIdentifier:(unsigned int)arg1;	// IMP=0x000000010001df28
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x000000010001dea4
- (id)_stringDescribingContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x000000010001dd7c
- (id)_stringDescribingPID:(int)arg1;	// IMP=0x000000010001dc38
- (void)_queue_annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x000000010001d97c
- (void)_queue_annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x000000010001d968
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x000000010001d8e4
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x000000010001d8e0
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x000000010001d8dc
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x000000010001d880
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x000000010001d820
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x000000010001d7c4
- (void)touch:(unsigned int)arg1 upAtPoint:(struct CGPoint)arg2;	// IMP=0x000000010001d768
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x000000010001d708
- (void)touchDidDetach:(unsigned int)arg1;	// IMP=0x000000010001d6ac
- (void)touch:(unsigned int)arg1 didHitTestToContextID:(unsigned int)arg2 clientPort:(unsigned int)arg3 hostingChainIndex:(long long)arg4;	// IMP=0x000000010001d64c
- (void)touch:(unsigned int)arg1 downAtPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3 transducerType:(unsigned int)arg4;	// IMP=0x000000010001d5ec
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x000000010001d510
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x000000010001d43c
- (void)annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x000000010001d3a8
@property _Bool shouldVisualizeHitTestRegions;
@property _Bool shouldVisualizeTouches;
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x000000010001d0f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

