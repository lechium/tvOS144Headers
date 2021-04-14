//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ADAcousticFingerprinterDelegate, OS_dispatch_queue;

@interface ADAcousticFingerprinter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_asxConnection;	// 16 = 0x10
    id <ADAcousticFingerprinterDelegate> _delegate;	// 24 = 0x18
    unsigned long long _totalSampleCount;	// 32 = 0x20
    unsigned long long _nextFingerprintSampleNumber;	// 40 = 0x28
    struct AudioStreamBasicDescription _sourceASBD;	// 48 = 0x30
    double _interval;	// 88 = 0x58
    struct OpaqueAudioConverter *_fingerprinterConverter;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000f785c
@property(nonatomic) __weak id <ADAcousticFingerprinterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reset;	// IMP=0x00000001000f776c
- (void)flush;	// IMP=0x00000001000f7540
- (void)appendPCMData:(id)arg1;	// IMP=0x00000001000f7188
- (id)_convertPCMDataForFingerprinting:(id)arg1;	// IMP=0x00000001000f6f70
- (_Bool)_needsConversion;	// IMP=0x00000001000f6f4c
- (void)_configureWithCurrentASBD;	// IMP=0x00000001000f6cc4
- (void)setASBD:(struct AudioStreamBasicDescription *)arg1;	// IMP=0x00000001000f6ca0
- (void)setFingerprintInterval:(double)arg1;	// IMP=0x00000001000f6c38
- (unsigned long long)_samplesPerInterval;	// IMP=0x00000001000f6c24
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f6ba4
- (id)_service;	// IMP=0x00000001000f6b50
- (void)_cleanUpConnection;	// IMP=0x00000001000f6af8
- (void)_connectionInvalidated;	// IMP=0x00000001000f6a40
- (void)_connectionInterrupted;	// IMP=0x00000001000f6988
- (id)_connection;	// IMP=0x00000001000f6754
- (void)dealloc;	// IMP=0x00000001000f66f8
- (id)init;	// IMP=0x00000001000f665c

@end

