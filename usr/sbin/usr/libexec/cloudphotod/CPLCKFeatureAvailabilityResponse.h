//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "CKCodeOperationMessageMutation-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>
{
    NSMutableArray *_features;	// 8 = 0x8
}

+ (Class)featuresType;	// IMP=0x000000010008ad44
- (void).cxx_destruct;	// IMP=0x000000010008b760
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010008b614
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008b55c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008b3e4
- (void)copyTo:(id)arg1;	// IMP=0x000000010008b310
- (void)writeTo:(id)arg1;	// IMP=0x000000010008b1e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010008b1dc
- (id)dictionaryRepresentation;	// IMP=0x000000010008ae04
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x000000010008ad2c
- (unsigned long long)featuresCount;	// IMP=0x000000010008ad14
- (void)addFeatures:(id)arg1;	// IMP=0x000000010008aca0
- (void)clearFeatures;	// IMP=0x000000010008ac88
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x000000010008da8c
- (id)extractRecordTransports;	// IMP=0x000000010008da80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

