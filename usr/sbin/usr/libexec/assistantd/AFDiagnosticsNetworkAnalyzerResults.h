//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AFDiagnosticsNetworkAnalyzerResults : NSObject
{
    _Bool _forUserRequest;	// 8 = 0x8
    _Bool _analyzedSuccessfulRetry;	// 9 = 0x9
    _Bool _wwanPreferred;	// 10 = 0xa
    NSNumber *_connectionInterface;	// 16 = 0x10
    NSNumber *_sendBufferBytesRemaining;	// 24 = 0x18
    NSNumber *_knownURLLoadDuration;	// 32 = 0x20
    NSNumber *_siriURLLoadDuration;	// 40 = 0x28
    NSNumber *_siriSaltURLLoadDuration;	// 48 = 0x30
    long long _gatewayStatus;	// 56 = 0x38
    NSNumber *_gatewayPingDuration;	// 64 = 0x40
    NSNumber *_gatewayPingsSent;	// 72 = 0x48
    NSNumber *_gatewayPingsDropped;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001a7ad8
@property(copy, nonatomic) NSNumber *gatewayPingsDropped; // @synthesize gatewayPingsDropped=_gatewayPingsDropped;
@property(copy, nonatomic) NSNumber *gatewayPingsSent; // @synthesize gatewayPingsSent=_gatewayPingsSent;
@property(copy, nonatomic) NSNumber *gatewayPingDuration; // @synthesize gatewayPingDuration=_gatewayPingDuration;
@property(nonatomic) long long gatewayStatus; // @synthesize gatewayStatus=_gatewayStatus;
@property(copy, nonatomic) NSNumber *siriSaltURLLoadDuration; // @synthesize siriSaltURLLoadDuration=_siriSaltURLLoadDuration;
@property(copy, nonatomic) NSNumber *siriURLLoadDuration; // @synthesize siriURLLoadDuration=_siriURLLoadDuration;
@property(copy, nonatomic) NSNumber *knownURLLoadDuration; // @synthesize knownURLLoadDuration=_knownURLLoadDuration;
@property(copy, nonatomic) NSNumber *sendBufferBytesRemaining; // @synthesize sendBufferBytesRemaining=_sendBufferBytesRemaining;
@property(copy, nonatomic) NSNumber *connectionInterface; // @synthesize connectionInterface=_connectionInterface;
@property(nonatomic) _Bool wwanPreferred; // @synthesize wwanPreferred=_wwanPreferred;
@property(nonatomic) _Bool analyzedSuccessfulRetry; // @synthesize analyzedSuccessfulRetry=_analyzedSuccessfulRetry;
@property(nonatomic, getter=isForUserRequest) _Bool forUserRequest; // @synthesize forUserRequest=_forUserRequest;
- (unsigned long long)_durationInMillisecondsForDuration:(id)arg1;	// IMP=0x00000001001a7f6c
- (id)metricValue;	// IMP=0x00000001001a7b50

@end

