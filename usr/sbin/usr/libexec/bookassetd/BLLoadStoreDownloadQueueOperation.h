//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLOperation.h"

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ACAccount, AMSBagValue, AMSURLRequestEncoder, BLPurchaseUIHelper, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSString, NSURL;
@protocol BLUIHostServiceProtocol;

__attribute__((visibility("hidden")))
@interface BLLoadStoreDownloadQueueOperation : BLOperation <AMSURLProtocolDelegate, NSURLSessionDelegate>
{
    ACAccount *_account;	// 80 = 0x50
    NSMutableOrderedSet *_downloads;	// 88 = 0x58
    NSMutableArray *_rangesToLoad;	// 96 = 0x60
    AMSURLRequestEncoder *_requestEncoder;	// 104 = 0x68
    id <BLUIHostServiceProtocol> _uiHostProxy;	// 112 = 0x70
    AMSBagValue *_bagURL;	// 120 = 0x78
    NSURL *_URL;	// 128 = 0x80
    BLPurchaseUIHelper *_uiHelper;	// 136 = 0x88
}

+ (id)operationForAutomaticDownloadQueue;	// IMP=0x000000010000561c
- (void).cxx_destruct;	// IMP=0x000000010000676c
@property(retain, nonatomic) BLPurchaseUIHelper *uiHelper; // @synthesize uiHelper=_uiHelper;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) AMSBagValue *bagURL; // @synthesize bagURL=_bagURL;
@property(readonly, nonatomic) NSOrderedSet *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) id <BLUIHostServiceProtocol> uiHostProxy; // @synthesize uiHostProxy=_uiHostProxy;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_newURLRequestWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100006368
- (_Bool)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2;	// IMP=0x0000000100005e78
- (void)_handleResponse:(id)arg1;	// IMP=0x0000000100005d70
- (id)_account;	// IMP=0x0000000100005cec
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005b94
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005b0c
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005a84
- (void)run;	// IMP=0x00000001000057ec
- (id)initWithURL:(id)arg1;	// IMP=0x000000010000576c
- (id)initWithBagURL:(id)arg1 account:(id)arg2;	// IMP=0x00000001000056b8
- (id)initWithBagURL:(id)arg1;	// IMP=0x00000001000056a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

