//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSArray;

@interface RestoreBatchTask : Task
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_restoreInstalls;	// 16 = 0x10
    _Bool _skipLatestVersionCheck;	// 24 = 0x18
    _Bool _userInitiated;	// 25 = 0x19
    NSArray *_hardFailures;	// 32 = 0x20
    NSArray *_softFailures;	// 40 = 0x28
    NSArray *_successfulItems;	// 48 = 0x30
}

+ (_Bool)isErrorBadTokenError:(id)arg1;	// IMP=0x0000000100169ba4
- (void).cxx_destruct;	// IMP=0x000000010016b958
@property(readonly) NSArray *successfulItems; // @synthesize successfulItems=_successfulItems;
@property(readonly) NSArray *softFailures; // @synthesize softFailures=_softFailures;
@property(readonly) NSArray *hardFailures; // @synthesize hardFailures=_hardFailures;
@property(getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property _Bool skipLatestVersionCheck; // @synthesize skipLatestVersionCheck=_skipLatestVersionCheck;
@property(copy) ACAccount *account; // @synthesize account=_account;
- (void)_processBatchFailureItems:(id)arg1 error:(id)arg2 context:(id)arg3;	// IMP=0x000000010016b524
- (id)_processContentRestoreResponse:(id)arg1 context:(id)arg2;	// IMP=0x000000010016aca0
- (void)main;	// IMP=0x0000000100169f28
- (_Bool)isErrorSoftFail:(id)arg1;	// IMP=0x0000000100169d10
- (id)initWithRestoreAppInstalls:(id)arg1;	// IMP=0x0000000100169b24

@end

