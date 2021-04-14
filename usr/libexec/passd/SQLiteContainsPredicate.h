//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SQLiteQuery;

@interface SQLiteContainsPredicate : SQLitePropertyPredicate <NSCopying>
{
    _Bool _negative;	// 16 = 0x10
    SQLiteQuery *_query;	// 24 = 0x18
    NSString *_queryProperty;	// 32 = 0x20
    id _values;	// 40 = 0x28
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x0000000100052570
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;	// IMP=0x000000010005246c
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x00000001000523a4
- (void).cxx_destruct;	// IMP=0x0000000100052c3c
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) SQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000100052a00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000527c0
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x0000000100052640
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005263c

@end

