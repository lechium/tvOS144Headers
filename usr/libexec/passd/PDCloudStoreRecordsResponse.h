//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PKCloudRecordArray;

@interface PDCloudStoreRecordsResponse : NSObject
{
    PKCloudRecordArray *_cloudStoreRecords;	// 8 = 0x8
    NSDictionary *_deletedRecordsByDatabaseIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010019dae4
@property(copy, nonatomic) NSDictionary *deletedRecordsByDatabaseIdentifier; // @synthesize deletedRecordsByDatabaseIdentifier=_deletedRecordsByDatabaseIdentifier;
@property(retain, nonatomic) PKCloudRecordArray *cloudStoreRecords; // @synthesize cloudStoreRecords=_cloudStoreRecords;
- (id)deletedRecordsForAllDatabaseIdentifiers;	// IMP=0x000000010019d9b8

@end

