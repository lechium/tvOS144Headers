//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol PKUsageNotificationClientExportedInterface
- (void)usedPaymentPassWithUniqueIdentifier:(NSString *)arg1 transactionIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(NSString *)arg2 info:(NSDictionary *)arg3;
@end

