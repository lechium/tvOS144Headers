//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SOSAccountConfiguration : PBCodable <NSCopying>
{
    NSMutableArray *_pendingBackupPeers;	// 8 = 0x8
    _Bool _ringUpdateFlag;	// 16 = 0x10
    struct {
        unsigned int ringUpdateFlag:1;
    } _has;	// 20 = 0x14
}

+ (Class)pendingBackupPeersType;	// IMP=0x000000010019e3e0
- (void).cxx_destruct;	// IMP=0x000000010019e3cc
@property(nonatomic) _Bool ringUpdateFlag; // @synthesize ringUpdateFlag=_ringUpdateFlag;
@property(retain, nonatomic) NSMutableArray *pendingBackupPeers; // @synthesize pendingBackupPeers=_pendingBackupPeers;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010019e230
- (unsigned long long)hash;	// IMP=0x000000010019e1c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010019e0e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010019df38
- (void)copyTo:(id)arg1;	// IMP=0x000000010019de38
- (void)writeTo:(id)arg1;	// IMP=0x000000010019dce4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010019da74
- (id)dictionaryRepresentation;	// IMP=0x000000010019d9a8
- (id)description;	// IMP=0x000000010019d8f4
@property(nonatomic) _Bool hasRingUpdateFlag;
- (id)pendingBackupPeersAtIndex:(unsigned long long)arg1;	// IMP=0x000000010019d888
- (unsigned long long)pendingBackupPeersCount;	// IMP=0x000000010019d870
- (void)addPendingBackupPeers:(id)arg1;	// IMP=0x000000010019d7fc
- (void)clearPendingBackupPeers;	// IMP=0x000000010019d7e4

@end

