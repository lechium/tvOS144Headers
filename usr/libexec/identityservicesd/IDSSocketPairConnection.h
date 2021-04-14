//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSSocketPairConnectionProtocol-Protocol.h"

@class IDSStallDetector, NSData, NSMutableArray, NSMutableData, NSMutableDictionary, NSSet, NSString;
@protocol IDSSocketPairConnectionDelegate, OS_dispatch_queue;

@interface IDSSocketPairConnection : NSObject <IDSSocketPairConnectionProtocol>
{
    NSMutableData *_headerData;	// 8 = 0x8
    NSMutableData *_currentMessageData;	// 16 = 0x10
    id <IDSSocketPairConnectionDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    unsigned long long _currentOutgoingDataIndex;	// 48 = 0x30
    NSData *_outgoingData;	// 56 = 0x38
    NSMutableArray *_outgoingMessageArray;	// 64 = 0x40
    unsigned int _currentOutgoingFragmentedMessageID;	// 72 = 0x48
    unsigned long long _inFlightMessageCountLowWaterMark;	// 80 = 0x50
    NSMutableDictionary *_incomingDataFragments;	// 88 = 0x58
    NSString *_connectionID;	// 96 = 0x60
    unsigned int _fragmentationSize;	// 104 = 0x68
    _Bool _isConnected;	// 108 = 0x6c
    unsigned int _currentDataLength;	// 112 = 0x70
    long long _bytesReceived;	// 120 = 0x78
    double _prevBPS;	// 128 = 0x80
    int _connectedSocket;	// 136 = 0x88
    _Bool _writeSocketIsResumed;	// 140 = 0x8c
    double _lastDateCheck;	// 144 = 0x90
    _Bool _notifyWhenConnectionReceivesBytes;	// 152 = 0x98
    long long _priority;	// 160 = 0xa0
    CDUnknownBlockType _encryptionBlock;	// 168 = 0xa8
    CDUnknownBlockType _decryptionBlock;	// 176 = 0xb0
    unsigned int _maxAllowedMessageSize;	// 184 = 0xb8
    double _lastSocketActivityTime;	// 192 = 0xc0
    IDSStallDetector *_outgoingStallDetector;	// 200 = 0xc8
    unsigned long long _linkType;	// 208 = 0xd0
    _Bool _hasEndedSession;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000010006b2c0
@property(nonatomic) _Bool hasEndedSession; // @synthesize hasEndedSession=_hasEndedSession;
@property(retain, nonatomic) IDSStallDetector *outgoingStallDetector; // @synthesize outgoingStallDetector=_outgoingStallDetector;
@property(copy, nonatomic) NSString *connectionID; // @synthesize connectionID=_connectionID;
@property(nonatomic) unsigned int maxAllowedMessageSize; // @synthesize maxAllowedMessageSize=_maxAllowedMessageSize;
- (void)setOTREncryptionBlock:(CDUnknownBlockType)arg1 decryptionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006ae40
- (void)setNotifyWhenConnectionReceivesBytes:(_Bool)arg1;	// IMP=0x000000010006adec
- (void)_endSession;	// IMP=0x000000010006aa54
- (_Bool)sendDataMessage:(id)arg1 canFragment:(_Bool)arg2;	// IMP=0x000000010006a54c
- (_Bool)sendDataMessage:(id)arg1;	// IMP=0x000000010006a4bc
- (void)_sendToConnectedSocket;	// IMP=0x0000000100069750
- (_Bool)_queueNextOutgoingData;	// IMP=0x0000000100068768
- (void)_processBytesAvailable;	// IMP=0x00000001000675a4
- (_Bool)_processIncomingMessage:(id)arg1;	// IMP=0x00000001000666e0
- (void)processStoredIncomingMessage:(id)arg1;	// IMP=0x00000001000662b8
- (void)removePendingMessagesForProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100065a20
- (long long)_read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000001000655b4
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065438
@property(nonatomic) unsigned long long inFlightMessageCountLowWaterMark;
@property(nonatomic) unsigned int fragmentationSize;
@property(readonly, nonatomic) NSSet *inFlightMessages;
@property(readonly, nonatomic) double lastSocketActivityTime;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long inFlightMessageCount;
@property(readonly, nonatomic) _Bool isConnected;
- (void)endSession;	// IMP=0x0000000100064990
- (void)dealloc;	// IMP=0x0000000100064898
- (void)start;	// IMP=0x000000010006460c
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 priority:(long long)arg4 connectionID:(id)arg5 linkType:(unsigned long long)arg6;	// IMP=0x0000000100064070

@end

