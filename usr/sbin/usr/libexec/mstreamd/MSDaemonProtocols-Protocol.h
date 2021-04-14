//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MSDaemonProtocols <NSObject>
- (void)forgetEverythingForPersonID:(NSString *)arg1;
- (void)unpauseForUUID:(NSString *)arg1;
- (void)pauseForUUID:(NSString *)arg1;
- (void)abortAllActivityForPersonID:(NSString *)arg1;
- (void)resetServerStateForPersonID:(NSString *)arg1;
- (void)refreshServerSideConfigurationForPersonID:(NSString *)arg1;
- (void)serverSideConfigurationForPersonID:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(NSString *)arg1;
- (void)retryOutstandingActivities;
- (void)pollForSubscriptionUpdatesForPersonID:(NSString *)arg1;
- (void)deleteAssetCollections:(NSArray *)arg1 personID:(NSString *)arg2;
- (void)dequeueAssetCollectionWithGUIDs:(NSArray *)arg1 personID:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)enqueueAssetCollections:(NSArray *)arg1 personID:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
@end

