//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASTSessionDelegate-Protocol.h"

@class ASTSession, NSData, NSURL;

@protocol ASTSessionSigningDelegate <ASTSessionDelegate>
- (void)session:(ASTSession *)arg1 generateAuthInfoWithNonce:(NSData *)arg2;

@optional
- (void)session:(ASTSession *)arg1 signFile:(NSURL *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)session:(ASTSession *)arg1 signPayload:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
@end
