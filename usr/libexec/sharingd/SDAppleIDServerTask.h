//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLRequest, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAppleIDServerTask : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSString *_gsToken;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
    NSDictionary *_taskInfo;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    NSURLRequest *_urlRequest;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000dda2c
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *gsToken; // @synthesize gsToken=_gsToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sendRequest;	// IMP=0x00000001000dd7c0
- (id)_parseServerResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000dd658
- (id)_parseGetMyInfoResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000dcee0
- (id)_parseFindPersonResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000dc718
- (id)_parseFetchCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000dbe04
- (id)_parseCreateCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00000001000dba3c
- (void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3;	// IMP=0x00000001000db0f4
- (void)_invalidate;	// IMP=0x00000001000daf9c
- (void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3;	// IMP=0x00000001000dac04
- (void)_handleGSTokenIsAvailable;	// IMP=0x00000001000daab8
- (void)_handleURLRequestIsAvailable;	// IMP=0x00000001000da708
- (void)invalidate;	// IMP=0x00000001000da6a0
- (void)_activate;	// IMP=0x00000001000da52c
- (void)_urlRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000da3c8
- (void)_handleURLIsAvailable:(id)arg1 error:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000da118
- (void)_urlWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d9ccc
- (_Bool)_isTaskInfoValid;	// IMP=0x00000001000d97d8
- (void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2;	// IMP=0x00000001000d97c4
- (void)_callResponseHandlerWithInfo:(id)arg1 errorInfo:(id)arg2 error:(int)arg3;	// IMP=0x00000001000d96b0
- (void)activate;	// IMP=0x00000001000d9648
- (id)description;	// IMP=0x00000001000d9614
- (id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3;	// IMP=0x00000001000d9470

@end
