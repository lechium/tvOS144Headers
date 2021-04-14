//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppletState.h"

@interface TransitAppletState : AppletState
{
}

+ (id)_propertySetters;	// IMP=0x00000001001ca670
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x00000001001ca46c
+ (id)transitAppletStateInDatabase:(id)arg1 withPassUniqueIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 paymentApplicationIdentifier:(id)arg4;	// IMP=0x00000001001c9b40
+ (id)allStatesInDatabase:(id)arg1;	// IMP=0x00000001001c9960
+ (id)anyInDatabase:(id)arg1 withPaymentApplicationPID:(long long)arg2;	// IMP=0x00000001001c98d0
+ (void)deleteEntitiesForPaymentApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001c9760
+ (id)insertTransitAppletState:(id)arg1 forPaymentApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001c9658
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001c9594
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001c955c
+ (id)databaseTable;	// IMP=0x00000001001c9550
- (id)transitAppletState;	// IMP=0x00000001001cab9c
- (long long)paymentPassPid;	// IMP=0x00000001001ca574
- (void)setPaymentTransactionIdentifier:(id)arg1;	// IMP=0x00000001001ca4f4
- (id)paymentTransactionIdentifier;	// IMP=0x00000001001ca4e0
- (id)_valuesDictionaryForAppletState:(id)arg1;	// IMP=0x00000001001ca07c
- (void)updateWithAppletState:(id)arg1;	// IMP=0x00000001001c9f68
- (id)initWithTransitAppletState:(id)arg1 forPaymentApplicationPID:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001c9e78

@end
