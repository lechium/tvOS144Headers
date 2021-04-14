//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKServiceController-Protocol.h"

@class NSString;
@protocol AKAuthHandler, AKURLRequestProvider;

@interface AKServiceControllerImpl : NSObject <AKServiceController>
{
    id <AKURLRequestProvider> _requestProvider;	// 8 = 0x8
    id <AKAuthHandler> _reauthHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004c780
- (void)_executeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c4c8
- (void)executeRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004c020
- (void)setAuthenticationDelegate:(id)arg1;	// IMP=0x000000010004c014
- (id)initWithRequestProvider:(id)arg1;	// IMP=0x000000010004bfb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

