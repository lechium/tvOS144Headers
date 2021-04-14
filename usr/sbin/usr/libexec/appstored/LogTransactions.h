//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface LogTransactions : PBCodable <NSCopying>
{
    NSMutableArray *_transactionIDs;	// 8 = 0x8
}

+ (Class)transactionIDType;	// IMP=0x00000001001e2c00
- (void).cxx_destruct;	// IMP=0x00000001001e3384
@property(retain, nonatomic) NSMutableArray *transactionIDs; // @synthesize transactionIDs=_transactionIDs;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001e3238
- (unsigned long long)hash;	// IMP=0x00000001001e3220
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001e3180
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001e3008
- (void)writeTo:(id)arg1;	// IMP=0x00000001001e2edc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001e2ed4
- (id)dictionaryRepresentation;	// IMP=0x00000001001e2cc0
- (id)description;	// IMP=0x00000001001e2c0c
- (id)transactionIDAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001e2be8
- (unsigned long long)transactionIDsCount;	// IMP=0x00000001001e2bd0
- (void)addTransactionID:(id)arg1;	// IMP=0x00000001001e2b5c
- (void)clearTransactionIDs;	// IMP=0x00000001001e2b44
- (id)formattedText;	// IMP=0x0000000100289b64

@end

