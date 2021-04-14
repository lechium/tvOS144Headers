//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface iAP2KalmanFilter : NSObject
{
    _Bool fIsMeasurementNoiseTrained;	// 8 = 0x8
    _Bool fIsSeeded;	// 9 = 0x9
    double f_P;	// 16 = 0x10
    double fFilterOffsetEstimate;	// 24 = 0x18
    double fLastInternalTime;	// 32 = 0x20
    double fTimeout;	// 40 = 0x28
    double fMeasurementVar;	// 48 = 0x30
    unsigned long long fMinCountForMeasNoiseTraining;	// 56 = 0x38
    NSMutableArray *fOffsetHistory;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010004a3fc
- (int)iAP2KalmanFilterUpdateDeviceTime:(double)arg1 Offset:(double)arg2 FilteredOffset:(double *)arg3 OffsetUncertainty:(double *)arg4;	// IMP=0x0000000100049cb4
- (_Bool)updateMeasurementNoiseEstimate:(double)arg1;	// IMP=0x000000010004992c
- (void)reseedWithInternalTime:(double)arg1 RawOffset:(double)arg2 FilteredOffset:(double *)arg3 OffsetUncertainty:(double *)arg4;	// IMP=0x00000001000498f8
- (void)resetWithInternalTimeSecs:(double)arg1 RawOffset:(double)arg2 FilteredOffset:(double *)arg3 OffsetUncertainty:(double *)arg4;	// IMP=0x00000001000498e8
- (void)reset;	// IMP=0x00000001000497f8
- (id)initWithReseedTimeout:(double)arg1 AndCountForNoiseTraining:(unsigned long long)arg2;	// IMP=0x0000000100049764

@end

