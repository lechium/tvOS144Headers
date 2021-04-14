//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRAnalyticsCmpnLink.h"

@interface NRAnalyticsCmpnLinkBluetooth : NRAnalyticsCmpnLink
{
    _Bool _urgentLoopChecksumError;	// 96 = 0x60
    _Bool _loopChecksumError;	// 97 = 0x61
    _Bool _bufferChecksumError;	// 98 = 0x62
    _Bool _preludeChecksumError;	// 99 = 0x63
    _Bool _urgentPreludeChecksumError;	// 100 = 0x64
    _Bool _preludeTimeoutError;	// 101 = 0x65
    _Bool _urgentPreludeTimeoutError;	// 102 = 0x66
    unsigned long long _ikePairingSessionSetupAttempts;	// 104 = 0x68
    unsigned long long _ikePairingSessionSetupStart;	// 112 = 0x70
    unsigned long long _ikePairingSessionSetupEnd;	// 120 = 0x78
    unsigned long long _urgentPipeDisconnections;	// 128 = 0x80
}

@property(nonatomic) unsigned long long urgentPipeDisconnections; // @synthesize urgentPipeDisconnections=_urgentPipeDisconnections;
@property(nonatomic) _Bool urgentPreludeTimeoutError; // @synthesize urgentPreludeTimeoutError=_urgentPreludeTimeoutError;
@property(nonatomic) _Bool preludeTimeoutError; // @synthesize preludeTimeoutError=_preludeTimeoutError;
@property(nonatomic) _Bool urgentPreludeChecksumError; // @synthesize urgentPreludeChecksumError=_urgentPreludeChecksumError;
@property(nonatomic) _Bool preludeChecksumError; // @synthesize preludeChecksumError=_preludeChecksumError;
@property(nonatomic) _Bool bufferChecksumError; // @synthesize bufferChecksumError=_bufferChecksumError;
@property(nonatomic) _Bool loopChecksumError; // @synthesize loopChecksumError=_loopChecksumError;
@property(nonatomic) _Bool urgentLoopChecksumError; // @synthesize urgentLoopChecksumError=_urgentLoopChecksumError;
@property(nonatomic) unsigned long long ikePairingSessionSetupEnd; // @synthesize ikePairingSessionSetupEnd=_ikePairingSessionSetupEnd;
@property(nonatomic) unsigned long long ikePairingSessionSetupStart; // @synthesize ikePairingSessionSetupStart=_ikePairingSessionSetupStart;
@property(nonatomic) unsigned long long ikePairingSessionSetupAttempts; // @synthesize ikePairingSessionSetupAttempts=_ikePairingSessionSetupAttempts;
- (void)submit;	// IMP=0x000000010009a908

@end

