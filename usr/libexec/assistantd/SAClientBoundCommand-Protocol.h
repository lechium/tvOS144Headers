//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SAAceCommand-Protocol.h"
#import "SAAceReferable-Protocol.h"

@class NSArray, NSString;

@protocol SAClientBoundCommand <SAAceCommand, SAAceReferable>
@property(copy, nonatomic) NSArray *callbacks;
@property(copy, nonatomic) NSString *appId;
- (_Bool)requiresResponse;
@end
