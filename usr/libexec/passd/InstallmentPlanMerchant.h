//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanMerchant : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x00000001001420ac
+ (id)_propertyValuesForInstallmentPlanMerchant:(id)arg1;	// IMP=0x0000000100141ea8
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x0000000100141e88
+ (id)merchantForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100141c50
+ (id)insertOrUpdateMerchant:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100141adc
+ (void)deleteMerchantForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100141a28
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100141908
+ (id)databaseTable;	// IMP=0x00000001001418fc
- (id)merchant;	// IMP=0x0000000100141d18
- (void)updateWithMerchant:(id)arg1;	// IMP=0x0000000100141bdc
- (id)initWithInstallmentPlanMerchant:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100141940

@end

