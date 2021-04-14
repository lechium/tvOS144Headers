//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDInstallAppOperation.h"

@interface DMDMDMv1InstallAppOperation : DMDInstallAppOperation
{
}

+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100050234
- (void)_resetRemovabilityWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100054440
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100054388
- (_Bool)_canManageBundleIdentifier:(id)arg1;	// IMP=0x0000000100054344
- (void)_updateManagementInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000540c4
- (void)_setUnusedRedemptionCode:(id)arg1;	// IMP=0x0000000100053f40
- (void)_setRedemptionCode:(id)arg1;	// IMP=0x0000000100053dbc
- (void)_setState:(unsigned long long)arg1;	// IMP=0x0000000100053c94
- (void)_showInstallationFailurePromptIfNeeded;	// IMP=0x0000000100053998
- (void)_showStorePromptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x00000001000536dc
- (void)_promptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x000000010005333c
- (void)_promptIfNeededWithMessageFormat:(id)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052ca4
- (void)_applyManagementPiecesForRequest:(id)arg1;	// IMP=0x0000000100052b20
- (void)_downloadStoreAppForRequest:(id)arg1 type:(long long)arg2;	// IMP=0x000000010005204c
- (void)_purchaseFreeAppForRequest:(id)arg1;	// IMP=0x000000010005203c
- (void)_redownloadUserAppForRequest:(id)arg1;	// IMP=0x000000010005202c
- (void)_redownloadDeviceAppForRequest:(id)arg1;	// IMP=0x000000010005201c
- (void)_attemptSINFSwapForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100051d24
- (void)_installStoreAppForRequest:(id)arg1;	// IMP=0x000000010005171c
- (void)_installSystemAppWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100051474
- (void)_installEnterpriseAppForRequest:(id)arg1;	// IMP=0x0000000100050a1c
- (void)_redeemAppWithRedemptionCode:(id)arg1;	// IMP=0x00000001000506a0
- (id)_storeAppFormat;	// IMP=0x00000001000505d0
- (void)installAppForRequest:(id)arg1;	// IMP=0x0000000100050348
- (void)endOperationWithError:(id)arg1;	// IMP=0x00000001000502dc
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x0000000100050270

@end
