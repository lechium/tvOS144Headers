//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableURLRequest, NSNumber, NSString;
@protocol OS_dispatch_queue, OS_os_activity;

@interface LakituRequest : NSObject <NSURLSessionDelegate>
{
    _Bool _pinningFailure;	// 8 = 0x8
    Class _responseClass;	// 16 = 0x10
    NSString *_urlString;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_os_activity> *_activity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000441e0
@property _Bool pinningFailure; // @synthesize pinningFailure=_pinningFailure;
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043a5c
- (id)sessionConfig;	// IMP=0x0000000100043904
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100043534
@property(readonly, nonatomic) NSMutableURLRequest *urlRequest;
- (id)protectionSpace;	// IMP=0x0000000100043468
- (id)credential;	// IMP=0x0000000100043460
- (id)validateInput;	// IMP=0x0000000100043320
- (id)additionalHeaders;	// IMP=0x0000000100043314
- (id)authorizationHeader;	// IMP=0x000000010004330c
- (id)bodyDictionary;	// IMP=0x0000000100043304
@property(readonly, nonatomic) NSNumber *protocolVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

