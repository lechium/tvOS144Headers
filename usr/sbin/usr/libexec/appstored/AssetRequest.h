//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class AssetRequestProperties;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010010eb70
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010eae8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010eadc
- (id)copyRequestProperties;	// IMP=0x000000010010eac4
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x000000010010ea5c
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x000000010010e9f8
- (id)initWithURL:(id)arg1 properties:(id)arg2;	// IMP=0x000000010010e94c
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x000000010010e828

@end
