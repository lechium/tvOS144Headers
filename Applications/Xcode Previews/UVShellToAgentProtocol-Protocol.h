//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BKSAnimationFenceHandle, UVBSMessage;

@protocol UVShellToAgentProtocol
- (oneway void)sendMessage:(UVBSMessage *)arg1 fence:(BKSAnimationFenceHandle *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)sendMessage:(UVBSMessage *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end
