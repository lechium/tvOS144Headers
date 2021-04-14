//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSError;

@protocol LAContextEventFeedbackProt
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)setCredential:(NSData *)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)resetProcessedEvent:(long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)retryProcessedEvent:(long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(NSError *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

