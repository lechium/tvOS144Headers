//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCReply-Protocol.h"

@class MCMMetadata, NSString, NSURL, NSUUID;

@protocol MCMXPCReplyWithContainer <MCMXPCReply>
- (id)initWithUUID:(NSUUID *)arg1 existed:(_Bool)arg2 url:(NSURL *)arg3 containerPathIdentifier:(NSString *)arg4 identifier:(NSString *)arg5 containerClass:(unsigned long long)arg6 personaUniqueString:(NSString *)arg7 sandboxToken:(const char *)arg8;
- (id)initWithMetadata:(MCMMetadata *)arg1 sandboxToken:(const char *)arg2;
@end
