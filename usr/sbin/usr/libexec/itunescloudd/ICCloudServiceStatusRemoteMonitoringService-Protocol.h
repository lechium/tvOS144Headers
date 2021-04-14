//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICClientInfo, NSString, NSUUID;

@protocol ICCloudServiceStatusRemoteMonitoringService <NSObject>
- (void)requestUserTokenForDeveloperToken:(NSString *)arg1 clientInfo:(ICClientInfo *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)requestStorefrontIdentifierWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)requestCapabilitiesWithPrivacyPromptPolicy:(long long)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)endObservingCloudServiceStatusWithToken:(NSUUID *)arg1 completionHandler:(void (^)(void))arg2;
- (void)beginObservingCloudServiceStatusWithCompletionHandler:(void (^)(NSUUID *))arg1;
@end
