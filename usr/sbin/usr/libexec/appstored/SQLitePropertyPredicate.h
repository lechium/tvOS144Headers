//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SQLitePropertyPredicate : SQLitePredicate <NSCopying>
{
    NSString *_property;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002b5c90
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x00000001002b5bfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002b5ad4
- (unsigned long long)hash;	// IMP=0x00000001002b5a50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002b5a4c

@end
