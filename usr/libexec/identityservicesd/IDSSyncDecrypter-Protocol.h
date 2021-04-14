//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol IDSEncryptionSyncQueue;

@protocol IDSSyncDecrypter <NSObject>
- (NSData *)decryptData:(NSData *)arg1 usingIdentifier:(NSString *)arg2 isRetry:(_Bool)arg3 onQueue:(id <IDSEncryptionSyncQueue>)arg4 error:(id *)arg5;
@end

