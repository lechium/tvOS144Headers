//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol CSADCompanionServiceProvider <NSObject>
- (void)sendMessageWithPayload:(NSDictionary *)arg1 toPeer:(NSString *)arg2 withReply:(void (^)(NSDictionary *, NSError *))arg3;
@end

