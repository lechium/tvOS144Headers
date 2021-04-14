//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class MSDHubTrustEvaluate, MSDPartialDownload, NSData, NSError, NSFileHandle, NSMutableData, NSNotificationCenter, NSNumber, NSString, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface MSDContentServerConnection : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    _Bool _monitorTimeKeeper;	// 8 = 0x8
    _Bool _redirecting;	// 9 = 0x9
    _Bool _willEnroll;	// 10 = 0xa
    _Bool _rangeHeaderSupported;	// 11 = 0xb
    _Bool _userInitiatedCanceled;	// 12 = 0xc
    _Bool _fileDownloadTask;	// 13 = 0xd
    int _state;	// 16 = 0x10
    NSNumber *_connectable;	// 24 = 0x18
    NSString *_hubProtocolVersion;	// 32 = 0x20
    long long _httpResponseCode;	// 40 = 0x28
    long long _httpResponseRetryAfter;	// 48 = 0x30
    NSString *_server;	// 56 = 0x38
    NSString *_port;	// 64 = 0x40
    NSString *_account;	// 72 = 0x48
    NSURLSession *_session;	// 80 = 0x50
    NSString *_file;	// 88 = 0x58
    NSString *_toFile;	// 96 = 0x60
    CDUnknownBlockType _handler;	// 104 = 0x68
    NSFileHandle *_toFileHandle;	// 112 = 0x70
    NSData *_toPost;	// 120 = 0x78
    NSURLSessionDataTask *_task;	// 128 = 0x80
    NSMutableData *_data;	// 136 = 0x88
    long long _retryCount;	// 144 = 0x90
    NSError *_error;	// 152 = 0x98
    long long _retryCountForIteration;	// 160 = 0xa0
    MSDPartialDownload *_contentRange;	// 168 = 0xa8
    NSString *_hmacKey;	// 176 = 0xb0
    NSString *_hubCertificateIdentifier;	// 184 = 0xb8
    NSNotificationCenter *_userInteractionNotification;	// 192 = 0xc0
    unsigned long long _commandType;	// 200 = 0xc8
    MSDHubTrustEvaluate *_trustObject;	// 208 = 0xd0
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 216 = 0xd8
}

+ (id)contentServerConnection:(id)arg1 port:(id)arg2;	// IMP=0x0000000100052254
- (void).cxx_destruct;	// IMP=0x0000000100055b84
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain) MSDHubTrustEvaluate *trustObject; // @synthesize trustObject=_trustObject;
@property unsigned long long commandType; // @synthesize commandType=_commandType;
@property _Bool fileDownloadTask; // @synthesize fileDownloadTask=_fileDownloadTask;
@property _Bool userInitiatedCanceled; // @synthesize userInitiatedCanceled=_userInitiatedCanceled;
@property(retain) NSNotificationCenter *userInteractionNotification; // @synthesize userInteractionNotification=_userInteractionNotification;
@property(retain) NSString *hubCertificateIdentifier; // @synthesize hubCertificateIdentifier=_hubCertificateIdentifier;
@property(retain) NSString *hmacKey; // @synthesize hmacKey=_hmacKey;
@property(retain) MSDPartialDownload *contentRange; // @synthesize contentRange=_contentRange;
@property long long retryCountForIteration; // @synthesize retryCountForIteration=_retryCountForIteration;
@property _Bool rangeHeaderSupported; // @synthesize rangeHeaderSupported=_rangeHeaderSupported;
@property _Bool willEnroll; // @synthesize willEnroll=_willEnroll;
@property(retain) NSError *error; // @synthesize error=_error;
@property _Bool redirecting; // @synthesize redirecting=_redirecting;
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property int state; // @synthesize state=_state;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain) NSData *toPost; // @synthesize toPost=_toPost;
@property(retain) NSFileHandle *toFileHandle; // @synthesize toFileHandle=_toFileHandle;
@property __weak CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain) NSString *toFile; // @synthesize toFile=_toFile;
@property(retain) NSString *file; // @synthesize file=_file;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) NSString *port; // @synthesize port=_port;
@property(retain) NSString *server; // @synthesize server=_server;
@property long long httpResponseRetryAfter; // @synthesize httpResponseRetryAfter=_httpResponseRetryAfter;
@property long long httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
@property(retain, nonatomic) NSString *hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property _Bool monitorTimeKeeper; // @synthesize monitorTimeKeeper=_monitorTimeKeeper;
@property(retain, nonatomic) NSNumber *connectable; // @synthesize connectable=_connectable;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000557c0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100055398
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000550ac
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000548f8
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100054594
- (_Bool)addAuthenticationHeadersToRequest:(id)arg1 withBody:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000542ec
- (void)cancelDownloading;	// IMP=0x0000000100053f98
- (void)runRunLoopUntilDone;	// IMP=0x0000000100053f5c
- (_Bool)startDownloadingFile;	// IMP=0x000000010005320c
- (void)invalidate;	// IMP=0x00000001000531cc
- (void)enableAuthenticationWithHMACKey:(id)arg1;	// IMP=0x00000001000531c0
- (_Bool)downloadTo:(id)arg1 byPosting:(id)arg2 toPath:(id)arg3 retry:(int)arg4 error:(id *)arg5;	// IMP=0x0000000100052ed0
- (id)postDataForEnrolment:(id)arg1 to:(id)arg2 retry:(int)arg3 error:(id *)arg4;	// IMP=0x0000000100052de0
- (id)postData:(id)arg1 to:(id)arg2 retry:(int)arg3 error:(id *)arg4;	// IMP=0x0000000100052c7c
- (_Bool)downloadFile:(id)arg1 to:(id)arg2 retry:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100052814
- (id)downloadFileToNSData:(id)arg1 retry:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000526d0
- (void)dealloc;	// IMP=0x0000000100052590
- (void)setupServer:(id)arg1 port:(id)arg2;	// IMP=0x0000000100052518
- (id)initWithCellularAccess:(_Bool)arg1;	// IMP=0x00000001000522e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

