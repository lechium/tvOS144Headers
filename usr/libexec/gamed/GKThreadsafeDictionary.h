//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)dictionaryCopy;	// IMP=0x00000001000c6824
- (id)allKeys;	// IMP=0x00000001000c671c
- (void)writeToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c66b0
- (void)readFromDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c6644
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000001000c6638
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000001000c662c
- (void)removeAllObjects;	// IMP=0x00000001000c65c0
- (void)removeObjectsForKeys:(id)arg1;	// IMP=0x00000001000c6554
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000001000c64e8
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000c6470
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c61c8
- (id)objectForKey:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c6064
- (id)objectForKey:(id)arg1;	// IMP=0x00000001000c5f5c
- (id)allObjects;	// IMP=0x00000001000c5e3c
- (id)description;	// IMP=0x00000001000c5dd0
- (void)dealloc;	// IMP=0x00000001000c5d80
- (id)initWithName:(id)arg1;	// IMP=0x00000001000c5d04

@end

