//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDMultiUserController, AMSDRefreshMultiUserOptions, NSArray;

@interface AMSDRefreshMultiUserTask : AMSTask
{
    AMSDMultiUserController *_controller;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
    AMSDRefreshMultiUserOptions *_options;	// 24 = 0x18
}

+ (id)_createGenerateMultiUserTokenTaskForAccount:(id)arg1 withController:(id)arg2 home:(id)arg3 multiUserTokenExists:(_Bool)arg4;	// IMP=0x000000010002a604
- (void).cxx_destruct;	// IMP=0x000000010002dd8c
@property(readonly, nonatomic) AMSDRefreshMultiUserOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *homes; // @synthesize homes=_homes;
@property(readonly, nonatomic) AMSDMultiUserController *controller; // @synthesize controller=_controller;
- (void)_transferHomeSettingsToAccountsWithErrors:(id)arg1;	// IMP=0x000000010002d2a4
- (void)_refreshCloudDatabasesWithErrors:(id)arg1;	// IMP=0x000000010002cf5c
- (void)_reconcileRecordZonesWithErrors:(id)arg1;	// IMP=0x000000010002c528
- (void)_reconcileiTunesAccountsWithErrors:(id)arg1;	// IMP=0x000000010002b468
- (void)_createMultiUserTokensWithErrors:(id)arg1;	// IMP=0x000000010002b2b4
- (_Bool)_createMultiUserTokenForHome:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002a6cc
- (id)performTask;	// IMP=0x000000010002a104
- (id)_fetchAllRecordZonesWithError:(id *)arg1;	// IMP=0x000000010002a0fc
- (id)initWithMultiUserController:(id)arg1 homes:(id)arg2 options:(id)arg3;	// IMP=0x000000010002a014

@end

