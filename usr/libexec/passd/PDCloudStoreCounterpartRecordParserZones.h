//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject
{
    NSMutableDictionary *_zoneNameToRecords;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010023e5cc
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010023e4bc
- (void)removeIdentifiers:(id)arg1;	// IMP=0x000000010023e39c
- (id)allRecords;	// IMP=0x000000010023e298
- (void)addRecord:(id)arg1;	// IMP=0x000000010023e18c
- (id)init;	// IMP=0x000000010023e128

@end
