//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICDRequest.h"

@interface ICSDKAddToLibraryRequest : ICDRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x00000001000f33a8
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 opaqueID:(id)arg2;	// IMP=0x00000001000f372c
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x00000001000f35a4
- (double)timeoutInterval;	// IMP=0x00000001000f3598
- (id)initWithAction:(id)arg1 databaseID:(unsigned int)arg2 databaseRevision:(unsigned int)arg3 opaqueID:(id)arg4 bundleID:(id)arg5;	// IMP=0x00000001000f3488

@end

