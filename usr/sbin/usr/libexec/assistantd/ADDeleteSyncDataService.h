//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

#import "AFSyncHandler-Protocol.h"

@class NSString;

@interface ADDeleteSyncDataService : ADService <AFSyncHandler>
{
}

- (void)beginSyncForInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d1c98
- (id)init;	// IMP=0x00000001001d1c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

