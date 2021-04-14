//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, SFEventMessage, SFRequestMessage, SFResponseMessage, SFSession;

@protocol SDXPCSessionInterface
- (void)sessionSendResponse:(SFResponseMessage *)arg1;
- (void)sessionSendRequest:(SFRequestMessage *)arg1;
- (void)sessionSendFrameType:(unsigned char)arg1 data:(NSData *)arg2;
- (void)sessionSendEvent:(SFEventMessage *)arg1;
- (void)sessionActivate:(SFSession *)arg1 completion:(void (^)(NSError *))arg2;
@end

