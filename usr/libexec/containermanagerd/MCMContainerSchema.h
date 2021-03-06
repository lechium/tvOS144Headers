//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMContainerSchemaContext, MCMMetadata, NSNumber;

@interface MCMContainerSchema : NSObject
{
    MCMMetadata *_metadata;	// 8 = 0x8
    MCMContainerSchemaContext *_context;	// 16 = 0x10
    NSNumber *_latestSchemaVersion;	// 24 = 0x18
}

+ (id)containerSchemaWithMetadata:(id)arg1 dataProtectionClass:(int)arg2 libraryRepair:(id)arg3;	// IMP=0x0000000100011730
+ (_Bool)schemaIsUpToDateForMetadata:(id)arg1 latestSchemaVersion:(id *)arg2;	// IMP=0x0000000100011470
- (void).cxx_destruct;	// IMP=0x000000010001131c
@property(readonly, nonatomic) NSNumber *latestSchemaVersion; // @synthesize latestSchemaVersion=_latestSchemaVersion;
@property(readonly, nonatomic) MCMContainerSchemaContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) MCMMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)_sanityCheckPassesForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100011210
- (_Bool)_executeActions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100010e78
- (id)_actionsFromVersion:(id)arg1 toTargetVersion:(id)arg2 context:(id)arg3;	// IMP=0x0000000100010564
- (id)_interpolationReplacements;	// IMP=0x0000000100010334
- (id)_actionArgsAfterInterpolationOnActionArgs:(id)arg1 replacements:(id)arg2;	// IMP=0x000000010000ff04
- (_Bool)writeSchemaToTargetVersion:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000fe54
- (_Bool)writeSchemaFromVersion:(id)arg1 toTargetVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000f6e0
- (id)initWithMetadata:(id)arg1 dataProtectionClass:(int)arg2 libraryRepair:(id)arg3;	// IMP=0x000000010000f4cc

@end

