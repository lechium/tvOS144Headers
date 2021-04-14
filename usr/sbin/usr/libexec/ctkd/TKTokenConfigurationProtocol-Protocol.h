//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, TKTokenID;

@protocol TKTokenConfigurationProtocol <NSObject>
- (void)endTransactionWithReply:(void (^)(void))arg1;
- (void)updateKeychainItemsForTokenID:(TKTokenID *)arg1 items:(NSArray *)arg2 reply:(void (^)(void))arg3;
- (void)getKeychainItemsForTokenID:(TKTokenID *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)updateTokenID:(TKTokenID *)arg1 data:(NSData *)arg2 reply:(void (^)(void))arg3;
- (void)removeTokenID:(TKTokenID *)arg1 reply:(void (^)(void))arg2;
- (void)createTokenID:(TKTokenID *)arg1 persistent:(_Bool)arg2 reply:(void (^)(void))arg3;
- (void)beginTransactionWithReply:(void (^)(void))arg1;
- (void)readDataForTokenID:(TKTokenID *)arg1 reply:(void (^)(NSData *))arg2;
- (void)getTokenIDsForClassID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)getClassIDsWithReply:(void (^)(NSArray *))arg1;
@end
