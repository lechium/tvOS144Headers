//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface TapToRadarPrompt : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x000000010018b280
+ (id)_predicateForReason:(id)arg1;	// IMP=0x000000010018b260
+ (id)insertOrUpdateWithReason:(id)arg1 lastPromptDate:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010018ac50
+ (id)tapToRadarPromptWithReason:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010018abac
+ (id)databaseTable;	// IMP=0x000000010018aba0
- (id)tapToRadarPrompt;	// IMP=0x000000010018b0f0
- (void)updateWithLastPromptDate:(id)arg1;	// IMP=0x000000010018af78
- (id)initWithReason:(id)arg1 lastPromptDate:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010018ae4c

@end

