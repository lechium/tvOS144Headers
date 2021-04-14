//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@protocol SQLiteEntity <NSObject>
+ (void)applyPropertySetters:(NSDictionary *)arg1 toObject:(id)arg2 withProperties:(NSArray *)arg3 values:(id *)arg4;
+ (NSString *)associationPropertyForEntityClass:(Class)arg1;
+ (NSString *)databasePropertyToSetClientProperty:(NSString *)arg1;
+ (NSString *)databasePropertyToGetClientProperty:(NSString *)arg1;
+ (NSMutableDictionary *)copyDatabaseDictionaryToSetClientDictionary:(NSDictionary *)arg1;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;
+ (NSString *)databaseTable;
+ (id)databaseValueForProperty:(NSString *)arg1 clientValue:(id)arg2;
- (void)getValuesForProperties:(NSArray *)arg1 withApplier:(void (^)(NSArray *, id *))arg2;
- (_Bool)deleteFromDatabase;
- (id)valueForExternalProperty:(NSString *)arg1;
- (void)setExternalValuesWithDictionary:(NSDictionary *)arg1;
- (_Bool)setValuesWithDictionary:(NSDictionary *)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (NSArray *)valuesforProperties:(NSArray *)arg1;
- (id)valueForProperty:(NSString *)arg1;
@end
