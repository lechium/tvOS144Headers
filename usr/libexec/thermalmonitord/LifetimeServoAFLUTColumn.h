//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LifetimeServoAFLUTColumn : NSObject
{
    int _voltage;	// 8 = 0x8
    int _rowCount;	// 12 = 0xc
    int _temperatures[12];	// 16 = 0x10
    float _accelerationFactors[12];	// 64 = 0x40
}

- (int)voltage;	// IMP=0x0000000100015b44
- (float)accelerationFactor:(int)arg1;	// IMP=0x0000000100015a88
- (id)initWithLUTColumn:(id)arg1 voltage:(int)arg2;	// IMP=0x000000010001588c

@end

