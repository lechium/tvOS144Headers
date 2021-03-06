//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncCommandPullGenerationsRequestMutating-Protocol.h"

@class ADDeviceSyncCommandPullGenerationsRequest, NSArray, NSString;

@interface _ADDeviceSyncCommandPullGenerationsRequestMutation : NSObject <ADDeviceSyncCommandPullGenerationsRequestMutating>
{
    ADDeviceSyncCommandPullGenerationsRequest *_baseModel;	// 8 = 0x8
    NSArray *_dataTypes;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDataTypes:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010008ff84
- (id)generate;	// IMP=0x000000010008fed0
- (void)setDataTypes:(id)arg1;	// IMP=0x000000010008fe9c
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000010008fe24
- (id)init;	// IMP=0x000000010008fe14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

