//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol PKPeerPaymentTargetDeviceDelegate
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
- (void)registerDeviceWithRegistrationURL:(NSURL *)arg1 pushToken:(NSString *)arg2 forceReregister:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

