//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface ICDRequest : NSObject
{
    NSDictionary *_arguments;	// 8 = 0x8
    _Bool _concurrent;	// 16 = 0x10
    _Bool _acceptsGzipEncoding;	// 17 = 0x11
    _Bool _shouldPromptForAuthentication;	// 18 = 0x12
    NSString *_action;	// 24 = 0x18
    long long _method;	// 32 = 0x20
    NSData *_bodyData;	// 40 = 0x28
    NSURL *_responseDataDestinationFileURL;	// 48 = 0x30
    long long _reason;	// 56 = 0x38
    long long _allowedRetryCount;	// 64 = 0x40
    NSString *_requestingBundleID;	// 72 = 0x48
    long long _requestPersonalizationStyle;	// 80 = 0x50
}

+ (id)request;	// IMP=0x00000001000e6bdc
- (void).cxx_destruct;	// IMP=0x00000001000e7244
@property(nonatomic) long long requestPersonalizationStyle; // @synthesize requestPersonalizationStyle=_requestPersonalizationStyle;
@property(copy, nonatomic) NSString *requestingBundleID; // @synthesize requestingBundleID=_requestingBundleID;
@property(nonatomic) long long allowedRetryCount; // @synthesize allowedRetryCount=_allowedRetryCount;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSURL *responseDataDestinationFileURL; // @synthesize responseDataDestinationFileURL=_responseDataDestinationFileURL;
@property(nonatomic) _Bool shouldPromptForAuthentication; // @synthesize shouldPromptForAuthentication=_shouldPromptForAuthentication;
@property(nonatomic) _Bool acceptsGzipEncoding; // @synthesize acceptsGzipEncoding=_acceptsGzipEncoding;
@property(copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(readonly, nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
- (id)_HTTPMethodStringForICDRequestMethod:(long long)arg1;	// IMP=0x00000001000e7184
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x00000001000e7164
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001000e6fec
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001000e6d90
- (void)setValue:(id)arg1 forArgument:(id)arg2;	// IMP=0x00000001000e6d08
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;	// IMP=0x00000001000e6c48
- (id)initWithAction:(id)arg1;	// IMP=0x00000001000e6b54

@end

