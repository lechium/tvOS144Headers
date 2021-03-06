//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncIncrementalChangeMutating-Protocol.h"

@class ADDeviceSyncIncrementalChange, NSArray, NSDate, NSString;

@interface _ADDeviceSyncIncrementalChangeMutation : NSObject <ADDeviceSyncIncrementalChangeMutating>
{
    ADDeviceSyncIncrementalChange *_baseModel;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSArray *_insertedOrUpdatedItems;	// 32 = 0x20
    NSArray *_deletedItemUUIDs;	// 40 = 0x28
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasInsertedOrUpdatedItems:1;
        unsigned int hasDeletedItemUUIDs:1;
    } _mutationFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001e0f24
- (id)generate;	// IMP=0x00000001001e0db4
- (void)setDeletedItemUUIDs:(id)arg1;	// IMP=0x00000001001e0d80
- (void)setInsertedOrUpdatedItems:(id)arg1;	// IMP=0x00000001001e0d48
- (void)setDate:(id)arg1;	// IMP=0x00000001001e0d10
- (void)setGeneration:(unsigned long long)arg1;	// IMP=0x00000001001e0cfc
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001001e0c84
- (id)init;	// IMP=0x00000001001e0c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

