//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class AppInstall, AppInstallInstallResponse, AppInstallLogKey, AppPackage, IXAppInstallCoordinator;

@interface AppInstallInstallTask : Task
{
    IXAppInstallCoordinator *_coordinator;	// 8 = 0x8
    AppInstall *_install;	// 16 = 0x10
    AppInstallLogKey *_logKey;	// 24 = 0x18
    AppPackage *_package;	// 32 = 0x20
    AppInstallInstallResponse *_installResponse;	// 40 = 0x28
}

+ (id)operationForInstallID:(long long)arg1 packageID:(long long)arg2 inSession:(id)arg3 withCoordinator:(id)arg4;	// IMP=0x000000010025da20
- (void).cxx_destruct;	// IMP=0x000000010025f234
@property(readonly) AppInstallInstallResponse *installResponse; // @synthesize installResponse=_installResponse;
- (id)_startPackageKitInstall;	// IMP=0x000000010025f188
- (id)_buildInstallOptionsWithError:(id *)arg1;	// IMP=0x000000010025eccc
- (void)_endEventServiceInstallationEvent;	// IMP=0x000000010025ecc8
- (id)_applyInstallOptions;	// IMP=0x000000010025df7c
- (void)main;	// IMP=0x000000010025defc
- (id)_initWithInstall:(id)arg1 package:(id)arg2 coordinator:(id)arg3;	// IMP=0x000000010025dde0

@end

