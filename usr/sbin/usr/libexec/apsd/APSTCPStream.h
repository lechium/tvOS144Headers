//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSTCPStream-Protocol.h"
#import "NSStreamDelegate-Protocol.h"
#import "NSURLSessionStreamDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class APSEnvironment, NSInputStream, NSMutableData, NSOutputStream, NSString, NSURLSession, NSURLSessionStreamTask;
@protocol APSTCPStreamDelegate;

@interface APSTCPStream : NSObject <APSTCPStream, NSStreamDelegate, NSURLSessionStreamDelegate, NSURLSessionTaskDelegate>
{
    APSEnvironment *_environment;	// 8 = 0x8
    struct __SecIdentity *_clientIdentity;	// 16 = 0x10
    struct _DNSServiceRef_t *_serviceQuery;	// 24 = 0x18
    NSInputStream *_readStream;	// 32 = 0x20
    NSOutputStream *_writeStream;	// 40 = 0x28
    id <APSTCPStreamDelegate> _delegate;	// 48 = 0x30
    _Bool _forceWWANInterface;	// 56 = 0x38
    _Bool _useAlternatePort;	// 57 = 0x39
    _Bool _opened;	// 58 = 0x3a
    _Bool _isConnected;	// 59 = 0x3b
    _Bool _isSuspended;	// 60 = 0x3c
    unsigned long long _generation;	// 64 = 0x40
    NSMutableData *_receiveData;	// 72 = 0x48
    NSMutableData *_sendData;	// 80 = 0x50
    NSString *_peerName;	// 88 = 0x58
    NSString *_serverHostname;	// 96 = 0x60
    NSString *_serverIPAddress;	// 104 = 0x68
    NSString *_redirectHostname;	// 112 = 0x70
    NSString *_cachedIPAddress;	// 120 = 0x78
    _Bool _keepAliveProxyConfigured;	// 128 = 0x80
    _Bool _hasCompletedTLSHandshake;	// 129 = 0x81
    _Bool _peerCertificateIsAuthorized;	// 130 = 0x82
    _Bool _hasSentPresence;	// 131 = 0x83
    _Bool _nagleEnabled;	// 132 = 0x84
    _Bool _allowTLS1_3;	// 133 = 0x85
    NSString *_interfaceName;	// 136 = 0x88
    NSURLSession *_urlSession;	// 144 = 0x90
    NSURLSessionStreamTask *_streamTask;	// 152 = 0x98
    unsigned char _ipAddressFamily;	// 160 = 0xa0
    _Bool _remainsConnectedWhenWWANSuspends;	// 161 = 0xa1
}

+ (_Bool)isKeepAliveProxyFeatureEnabled;	// IMP=0x000000010005879c
+ (_Bool)isKeepAliveProxySupportedOnSomeInterface;	// IMP=0x0000000100058784
+ (unsigned int)cachedServerCountForDomain:(id)arg1;	// IMP=0x00000001000540bc
+ (void)setCachedServerCount:(unsigned int)arg1 forDomain:(id)arg2 ttl:(unsigned int)arg3;	// IMP=0x0000000100053f84
- (void).cxx_destruct;	// IMP=0x0000000100058818
@property(nonatomic) unsigned char ipAddressFamily; // @synthesize ipAddressFamily=_ipAddressFamily;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(nonatomic) _Bool useAlternatePort; // @synthesize useAlternatePort=_useAlternatePort;
@property(nonatomic) _Bool forceWWANInterface; // @synthesize forceWWANInterface=_forceWWANInterface;
@property(readonly, nonatomic) NSString *serverIPAddress; // @synthesize serverIPAddress=_serverIPAddress;
@property(readonly, nonatomic) NSString *serverHostname; // @synthesize serverHostname=_serverHostname;
@property(nonatomic) __weak id <APSTCPStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)didPushCauseWake;	// IMP=0x00000001000587a4
- (_Bool)isKeepAliveProxySupportedOnSomeInterface;	// IMP=0x0000000100058794
- (_Bool)isKeepAliveProxyConfigured;	// IMP=0x000000010005878c
- (_Bool)isKeepAliveProxySupportedOnSocketInterface;	// IMP=0x000000010005877c
- (void)holdPowerAssertionUntilStreamQuiesces;	// IMP=0x0000000100058778
- (id)tcpInfoDescription;	// IMP=0x0000000100058600
- (id)_getTCPInfoData;	// IMP=0x00000001000583d8
- (void)_hasSpaceAvailable;	// IMP=0x00000001000582ec
- (void)_hasBytesAvailable;	// IMP=0x0000000100058180
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100058020
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100057ec0
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100057b84
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;	// IMP=0x000000010005781c
- (struct sockaddr *)_copyRemoteSockAddr;	// IMP=0x0000000100057690
- (struct sockaddr *)_copyLocalSockAddr;	// IMP=0x00000001000573cc
- (id)_copyServerIPAddressString;	// IMP=0x0000000100057374
- (_Bool)hasErrorStatus;	// IMP=0x000000010005734c
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000100056c7c
- (void)configureWhetherPeerIsTrustedFor:(struct __SecTrust **)arg1;	// IMP=0x0000000100056a44
- (_Bool)isTrust:(struct __SecTrust *)arg1 validWithPolicy:(struct __SecPolicy *)arg2 forPeer:(id)arg3;	// IMP=0x00000001000568f8
- (void)writeDataInBackground:(id)arg1;	// IMP=0x00000001000567bc
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000100056734
- (void)_connectToServerWithConfiguration:(id)arg1;	// IMP=0x000000010005632c
- (void)_connectToServerWithCount:(unsigned int)arg1;	// IMP=0x0000000100056064
- (void)_connectToServerWithPeerName:(id)arg1;	// IMP=0x0000000100055738
- (void)close;	// IMP=0x0000000100055584
- (void)_closeQuery;	// IMP=0x0000000100055558
- (void)_queryRecordReply:(const void *)arg1 length:(unsigned short)arg2 ttl:(unsigned int)arg3 errorCode:(int)arg4;	// IMP=0x00000001000552d0
- (void)_openWithTXTLookup;	// IMP=0x0000000100054ebc
- (void)open;	// IMP=0x0000000100054804
- (Class)configurationClass;	// IMP=0x00000001000547f8
- (id)_domain;	// IMP=0x0000000100054744
@property(readonly, copy, nonatomic) NSString *ifname;
@property(nonatomic) _Bool isSuspended;
@property(nonatomic) _Bool isConnected;
@property(copy, nonatomic) NSString *cachedIPAddress;
@property(copy, nonatomic) NSString *redirectHostname;
- (void)dealloc;	// IMP=0x0000000100054250
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00000001000541d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

