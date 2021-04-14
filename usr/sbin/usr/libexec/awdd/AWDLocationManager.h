//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface AWDLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_manager;	// 8 = 0x8
    struct queue fQueue;	// 16 = 0x10
    function_6d1cc236 fAuthChangedCallback;	// 24 = 0x18
    function_420b835d fLocChangedCallback;	// 56 = 0x38
    function_84aba934 fLocFailedCallback;	// 88 = 0x58
}

+ (const char *)sAuthStatusAsString:(int)arg1;	// IMP=0x00000001000986dc
+ (_Bool)sIsLocationAllowed:(int)arg1;	// IMP=0x00000001000980dc
- (id).cxx_construct;	// IMP=0x0000000100098a8c
- (void).cxx_destruct;	// IMP=0x00000001000989d8
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00000001000988cc
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000987e8
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000100098700
- (void)locationUsed;	// IMP=0x0000000100098654
- (void)callLocationFailedCallback;	// IMP=0x00000001000985cc
- (void)callBackOnLocationFailure:(function_84aba934)arg1;	// IMP=0x00000001000984cc
- (void)callLocationUpdateCallback:(id)arg1;	// IMP=0x0000000100098414
- (void)callBackOnLocationUpdate:(function_420b835d)arg1;	// IMP=0x0000000100098314
- (void)callAuthStatusCallback:(int)arg1;	// IMP=0x0000000100098284
- (void)callBackOnAuthStatusUpdate:(function_6d1cc236)arg1;	// IMP=0x0000000100098184
- (void)setDesiredLocationAccuracy:(double)arg1;	// IMP=0x00000001000980ec
- (_Bool)locationAllowed;	// IMP=0x0000000100097fd4
- (_Bool)stopLocationUpdates;	// IMP=0x0000000100097efc
- (_Bool)startLocationUpdates;	// IMP=0x0000000100097d68
- (_Bool)shouldUpdateLocation:(_Bool)arg1;	// IMP=0x0000000100097c28
- (void)dealloc;	// IMP=0x0000000100097ba8
- (id)init;	// IMP=0x0000000100097a44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

