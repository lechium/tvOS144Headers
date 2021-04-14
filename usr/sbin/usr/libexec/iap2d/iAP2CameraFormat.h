//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2IdentificationParameter.h"

@class NSNumber, NSString;

@interface iAP2CameraFormat : iAP2IdentificationParameter
{
    int _codec;	// 20 = 0x14
    NSNumber *_componentID;	// 24 = 0x18
    NSString *_componentName;	// 32 = 0x20
    NSNumber *_horizontalResolution;	// 40 = 0x28
    NSNumber *_verticalResolution;	// 48 = 0x30
    NSNumber *_bitDepth;	// 56 = 0x38
    NSNumber *_minimumISO;	// 64 = 0x40
    NSNumber *_maximumISO;	// 72 = 0x48
}

@property NSNumber *maximumISO; // @synthesize maximumISO=_maximumISO;
@property NSNumber *minimumISO; // @synthesize minimumISO=_minimumISO;
@property int codec; // @synthesize codec=_codec;
@property NSNumber *bitDepth; // @synthesize bitDepth=_bitDepth;
@property NSNumber *verticalResolution; // @synthesize verticalResolution=_verticalResolution;
@property NSNumber *horizontalResolution; // @synthesize horizontalResolution=_horizontalResolution;
@property(retain) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain) NSNumber *componentID; // @synthesize componentID=_componentID;
- (void)dealloc;	// IMP=0x000000010002db24
- (id)init;	// IMP=0x000000010002daec

@end
