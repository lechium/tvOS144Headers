//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface WorldRegionLocalizedContent : SQLiteEntity
{
}

+ (id)_predicateForLocaleIdentifier:(id)arg1;	// IMP=0x00000001001bf594
+ (id)_predicateForWorldRegionPID:(long long)arg1;	// IMP=0x00000001001bf520
+ (void)deleteLocalizedContentForPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001bf480
+ (id)localizedNameForWorldRegionPID:(long long)arg1 localeIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001bf2e0
+ (void)insertName:(id)arg1 localeIdentifier:(id)arg2 forWorldRegionPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00000001001bef98
+ (id)databaseTable;	// IMP=0x00000001001bef8c

@end

