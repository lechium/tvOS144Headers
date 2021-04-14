//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSHTTPURLResponse, NSMutableData, NSString, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface PDSecureConnectionManager : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;	// 8 = 0x8
    NSURLSessionTask *_task;	// 16 = 0x10
    NSMutableData *_data;	// 24 = 0x18
    NSHTTPURLResponse *_response;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
    _Bool _canceled;	// 41 = 0x29
    CDUnknownBlockType _successHandler;	// 48 = 0x30
    CDUnknownBlockType _failureHandler;	// 56 = 0x38
    NSURLRequest *_request;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000e55ec
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001000e5018
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e4e8c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000e4e6c
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e4dc4
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e4b60
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000001000e4a70
- (void)_sendFailure:(id)arg1;	// IMP=0x00000001000e4970
- (void)_sendSuccess;	// IMP=0x00000001000e48a4
- (void)cancel;	// IMP=0x00000001000e4880
- (void)start;	// IMP=0x00000001000e4754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

