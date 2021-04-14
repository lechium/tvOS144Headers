//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class NSArray;

@interface PowerSourceCC : ComponentControl <tGraphDataSource>
{
    int chargeLevel;	// 128 = 0x80
    int previousChargeLevel;	// 132 = 0x84
    float smcThermalChargeRate;	// 136 = 0x88
    unsigned int pmuPowerService;	// 140 = 0x8c
    unsigned short availableCurrent;	// 144 = 0x90
    unsigned short brickPowerID;	// 146 = 0x92
    unsigned short inputCurrent;	// 148 = 0x94
    unsigned int watts;	// 152 = 0x98
    unsigned int familyCode;	// 156 = 0x9c
    NSArray *maxLITable;	// 160 = 0xa0
    NSArray *chargeLimitTable;	// 168 = 0xa8
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100036dd4
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100036d24
- (int)numberOfFields;	// IMP=0x0000000100036cec
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100036c48
- (void)getAdaptorPMUValue;	// IMP=0x0000000100036a50
- (void)defaultAction;	// IMP=0x0000000100036778
- (void)dealloc;	// IMP=0x00000001000366fc
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100036478

@end

