//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying>
{
    _Bool _matchesNull;	// 16 = 0x10
}

+ (id)isNullPredicateWithProperty:(id)arg1;	// IMP=0x00000001002b6c6c
+ (id)isNotNullPredicateWithProperty:(id)arg1;	// IMP=0x00000001002b6bec
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000001002b6d90
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002b6cf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002b6cf0

@end
