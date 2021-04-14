//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitOperationContext.h"

@class NSMapTable;

@interface CPLDownloadResourcesOperationContext : CPLCloudKitOperationContext
{
    NSMapTable *_resourceToProgressMap;	// 72 = 0x48
    unsigned long long _resourceType;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010008c31c
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)extendedStatusDescriptionStrings;	// IMP=0x000000010008bdfc
- (id)operationDescription;	// IMP=0x000000010008bd84
- (void)recordCompletionForResource:(id)arg1 withError:(id)arg2;	// IMP=0x000000010008bd18
- (void)updateProgress:(double)arg1 forResource:(id)arg2;	// IMP=0x000000010008bc78
- (void)addResource:(id)arg1;	// IMP=0x000000010008bbe4
- (id)initWithResourceType:(unsigned long long)arg1;	// IMP=0x000000010008bb94

@end

