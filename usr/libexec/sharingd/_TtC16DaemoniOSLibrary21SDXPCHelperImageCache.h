//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC16DaemoniOSLibrary21SDXPCHelperImageCache : NSObject
{
}

+ (long long)cacheCount;	// IMP=0x0000000100201378
+ (struct CGImage *)imageForKey:(id)arg1 contactIDs:(id)arg2;	// IMP=0x0000000100200ad0
+ (_Bool)cacheIsEmpty;	// IMP=0x0000000100200574
+ (void)setImage:(struct CGImage *)arg1 forKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x00000001002003f8
+ (void)evictWithContactIdentifier:(id)arg1;	// IMP=0x00000001001fff4c
+ (void)purgeAvatars;	// IMP=0x00000001001ff184
+ (void)clearCacheWithSync:(_Bool)arg1;	// IMP=0x00000001001feec8
- (id)init;	// IMP=0x0000000100201430

@end

