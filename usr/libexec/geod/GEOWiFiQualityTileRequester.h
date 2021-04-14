//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEODataSessionTaskDelegate-Protocol.h"

@class GEODataSessionTask, NSString;

@interface GEOWiFiQualityTileRequester : NSObject <GEODataSessionTaskDelegate>
{
    NSString *_tileKey;	// 8 = 0x8
    NSString *_eTag;	// 16 = 0x10
    id _auditToken;	// 24 = 0x18
    GEODataSessionTask *_task;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002aa58
- (void)cancel;	// IMP=0x000000010002aa24
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x000000010002a518
- (void)startWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a094
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 auditToken:(id)arg3;	// IMP=0x0000000100029fc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

