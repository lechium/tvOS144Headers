//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UAStreamHandlerDelegate-Protocol.h"
#import "UCFilePacketReceiver-Protocol.h"
#import "UCStreamCoder-Protocol.h"

@class NSDictionary, NSFileHandle, NSMutableArray, NSMutableDictionary, NSProgress, NSString, UADispatchWatchdog, UASharedPasteboardInfoWrapper, UAStreamHandler, UCFilePackager;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

@interface UCStreamCoderV2 : NSObject <UAStreamHandlerDelegate, UCFilePacketReceiver, UCStreamCoder>
{
    _Bool _remoteHasFiles;	// 8 = 0x8
    _Bool _returnInfoEarly;	// 9 = 0x9
    UAStreamHandler *_streamHandler;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSDictionary *_auxStateInfo;	// 32 = 0x20
    NSMutableArray *_objects;	// 40 = 0x28
    UADispatchWatchdog *_watchdog;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_heartBeatTrigger;	// 56 = 0x38
    CDUnknownBlockType _infoRecvHandler;	// 64 = 0x40
    CDUnknownBlockType _fileRecvHandler;	// 72 = 0x48
    UASharedPasteboardInfoWrapper *_receivedInfo;	// 80 = 0x50
    NSFileHandle *_receivingDataFile;	// 88 = 0x58
    NSProgress *_progress;	// 96 = 0x60
    long long _bytesReceived;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_itemsLockedSem;	// 112 = 0x70
    NSMutableDictionary *_uuidItemMap;	// 120 = 0x78
    unsigned long long _streamStartTime;	// 128 = 0x80
    long long _expectedLength;	// 136 = 0x88
    CDUnknownBlockType _sendErrorHandler;	// 144 = 0x90
    UASharedPasteboardInfoWrapper *_sendingInfo;	// 152 = 0x98
    NSFileHandle *_sendingDataFile;	// 160 = 0xa0
    UCFilePackager *_filePackager;	// 168 = 0xa8
    NSMutableDictionary *_archivePackagers;	// 176 = 0xb0
    NSMutableArray *_archiveQueue;	// 184 = 0xb8
    NSMutableArray *_requestedArchives;	// 192 = 0xc0
    long long _totalSendSize;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000010001c240
@property long long totalSendSize; // @synthesize totalSendSize=_totalSendSize;
@property(retain) NSMutableArray *requestedArchives; // @synthesize requestedArchives=_requestedArchives;
@property(retain) NSMutableArray *archiveQueue; // @synthesize archiveQueue=_archiveQueue;
@property(retain) NSMutableDictionary *archivePackagers; // @synthesize archivePackagers=_archivePackagers;
@property(retain) UCFilePackager *filePackager; // @synthesize filePackager=_filePackager;
@property(retain) NSFileHandle *sendingDataFile; // @synthesize sendingDataFile=_sendingDataFile;
@property(retain) UASharedPasteboardInfoWrapper *sendingInfo; // @synthesize sendingInfo=_sendingInfo;
@property(copy) CDUnknownBlockType sendErrorHandler; // @synthesize sendErrorHandler=_sendErrorHandler;
@property long long expectedLength; // @synthesize expectedLength=_expectedLength;
@property unsigned long long streamStartTime; // @synthesize streamStartTime=_streamStartTime;
@property(retain) NSMutableDictionary *uuidItemMap; // @synthesize uuidItemMap=_uuidItemMap;
@property(retain) NSObject<OS_dispatch_semaphore> *itemsLockedSem; // @synthesize itemsLockedSem=_itemsLockedSem;
@property _Bool returnInfoEarly; // @synthesize returnInfoEarly=_returnInfoEarly;
@property _Bool remoteHasFiles; // @synthesize remoteHasFiles=_remoteHasFiles;
@property long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) NSFileHandle *receivingDataFile; // @synthesize receivingDataFile=_receivingDataFile;
@property(retain) UASharedPasteboardInfoWrapper *receivedInfo; // @synthesize receivedInfo=_receivedInfo;
@property(copy) CDUnknownBlockType fileRecvHandler; // @synthesize fileRecvHandler=_fileRecvHandler;
@property(copy) CDUnknownBlockType infoRecvHandler; // @synthesize infoRecvHandler=_infoRecvHandler;
@property(retain) NSObject<OS_dispatch_source> *heartBeatTrigger; // @synthesize heartBeatTrigger=_heartBeatTrigger;
@property(retain) UADispatchWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain) NSMutableArray *objects; // @synthesize objects=_objects;
@property(retain) NSDictionary *auxStateInfo; // @synthesize auxStateInfo=_auxStateInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain) UAStreamHandler *streamHandler; // @synthesize streamHandler=_streamHandler;
- (id)fetchDataForType:(id)arg1;	// IMP=0x000000010001bed8
- (id)unpackMessage:(id)arg1;	// IMP=0x000000010001be6c
- (id)packMessage:(id)arg1;	// IMP=0x000000010001be50
- (void)filePackagerError:(id)arg1;	// IMP=0x000000010001bd5c
- (void)packager:(id)arg1 gotData:(id)arg2 forPacket:(long long)arg3;	// IMP=0x000000010001b894
- (void)sendCompletedWithError:(id)arg1;	// IMP=0x000000010001b63c
- (void)sendPasteboard:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a2e8
- (void)calculateTimeRemaining;	// IMP=0x000000010001a0c4
- (void)processPasteboardInfo:(id)arg1;	// IMP=0x0000000100019a60
- (void)removeReceivedItems:(id)arg1;	// IMP=0x00000001000197bc
- (void)completedReceivingPasteboardWithError:(id)arg1;	// IMP=0x0000000100019510
- (void)receivedPasteboardInfo:(id)arg1 withError:(id)arg2;	// IMP=0x000000010001926c
- (void)cancelReceive;	// IMP=0x00000001000191ac
- (void)receivePasteboardToFile:(id)arg1 withProgress:(id)arg2 infoRecievedHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 returnInfoEarly:(_Bool)arg5;	// IMP=0x0000000100018f70
- (void)sendHeartbeat;	// IMP=0x0000000100018e60
- (void)sendTotalSendSize;	// IMP=0x0000000100018d28
- (void)sendPasteboardDataResponse;	// IMP=0x0000000100018b60
- (void)sendFileArchiveRequest;	// IMP=0x000000010001871c
- (void)sendPasteboardDataRequest;	// IMP=0x000000010001862c
- (void)sendPasteboardInfoResponse;	// IMP=0x0000000100018484
- (void)sendPasteboardInfoRequest;	// IMP=0x00000001000183f8
- (void)handleHeartbeat:(id)arg1;	// IMP=0x0000000100018350
- (void)handlePasteboardAuxInfoReceived:(id)arg1;	// IMP=0x00000001000181e0
- (void)handlePasteboardFileResponse:(id)arg1;	// IMP=0x0000000100017a34
- (void)handlePasteboardDataResponse:(id)arg1;	// IMP=0x00000001000175b0
- (void)handlePasteboardInfoResponse:(id)arg1;	// IMP=0x0000000100017250
- (void)handlePasteboardFileRequest:(id)arg1;	// IMP=0x0000000100016bf8
- (void)handlePasteboardDataRequest:(id)arg1;	// IMP=0x0000000100016b74
- (void)handlePasteboardInfoRequest:(id)arg1;	// IMP=0x0000000100016af0
- (void)recvStop:(id)arg1;	// IMP=0x0000000100016938
- (void)sendStopWithError:(long long)arg1;	// IMP=0x00000001000167a0
- (void)streams:(id)arg1 didWriteMessageWithTag:(long long)arg2;	// IMP=0x00000001000162cc
- (void)streams:(id)arg1 didReadMessage:(id)arg2 withTag:(long long)arg3;	// IMP=0x0000000100016170
- (void)streamsDidClose:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100016040
- (void)removeObject:(id)arg1;	// IMP=0x0000000100015f90
- (void)storeObject:(id)arg1;	// IMP=0x0000000100015ee0
- (void)dealloc;	// IMP=0x0000000100015ce8
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x000000010001584c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
