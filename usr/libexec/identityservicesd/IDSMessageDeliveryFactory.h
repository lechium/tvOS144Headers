//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSMessageDeliveryFactory-Protocol.h"

@class NSString;

@interface IDSMessageDeliveryFactory : NSObject <IDSMessageDeliveryFactory>
{
}

+ (id)sharedFactory;	// IMP=0x000000010030e184
- (id)createAPNSMessageDelivery;	// IMP=0x000000010030e2c0
- (id)createHTTPMessageDelivery;	// IMP=0x000000010030e280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

