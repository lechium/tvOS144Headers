//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol SecEscrowRequestable;

@protocol SecEscrowRequestable <NSObject>
+ (id <SecEscrowRequestable>)request:(id *)arg1;
- (_Bool)pendingEscrowUpload:(id *)arg1;
- (NSDictionary *)fetchStatuses:(id *)arg1;
- (_Bool)triggerEscrowUpdate:(NSString *)arg1 error:(id *)arg2;
@end
