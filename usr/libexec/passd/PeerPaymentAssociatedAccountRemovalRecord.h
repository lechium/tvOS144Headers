//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAssociatedAccountRemovalRecord : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAssociatedAccountRemovalRecord;	// IMP=0x00000001000de39c
+ (id)_peerPaymentAssociatedAccountRemovalRecordWithQuery:(id)arg1;	// IMP=0x00000001000de1d8
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x00000001000ddff4
+ (id)associatedAccountRemovalRecordsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000ddd64
+ (void)deleteAssociatedAccountRemovalRecordsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000ddcc4
+ (id)insertAssociatedAccountRemovalRecords:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000ddaf8
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000ddac0
+ (id)databaseTable;	// IMP=0x00000001000ddab4
- (id)associatedAccountRemovalRecord;	// IMP=0x00000001000de068
- (id)initWithPreviousAccountUser:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000dde1c

@end

