//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface MSDExpireCache : NSObject
{
    NSCache *_storage;	// 8 = 0x8
    double _expiration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100019090
@property(nonatomic) double expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSCache *storage; // @synthesize storage=_storage;
- (unsigned long long)count;	// IMP=0x000000010001901c
- (void)removeAllObjects;	// IMP=0x000000010001900c
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000100018ffc
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100018f6c
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100018e8c
- (id)initWithExpiration:(double)arg1;	// IMP=0x0000000100018e7c
- (id)initWithExpiration:(double)arg1 countLimit:(unsigned long long)arg2;	// IMP=0x0000000100018df0

@end

