//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKActivity, GKDispatchGroup, GKFairPlaySAPSession, NSDate, NSDictionary, NSError, NSSet, NSURL;
@protocol OS_dispatch_queue;

@interface GKStoreBag : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    GKDispatchGroup *_fetchGroup;	// 16 = 0x10
    int _playerIDHashMod;	// 24 = 0x18
    int _playerIDHashAdd;	// 28 = 0x1c
    NSURL *_url;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    GKFairPlaySAPSession *_SAPSession;	// 48 = 0x30
    NSSet *_APNSRequired;	// 56 = 0x38
    NSSet *_signatureRequired;	// 64 = 0x40
    NSSet *_responseSignatureRequired;	// 72 = 0x48
    NSDictionary *_internalBag;	// 80 = 0x50
    NSDate *_expiration;	// 88 = 0x58
    double _mescalSetupStartTimeStamp;	// 96 = 0x60
    GKActivity *_activity;	// 104 = 0x68
}

+ (void)addAuthHeaders:(id)arg1;	// IMP=0x00000001000aa128
+ (id)appleIdSession;	// IMP=0x00000001000aa0b0
+ (id)storeBagURLForEnvironment:(long long)arg1;	// IMP=0x00000001000a6274
+ (id)storeBagForURL:(id)arg1;	// IMP=0x00000001000a4814
+ (id)storeBagForEnvironment:(long long)arg1;	// IMP=0x00000001000a47cc
@property(retain, nonatomic) GKActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) double mescalSetupStartTimeStamp; // @synthesize mescalSetupStartTimeStamp=_mescalSetupStartTimeStamp;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSDictionary *internalBag; // @synthesize internalBag=_internalBag;
@property(retain) NSSet *responseSignatureRequired; // @synthesize responseSignatureRequired=_responseSignatureRequired;
@property(retain) NSSet *signatureRequired; // @synthesize signatureRequired=_signatureRequired;
@property(retain) NSSet *APNSRequired; // @synthesize APNSRequired=_APNSRequired;
@property(retain) GKFairPlaySAPSession *SAPSession; // @synthesize SAPSession=_SAPSession;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)readDataForURL:(id)arg1 postData:(id)arg2 client:(id)arg3 credential:(id)arg4 includeUDID:(_Bool)arg5 includeAPNS:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001000ad104
- (void)readDataForBagKey:(id)arg1 method:(id)arg2 postData:(id)arg3 client:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000acfa4
- (void)writeDataForBagKey:(id)arg1 postData:(id)arg2 client:(id)arg3 credential:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000acd74
- (void)_loadDataForBagKey:(id)arg1 method:(id)arg2 postData:(id)arg3 client:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000ab91c
- (id)_networkSynchonizationQueue;	// IMP=0x00000001000ab8b0
- (_Bool)isLoadValidForBagKey:(id)arg1 date:(id)arg2;	// IMP=0x00000001000ab84c
- (void)invalidateBagKeys:(id)arg1;	// IMP=0x00000001000ab698
- (id)_bagKeyValidationDict;	// IMP=0x00000001000ab620
- (void)_sendOneAsyncTryWithRequest:(id)arg1 responseMustBeSigned:(_Bool)arg2 session:(id)arg3 retryCount:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000aa374
- (void)_sendAsynchronousRequest:(id)arg1 responseMustBeSigned:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000aa1c4
- (id)requestWithURL:(id)arg1 method:(id)arg2 playerID:(id)arg3 authToken:(id)arg4 pushToken:(id)arg5 client:(id)arg6 postData:(id)arg7 includeUDID:(_Bool)arg8 includeAPNS:(_Bool)arg9 sapSession:(id)arg10;	// IMP=0x00000001000a9ce8
- (int)hashForPlayerID:(id)arg1;	// IMP=0x00000001000a9ca0
- (void)_updatePlayerIDHashParameters;	// IMP=0x00000001000a9bc4
- (void)updateURLPatternCache;	// IMP=0x00000001000a9498
- (void)_setupSAPSession:(id)arg1 group:(id)arg2 retries:(long long)arg3;	// IMP=0x00000001000a8424
- (void)_setupSAPSessionWithRetries:(id)arg1;	// IMP=0x00000001000a817c
- (struct __SecTrust *)_createTrustForCertificates:(id)arg1 host:(id)arg2;	// IMP=0x00000001000a7a3c
- (id)_storeBagForData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a71a4
- (_Bool)_checkData:(id)arg1 againstSignature:(id)arg2 withTrust:(struct __SecTrust *)arg3;	// IMP=0x00000001000a6e34
- (long long)_scoresThrottleThreshold;	// IMP=0x00000001000a6df0
- (long long)scoresThrottleThreshold;	// IMP=0x00000001000a6d10
- (long long)_achievementsThrottleThreshold;	// IMP=0x00000001000a6ccc
- (long long)achievementsThrottleThreshold;	// IMP=0x00000001000a6bec
- (long long)_gkSessionRateLimiting;	// IMP=0x00000001000a6ba8
- (long long)gkSessionRateLimiting;	// IMP=0x00000001000a6ac8
- (_Bool)_shouldUseHTTPPipelining;	// IMP=0x00000001000a6a48
- (_Bool)shouldUseHTTPPipelining;	// IMP=0x00000001000a6964
- (id)omnitureQueryParametersForContext:(id)arg1;	// IMP=0x00000001000a6920
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000001000a6814
- (void)getValuesForKeys:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a65d8
- (void)getURLForKey:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a6374
- (void)_setupResponseSignatureRequired:(id)arg1;	// IMP=0x00000001000a61e0
- (void)_setupSignatureRequired:(id)arg1;	// IMP=0x00000001000a614c
- (void)_setupAPNSRequired:(id)arg1;	// IMP=0x00000001000a5ff0
- (void)getBagWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a5d74
- (void)_fetchBagWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a57bc
- (void)_fetchFromServerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a5088
- (void)_fetchFromCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a4c68
- (_Bool)_isLastProtocolVersionUsedValid;	// IMP=0x00000001000a4bec
- (_Bool)_isFetching;	// IMP=0x00000001000a4bdc
- (_Bool)_isValidAndNotExpired;	// IMP=0x00000001000a4b94
- (_Bool)_isValid;	// IMP=0x00000001000a4b6c
- (_Bool)_isExpired;	// IMP=0x00000001000a4b44
- (void)dealloc;	// IMP=0x00000001000a4ab4
- (id)initWithURL:(id)arg1;	// IMP=0x00000001000a4a14
- (id)description;	// IMP=0x00000001000a474c
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a4740
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a4618

@end

