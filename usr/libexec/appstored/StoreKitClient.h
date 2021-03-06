//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "ASDNotificationCenterDialogObserver-Protocol.h"
#import "FetchReceiptTaskDelegate-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURL, URLBag;

@interface StoreKitClient : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate, NSCopying, ASDNotificationCenterDialogObserver, FetchReceiptTaskDelegate>
{
    _Bool _clientOverrideEntitled;	// 8 = 0x8
    _Bool _ignorePaymentRestriction;	// 9 = 0x9
    _Bool _purchasesDisabledForAppClip;	// 10 = 0xa
    id _remoteObjectProxy;	// 16 = 0x10
    _Bool _isAppClip;	// 24 = 0x18
    int _processID;	// 28 = 0x1c
    long long _type;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSURL *_bundleURL;	// 48 = 0x30
    NSString *_bundleVersion;	// 56 = 0x38
    NSString *_clipBundleID;	// 64 = 0x40
    NSURL *_customReceiptURL;	// 72 = 0x48
    NSString *_deviceVendorIdentifier;	// 80 = 0x50
    NSString *_localizedName;	// 88 = 0x58
    NSString *_requestBundleID;	// 96 = 0x60
    long long _storeExternalVersionID;	// 104 = 0x68
    long long _storeItemID;	// 112 = 0x70
}

+ (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;	// IMP=0x000000010016ca2c
+ (void)initialize;	// IMP=0x000000010016c9dc
- (void).cxx_destruct;	// IMP=0x000000010016ef68
@property(readonly, nonatomic) _Bool purchasesDisabledForAppClip; // @synthesize purchasesDisabledForAppClip=_purchasesDisabledForAppClip;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly, nonatomic) long long storeExternalVersionID; // @synthesize storeExternalVersionID=_storeExternalVersionID;
@property(readonly, nonatomic) NSString *requestBundleID; // @synthesize requestBundleID=_requestBundleID;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) _Bool isAppClip; // @synthesize isAppClip=_isAppClip;
@property(readonly, nonatomic) NSString *deviceVendorIdentifier; // @synthesize deviceVendorIdentifier=_deviceVendorIdentifier;
@property(readonly, nonatomic) NSURL *customReceiptURL; // @synthesize customReceiptURL=_customReceiptURL;
@property(readonly, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
- (_Bool)_useSandbox;	// IMP=0x000000010016ed2c
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010016ec1c
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010016eb0c
- (void)handleEngagementRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010016ea38
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010016e7dc
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010016e520
- (id)URLSession;	// IMP=0x000000010016e3b4
- (id)URLRequestEncoder;	// IMP=0x000000010016e1f0
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)standardQueryWithAuthentication:(_Bool)arg1;	// IMP=0x000000010016dc9c
@property(readonly, nonatomic) NSString *octaneConfigurationDirectory;
- (id)copyWithOverrides:(id)arg1;	// IMP=0x000000010016d800
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016d664
@property(readonly, nonatomic) _Bool canMakePayments;
@property(readonly, nonatomic) URLBag *bag;
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x000000010016d280
- (id)_initWithBundleProxy:(id)arg1;	// IMP=0x000000010016cf94
- (id)initWithBundleURL:(id)arg1;	// IMP=0x000000010016ce64
- (id)initWithProcessIdentifier:(int)arg1 remoteObjectProxy:(id)arg2 clientOverrideEntitled:(_Bool)arg3;	// IMP=0x000000010016cbec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

