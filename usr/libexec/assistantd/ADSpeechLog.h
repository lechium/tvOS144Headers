//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString;
@protocol OS_dispatch_queue;

@interface ADSpeechLog : NSObject
{
    NSObject<OS_dispatch_queue> *_logQueue;	// 8 = 0x8
    NSDateFormatter *_dateFormatter;	// 16 = 0x10
    int _fd;	// 24 = 0x18
    NSString *_filePath;	// 32 = 0x20
}

+ (id)buffersFromSpeechLogAtURL:(id)arg1 isNarrowBand:(_Bool *)arg2;	// IMP=0x0000000100125208
- (void).cxx_destruct;	// IMP=0x00000001001254d0
- (void)endSpeechLog;	// IMP=0x0000000100125000
- (void)cancelCurrentSpeechLog;	// IMP=0x0000000100124dd4
- (void)appendSpeechPackets:(id)arg1;	// IMP=0x0000000100124cb4
- (void)appendSpeechPacket:(id)arg1;	// IMP=0x0000000100124b50
- (void)beginNewSpeechLogWithFormat:(id)arg1;	// IMP=0x0000000100124814
- (id)_nowString;	// IMP=0x0000000100124788
- (id)_dateFormatter;	// IMP=0x00000001001246dc
- (id)init;	// IMP=0x000000010012460c

@end

