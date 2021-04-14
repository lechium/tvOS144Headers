//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransactionAuthentication : SQLiteEntity
{
}

+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x000000010002e490
+ (id)createIfNotExistInDatabase:(id)arg1 withPaymentTransactionPID:(long long)arg2;	// IMP=0x000000010002df30
+ (id)anyInDatabase:(id)arg1 withPaymentTransactionPID:(long long)arg2;	// IMP=0x000000010002dea0
+ (id)databaseTable;	// IMP=0x000000010002de94
- (_Bool)reset;	// IMP=0x000000010002e238
- (_Bool)updateAuthenticationComplete:(_Bool)arg1;	// IMP=0x000000010002e1d0
- (_Bool)addDataCollectedAuthenticationMechanisms:(unsigned long long)arg1;	// IMP=0x000000010002e118
- (_Bool)addProcessedAuthenticationMechanisms:(unsigned long long)arg1;	// IMP=0x000000010002e060
- (_Bool)updateWithUserConfirmationData:(id)arg1;	// IMP=0x000000010002e04c
- (_Bool)updateWithTransactionSignatureData:(id)arg1;	// IMP=0x000000010002e038
- (_Bool)updateWithPaymentPINData:(id)arg1;	// IMP=0x000000010002e024

@end

