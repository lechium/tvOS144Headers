//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MLDDatabaseIntegrityFault.h"

@class NSString;

@interface MLDIndexIntegrityFault : MLDDatabaseIntegrityFault
{
    NSString *_indexName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000169a0
@property(readonly, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (id)_createErrorWithDescription:(id)arg1;	// IMP=0x0000000100016884
- (_Bool)attemptRecoveryUsingHandle:(struct sqlite3 *)arg1 withError:(id *)arg2;	// IMP=0x00000001000164d0
- (id)initWithIndex:(id)arg1;	// IMP=0x0000000100016448

@end

