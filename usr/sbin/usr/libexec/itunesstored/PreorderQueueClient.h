//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCClient.h"

@class NSSet;

@interface PreorderQueueClient : XPCClient
{
    NSSet *_itemKinds;	// 48 = 0x30
}

- (_Bool)supportsItemKind:(id)arg1;	// IMP=0x0000000100113b60
@property(copy) NSSet *itemKinds;
- (void)dealloc;	// IMP=0x0000000100113930

@end
