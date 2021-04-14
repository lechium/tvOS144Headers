//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface NFC : SQLiteEntity
{
}

+ (id)_propertySettersForNFC;	// IMP=0x00000001001c6b10
+ (id)anyInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00000001001c6948
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001c6894
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00000001001c6858
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00000001001c67e4
+ (void)insertNFCPayload:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001c6754
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001c6504
+ (id)databaseTable;	// IMP=0x00000001001c64f8
- (id)nfcPayload;	// IMP=0x00000001001c69d8
- (id)initWithNFCPayload:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001c653c

@end
