//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSUUID;

@protocol UABestAppSuggestionManagerProtocol <NSObject>
- (void)fetchAllNearbyAppSuggestions:(void (^)(_Bool))arg1;
- (void)doLaunchFollowUp:(NSUUID *)arg1 interactionType:(unsigned long long)arg2 cancelled:(_Bool)arg3;
- (void)doQueueFetchOfPayloadForBestAppSuggestion:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doUnregisterForBestAppChangeNotification;
- (void)doRegisterForBestAppChangeNotification;
- (void)doRemoveBestAppSuggestion:(NSUUID *)arg1 options:(NSDictionary *)arg2;
- (void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)doDetermineBestAppSuggestionWithCompletionHandler:(void (^)(NSArray *, NSDate *, double))arg1;
- (void)doStartBestAppSuggestion:(double)arg1;
- (void)doConnected;
@end

