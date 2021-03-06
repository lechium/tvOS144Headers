//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDAVRoutingDataSource;

@interface MRDVolumeController : NSObject
{
    _Bool _volumeWarningEnabled;	// 8 = 0x8
    float _currentVolume;	// 12 = 0xc
    float _volumeLimit;	// 16 = 0x10
    MRDAVRoutingDataSource *_routingDataSource;	// 24 = 0x18
    unsigned long long _warningState;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100012350
- (void).cxx_destruct;	// IMP=0x0000000100012488
@property(nonatomic) unsigned long long warningState; // @synthesize warningState=_warningState;
@property(readonly, nonatomic) float volumeLimit; // @synthesize volumeLimit=_volumeLimit;
@property(readonly, nonatomic) _Bool volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property(readonly, nonatomic) float currentVolume; // @synthesize currentVolume=_currentVolume;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (_Bool)adjustVolumeWithStepAmount:(float)arg1 error:(id *)arg2;	// IMP=0x0000000100012450
- (_Bool)setVolume:(float)arg1 error:(id *)arg2;	// IMP=0x0000000100012448
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00000001000123d0

@end

