//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionActivity, CMMotionActivityManager, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ADMotionManager : NSObject
{
    CMMotionActivityManager *_motionActivityManager;	// 8 = 0x8
    CMMotionActivity *_motionActivity;	// 16 = 0x10
    NSOperationQueue *_opQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010026401c
@property(copy, nonatomic, setter=_setMotionActivity:) CMMotionActivity *_motionActivity; // @synthesize _motionActivity;
- (_Bool)isDriving;	// IMP=0x0000000100263eec
- (id)motionConfidence;	// IMP=0x0000000100263d64
- (id)motionActivity;	// IMP=0x0000000100263b18
- (void)stopUpdatingMotionActivityForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002639d8
- (void)startUpdatingMotionActivityForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010026368c
- (id)init;	// IMP=0x00000001002635c4

@end

