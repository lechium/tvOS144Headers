//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAccountInvitation : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAccountInvitation;	// IMP=0x000000010002edb8
+ (id)_peerPaymentAccountInvitationsWithQuery:(id)arg1;	// IMP=0x000000010002ebf4
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x000000010002ea10
+ (id)invitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010002e7b4
+ (void)deleteInvitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010002e714
+ (id)insertInvitations:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010002e548
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010002e510
+ (id)databaseTable;	// IMP=0x000000010002e504
- (id)peerPaymentAccountInvitation;	// IMP=0x000000010002ea84
- (id)initWithInvitation:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010002e86c

@end

