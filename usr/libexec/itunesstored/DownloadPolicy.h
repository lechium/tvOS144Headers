//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

#import "NSCopying-Protocol.h"

@class NSData, SSDownloadPolicy;

@interface DownloadPolicy : SSMemoryEntity <NSCopying>
{
    SSDownloadPolicy *_cachedPolicy;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x000000010018c8bc
+ (Class)databaseEntityClass;	// IMP=0x000000010018c8b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010018c8f8
@property(copy, nonatomic) NSData *policyData;
@property(readonly, nonatomic) SSDownloadPolicy *downloadPolicy;
- (void)dealloc;	// IMP=0x000000010018c628

@end

