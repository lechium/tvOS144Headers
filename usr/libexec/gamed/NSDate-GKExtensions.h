//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;	// IMP=0x0000000100075de0
+ (id)_gkServerTimestamp;	// IMP=0x0000000100078de8
+ (id)_gkDateFromServerTimestamp:(id)arg1;	// IMP=0x0000000100078d90
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;	// IMP=0x0000000100078d44
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;	// IMP=0x00000001000760b8
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;	// IMP=0x0000000100075fb4
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x0000000100075ef8
- (id)_gkServerTimestamp;	// IMP=0x0000000100078e3c
@end

