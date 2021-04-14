//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ACAccount, ASFReceipt, ApplicationProxy, NSString, NSURL;
@protocol FetchReceiptTaskDelegate;

@interface FetchReceiptTask : AsyncTask <NSURLSessionDelegate, AMSURLProtocolDelegate>
{
    _Bool _attributeToAppStore;	// 8 = 0x8
    _Bool _revoked;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSString *_accountMediaType;	// 24 = 0x18
    id <FetchReceiptTaskDelegate> _delegate;	// 32 = 0x20
    ApplicationProxy *_app;	// 40 = 0x28
    NSURL *_customReceiptURL;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
    NSString *_proxyBundeID;	// 64 = 0x40
    NSString *_proxyBundleVersion;	// 72 = 0x48
    NSString *_proxyDeviceIdentifierForVendor;	// 80 = 0x50
    unsigned long long _proxyStoreExternalVersionID;	// 88 = 0x58
    unsigned long long _proxyStoreItemID;	// 96 = 0x60
    unsigned long long _receiptFlags;	// 104 = 0x68
    ASFReceipt *_receipt;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000f3bcc
@property(readonly, nonatomic) _Bool revoked; // @synthesize revoked=_revoked;
@property(readonly, nonatomic) ASFReceipt *receipt; // @synthesize receipt=_receipt;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_receiptFlags;
@property(nonatomic) unsigned long long proxyStoreItemID; // @synthesize proxyStoreItemID=_proxyStoreItemID;
@property(nonatomic) unsigned long long proxyStoreExternalVersionID; // @synthesize proxyStoreExternalVersionID=_proxyStoreExternalVersionID;
@property(copy, nonatomic) NSString *proxyDeviceIdentifierForVendor; // @synthesize proxyDeviceIdentifierForVendor=_proxyDeviceIdentifierForVendor;
@property(copy, nonatomic) NSString *proxyBundleVersion; // @synthesize proxyBundleVersion=_proxyBundleVersion;
@property(copy, nonatomic) NSString *proxyBundeID; // @synthesize proxyBundeID=_proxyBundeID;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSURL *customReceiptURL; // @synthesize customReceiptURL=_customReceiptURL;
@property(nonatomic) _Bool attributeToAppStore; // @synthesize attributeToAppStore=_attributeToAppStore;
@property(readonly, nonatomic) ApplicationProxy *app; // @synthesize app=_app;
@property(nonatomic) __weak id <FetchReceiptTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *accountMediaType; // @synthesize accountMediaType=_accountMediaType;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f37b8
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f3554
- (_Bool)_useVPPBagURL;	// IMP=0x00000001000f3538
- (id)_requestBodyForApplication:(id)arg1;	// IMP=0x00000001000f29e4
- (id)_URLRequestWithBag:(id)arg1 clientInfo:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000f23c8
- (id)_requestReceiptDataForApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f1db4
- (void)_finishWithReceiptData:(id)arg1 error:(id)arg2;	// IMP=0x00000001000f1bd4
- (id)_accountWithClientInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f144c
- (void)main;	// IMP=0x00000001000f0ee8
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x00000001000f0e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

