//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACCClientPortShim, NSObject, NSString;
@protocol OS_xpc_object;

@protocol ACCClientPortShimDelegate <NSObject>
- (ACCClientPortShim *)findClientPortForUUID:(NSString *)arg1;
- (void)sendData:(char *)arg1 length:(unsigned long long)arg2 forConnection:(NSObject<OS_xpc_object> *)arg3 portUID:(NSString *)arg4;
@end

