//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAAPRequestDataProvider-Protocol.h"

@class NSNumber, NSString;

@interface PurchaseHistoryUpdateDAAPRequestEncoder : NSObject <DAAPRequestDataProvider>
{
    NSNumber *_revision;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010023ec88
- (unsigned long long)contentType;	// IMP=0x000000010023ec80
- (id)dataForRequestWithError:(id *)arg1;	// IMP=0x000000010023eb80
- (id)initWithCurrentRevision:(id)arg1;	// IMP=0x000000010023eb08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
