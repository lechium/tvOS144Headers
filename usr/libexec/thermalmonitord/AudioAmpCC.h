//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface AudioAmpCC : ComponentControl <tGraphDataSource>
{
    float _targetPower;	// 128 = 0x80
    float _currentPower;	// 132 = 0x84
    float _maxAudioAmpPower;	// 136 = 0x88
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010001a600
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x000000010001a550
- (int)numberOfFields;	// IMP=0x000000010001a518
- (void)refreshTGraphTelemetry;	// IMP=0x000000010001a3f8
- (void)defaultAction;	// IMP=0x000000010001a21c
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x000000010001a128

@end
