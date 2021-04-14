//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSUUID, SecCDKeychainManagedAccessControlEntity, SecCDKeychainManagedItemType;

__attribute__((visibility("hidden")))
@interface SecCDKeychainManagedItem : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000010018d2b8

// Remaining properties
@property(retain, nonatomic) NSSet *accessControlList; // @dynamic accessControlList;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) SecCDKeychainManagedItemType *itemType; // @dynamic itemType;
@property(retain, nonatomic) NSSet *lookupEntries; // @dynamic lookupEntries;
@property(retain, nonatomic) NSData *metadata; // @dynamic metadata;
@property(retain, nonatomic) SecCDKeychainManagedAccessControlEntity *owner; // @dynamic owner;
@property(copy, nonatomic) NSUUID *persistentID; // @dynamic persistentID;

@end

