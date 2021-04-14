//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSData, NSFileHandle, NSInputStream, NSOutputStream, NSSet, NSString, NSTimer, UASharedPasteboardInfoWrapper;

@interface UASharedPasteboardOutputStreamManager : NSObject <NSStreamDelegate>
{
    NSOutputStream *_stream;	// 8 = 0x8
    NSInputStream *_inStream;	// 16 = 0x10
    UASharedPasteboardInfoWrapper *_pbwrapper;	// 24 = 0x18
    NSFileHandle *_dataFile;	// 32 = 0x20
    NSSet *_typesToSend;	// 40 = 0x28
    CDUnknownBlockType _sendErrorHandler;	// 48 = 0x30
    NSData *_currentSendData;	// 56 = 0x38
    long long _byteIndex;	// 64 = 0x40
    _Bool *_infoSent;	// 72 = 0x48
    unsigned long long _dataSent;	// 80 = 0x50
    NSTimer *_backupTimer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010006401c
@property(retain) NSTimer *backupTimer; // @synthesize backupTimer=_backupTimer;
@property unsigned long long dataSent; // @synthesize dataSent=_dataSent;
@property _Bool *infoSent; // @synthesize infoSent=_infoSent;
@property long long byteIndex; // @synthesize byteIndex=_byteIndex;
@property(retain) NSData *currentSendData; // @synthesize currentSendData=_currentSendData;
@property(copy) CDUnknownBlockType sendErrorHandler; // @synthesize sendErrorHandler=_sendErrorHandler;
@property(retain) NSSet *typesToSend; // @synthesize typesToSend=_typesToSend;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
@property(retain) UASharedPasteboardInfoWrapper *pbwrapper; // @synthesize pbwrapper=_pbwrapper;
@property(retain) NSInputStream *inStream; // @synthesize inStream=_inStream;
@property(retain) NSOutputStream *stream; // @synthesize stream=_stream;
- (void)shutdownStream;	// IMP=0x0000000100063dc0
- (void)shutdownTimerFired:(id)arg1;	// IMP=0x0000000100063cf0
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000100063590
- (id)headerForData:(id)arg1;	// IMP=0x00000001000634b4
- (void)sendTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000630b8
- (id)initWithOutputStream:(id)arg1 inputStream:(id)arg2 pasteboard:(id)arg3;	// IMP=0x0000000100062f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

