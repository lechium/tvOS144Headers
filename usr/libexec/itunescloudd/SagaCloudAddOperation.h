//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@interface SagaCloudAddOperation : CloudLibraryOperation
{
}

- (void)main;	// IMP=0x00000001000c0a0c
- (_Bool)isPersistent;	// IMP=0x00000001000c0a04
- (unsigned int)currentDatabaseRevision;	// IMP=0x00000001000c09b4
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00000001000c09b0
- (void)processAddedItems:(id)arg1;	// IMP=0x00000001000c09ac
- (void)logCloudAddRequestDescription;	// IMP=0x00000001000c09a8
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00000001000c09a0

@end
