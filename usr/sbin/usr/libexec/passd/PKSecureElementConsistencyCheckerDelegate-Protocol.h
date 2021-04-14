//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSSet, PKPaymentPass;

@protocol PKSecureElementConsistencyCheckerDelegate <NSObject>
- (void)scheduleConsistencyCheck:(NSDate *)arg1 pluggedIn:(_Bool)arg2;
- (void)deviceStateWithCompletion:(void (^)(PKSecureElementConsistencyCheckDeviceState *))arg1;
- (NSArray *)paymentPasses;
- (void)didDownloadPaymentPass:(PKPaymentPass *)arg1;
- (_Bool)synchronizeWithTSM;
- (void)registerCredentialsWithIdentifiers:(NSSet *)arg1 completion:(void (^)(NSSet *, NSSet *))arg2;
- (void)revokeCredentialsWithIdentifiers:(NSSet *)arg1 completion:(void (^)(_Bool))arg2;
- (void)deleteCardsWithAIDs:(NSArray *)arg1 completion:(void (^)(_Bool))arg2;

@optional
- (_Bool)shouldStartConsistencyCheck;
@end

