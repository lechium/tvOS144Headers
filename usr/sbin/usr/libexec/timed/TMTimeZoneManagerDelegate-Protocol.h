//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TMTimeZone, TMTimeZoneManager;

@protocol TMTimeZoneManagerDelegate <NSObject>
- (void)timeZoneManager:(TMTimeZoneManager *)arg1 didReset:(NSString *)arg2;
- (void)timeZoneManager:(TMTimeZoneManager *)arg1 shouldFetch:(NSString *)arg2;
- (void)timeZoneManager:(TMTimeZoneManager *)arg1 didComputeResult:(TMTimeZone *)arg2;
@end

