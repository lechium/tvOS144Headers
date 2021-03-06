//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTCReportingBackend.h"

@class NSNumber, NSString;

@interface PowerLogBackend : RTCReportingBackend
{
    _Bool _immutable;	// 248 = 0xf8
    NSNumber *_overrideSampling;	// 256 = 0x100
    NSString *_uuidRespectDnu;	// 264 = 0x108
    NSString *_uuidOverrideDnu;	// 272 = 0x110
    NSString *_uuidCustom;	// 280 = 0x118
}

- (int)updateBackendState;	// IMP=0x0000000100016680
- (int)updateState;	// IMP=0x000000010001663c
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x00000001000163d4
- (void)dealloc;	// IMP=0x0000000100016364
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x00000001000162a4

@end

