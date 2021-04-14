//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface _ADPBDeviceStringKeyValueDictionary : PBCodable <NSCopying>
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairsType;	// IMP=0x0000000100292a8c
+ (id)_ad_keyValueDictionaryWithDictionary:(id)arg1;	// IMP=0x000000010029885c
- (void).cxx_destruct;	// IMP=0x00000001002934a8
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010029335c
- (unsigned long long)hash;	// IMP=0x0000000100293344
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002932a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010029312c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100293058
- (void)writeTo:(id)arg1;	// IMP=0x0000000100292f2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100292f24
- (id)dictionaryRepresentation;	// IMP=0x0000000100292b4c
- (id)description;	// IMP=0x0000000100292a98
- (id)pairsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100292a74
- (unsigned long long)pairsCount;	// IMP=0x0000000100292a5c
- (void)addPairs:(id)arg1;	// IMP=0x00000001002929e8
- (void)clearPairs;	// IMP=0x00000001002929d0
- (id)_ad_dictionaryRepresentation;	// IMP=0x0000000100298a28

@end
