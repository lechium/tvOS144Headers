//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPluginDriver-Protocol.h"

@class NSDictionary, NSUUID;

@protocol NEAppPushPluginDriver <NEPluginDriver>
- (void)sendTimerEvent;
- (void)sendOutgoingCallMessage:(NSDictionary *)arg1 andMessageID:(NSUUID *)arg2;
- (void)setProviderConfiguration:(NSDictionary *)arg1;
- (void)stopWithReason:(int)arg1;
- (void)startConnectionWithProviderConfig:(NSDictionary *)arg1;
@end

