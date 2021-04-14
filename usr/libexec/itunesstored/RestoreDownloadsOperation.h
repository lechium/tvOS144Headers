//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "RestoreDownloadItemsOperationDelegate-Protocol.h"
#import "RestorePodcastItemsOperationDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString;

@interface RestoreDownloadsOperation : ISOperation <RestoreDownloadItemsOperationDelegate, RestorePodcastItemsOperationDelegate>
{
    NSMutableDictionary *_accountIDsByAppleID;	// 96 = 0x60
    long long _cancelRetryAlertState;	// 104 = 0x68
    NSOrderedSet *_downloadIDs;	// 112 = 0x70
    NSMutableArray *_errors;	// 120 = 0x78
    _Bool _hadAutoRetrySoftFailure;	// 128 = 0x80
    _Bool _hadCancelFailure;	// 129 = 0x81
    NSString *_restoreReason;	// 136 = 0x88
}

+ (_Bool)shouldSuppressTermsAndConditionsDialogs;	// IMP=0x00000001000e1d88
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;	// IMP=0x00000001000e1d34
+ (void)resetShouldSuppressTermsAndConditionsDialogs;	// IMP=0x00000001000e1cf8
- (_Bool)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4;	// IMP=0x00000001000e8b0c
- (id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(long long)arg3 error:(id)arg4;	// IMP=0x00000001000e8898
- (_Bool)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1;	// IMP=0x00000001000e87b0
- (_Bool)_shouldAuthenticateForCancelRetry;	// IMP=0x00000001000e852c
- (void)_scheduleCancelRetry;	// IMP=0x00000001000e8304
- (void)_scheduleAutomaticRetry;	// IMP=0x00000001000e8060
- (_Bool)_preflightAccountWithID:(id)arg1 isFamily:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000e79e8
- (id)_newRestoreItemsWithDownloadIDs:(id)arg1;	// IMP=0x00000001000e6d3c
- (id)_newDownloadWithStoreDownload:(id)arg1;	// IMP=0x00000001000e6c30
- (_Bool)_isErrorSoftFail:(id)arg1;	// IMP=0x00000001000e6af8
- (_Bool)_isErrorCancelFailure:(id)arg1;	// IMP=0x00000001000e6a9c
- (void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00000001000e66f8
- (void)_establishPrimaryAccount;	// IMP=0x00000001000e6504
- (long long)_downloadRestoreStateForError:(id)arg1;	// IMP=0x00000001000e6490
- (id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2;	// IMP=0x00000001000e6388
- (void)_applyResponses:(id)arg1 withTransaction:(id)arg2;	// IMP=0x00000001000e5624
- (id)_accountIDForAccountName:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000e4f50
- (void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001000e4740
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001000e466c
- (void)run;	// IMP=0x00000001000e2410
- (_Bool)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id *)arg4;	// IMP=0x00000001000e1e58
@property(readonly) NSString *restoreReason;
@property(readonly) NSArray *errors;
@property(readonly) NSOrderedSet *downloadIdentifiers;
- (void)dealloc;	// IMP=0x00000001000e1c78
- (id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2;	// IMP=0x00000001000e1be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
