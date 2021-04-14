//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface EscrowService : NSObject
{
    NSObject<OS_dispatch_group> *_group;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_recoverQueue;	// 16 = 0x10
}

+ (_Bool)isFatalError:(id)arg1;	// IMP=0x000000010004a698
+ (id)createEscrowBlobWithCertificate:(id)arg1 escrowRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000010004a264
+ (id)doubleEnrollmentRecordFromPrimaryRecord:(id)arg1;	// IMP=0x0000000100049ee4
+ (id)certificateRequest:(id)arg1 duplicate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100046128
- (void).cxx_destruct;	// IMP=0x000000010004e8bc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recoverQueue; // @synthesize recoverQueue=_recoverQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void)verifyCertificateWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e41c
- (void)getCountrySMSCodesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e1f8
- (void)listSMSTargetsWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004dfd4
- (void)changeSMSTargetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004dd00
- (void)startSMSChallengeWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d9b8
- (void)updateRecordMetadataWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d698
- (void)_deleteRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d324
- (void)deleteRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004cfd0
- (void)updateRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004cea0
- (void)_performSilentRecoveryWithRequest:(id)arg1;	// IMP=0x000000010004cba8
- (void)recoverRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bbc8
- (void)_recoverRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b110
- (void)_srpInitHelper:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004ae20
- (void)_recoverWithVersion:(int)arg1 req:(id)arg2 duplicate:(_Bool)arg3 sesWrapper:(id)arg4 srpInitResponse:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010004a6c4
- (_Bool)processPrerecord:(id)arg1 outerRequest:(id)arg2 escrowRequest:(id)arg3 error:(id *)arg4;	// IMP=0x000000010004997c
- (void)storeRecordWithCertDataRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048e00
- (void)_storeRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048840
- (void)storeRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100047f8c
- (id)fetchCachedCertificateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100047774
- (_Bool)cacheStoredCertificate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100047580
- (id)keychainBaseQueryWithEnvironment:(id)arg1 andBaseURL:(id)arg2;	// IMP=0x0000000100047418
- (void)fetchCertificatesAndDuplicateRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046bfc
- (void)fetchCertificatesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046acc
- (void)_fetchCertificatesWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100046628
- (void)getAccountInfoWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045e6c
- (id)init;	// IMP=0x0000000100045dd0
- (id)_getBypassToken;	// IMP=0x0000000100045c40
- (void)_removeBypassToken;	// IMP=0x0000000100045b14
- (void)_saveBypassToken:(id)arg1;	// IMP=0x00000001000459b0

@end

