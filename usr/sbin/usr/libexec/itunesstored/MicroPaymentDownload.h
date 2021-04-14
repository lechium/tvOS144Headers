//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MicroPayment, NSData, NSNumber, NSString;

@interface MicroPaymentDownload : NSManagedObject
{
}

+ (id)propertiesForDownloadEntities;	// IMP=0x000000010019e2c8
+ (id)downloadEntityFromContext:(id)arg1;	// IMP=0x000000010019e280
- (void)awakeFromInsert;	// IMP=0x000000010019e7f4
- (void)setValuesWithAssetDictionary:(id)arg1;	// IMP=0x000000010019e4b0
- (id)copySKDownload;	// IMP=0x000000010019e344

// Remaining properties
@property(retain, nonatomic) NSNumber *contentLength; // @dynamic contentLength;
@property(retain, nonatomic) NSNumber *downloadID; // @dynamic downloadID;
@property(retain, nonatomic) NSString *downloadKey; // @dynamic downloadKey;
@property(retain, nonatomic) NSData *error; // @dynamic error;
@property(retain, nonatomic) NSData *hashArrayData; // @dynamic hashArrayData;
@property(retain, nonatomic) NSNumber *hashChunkSize; // @dynamic hashChunkSize;
@property(retain, nonatomic) NSString *localURL; // @dynamic localURL;
@property(retain, nonatomic) MicroPayment *payment; // @dynamic payment;
@property(retain, nonatomic) NSString *remoteURL; // @dynamic remoteURL;
@property(retain, nonatomic) NSData *sinfs; // @dynamic sinfs;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

