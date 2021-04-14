//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAIDSMessageReceiver-Protocol.h"

@class DAIDSDestination, NSString;

@interface DDWatchMessageReceiver : NSObject <DAIDSMessageReceiver>
{
    DAIDSDestination *_destination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000bc54
@property(retain, nonatomic) DAIDSDestination *destination; // @synthesize destination=_destination;
- (_Bool)isDeviceLocked;	// IMP=0x000000010000bb78
- (void)receiveMessage:(id)arg1 data:(id)arg2 fromDestination:(id)arg3 expectsResponse:(_Bool)arg4 response:(CDUnknownBlockType)arg5;	// IMP=0x000000010000b9ac
- (id)initWithDestination:(id)arg1;	// IMP=0x000000010000b934

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

