//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class NSString;

@interface CALocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    struct LocationManagerImpl *manager_;	// 8 = 0x8
}

- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00000001000416a8
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010004155c
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000001000413b4
- (id)initWithManager:(struct LocationManagerImpl *)arg1;	// IMP=0x0000000100041340

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

