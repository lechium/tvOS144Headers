//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, SYDManagedStore;

@interface SYDManagedKeyValue : NSManagedObject
{
}

@property(copy, nonatomic) id value;

// Remaining properties
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) long long plistDataLength; // @dynamic plistDataLength;
@property(retain, nonatomic) NSData *plistDataValue; // @dynamic plistDataValue;
@property(retain, nonatomic) NSString *recordName; // @dynamic recordName;
@property(retain, nonatomic) NSData *serverSystemFieldsRecordData; // @dynamic serverSystemFieldsRecordData;
@property(retain, nonatomic) SYDManagedStore *store; // @dynamic store;
@property(retain, nonatomic) NSDate *valueModificationDate; // @dynamic valueModificationDate;

@end

