//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADDomainObjectCache : NSObject
{
    NSMutableDictionary *_cacheEntriesByAceKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000d21c8
- (void)reset;	// IMP=0x00000001000d21b8
- (id)oldIdForKey:(id)arg1;	// IMP=0x00000001000d2160
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000d210c
- (void)setDomainObject:(id)arg1 withOldId:(id)arg2 forKey:(id)arg3;	// IMP=0x00000001000d2004
- (id)domainObjectForKey:(id)arg1;	// IMP=0x00000001000d1fac
- (id)init;	// IMP=0x00000001000d1f48

@end

