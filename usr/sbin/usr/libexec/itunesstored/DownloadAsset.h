//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

#import "NSCopying-Protocol.h"

@interface DownloadAsset : SSMemoryEntity <NSCopying>
{
}

+ (Class)databaseEntityClass;	// IMP=0x0000000100151dd4
- (id)description;	// IMP=0x0000000100151e14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100151de0
- (id)initWithURLRequestProperties:(id)arg1;	// IMP=0x0000000100151d50
- (id)initWithExternalManifestDictionary:(id)arg1 validateVariants:(_Bool)arg2;	// IMP=0x00000001001516e0
- (id)initWithClientXPCAsset:(id)arg1;	// IMP=0x0000000100151584
- (id)copyJobAsset;	// IMP=0x00000001000f83e8

@end

