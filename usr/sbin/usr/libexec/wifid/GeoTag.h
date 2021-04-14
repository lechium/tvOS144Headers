//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, RootNetwork;

@interface GeoTag : NSManagedObject
{
}

+ (id)getAllGeoTagsFromMOC:(id)arg1;	// IMP=0x000000010012217c
+ (id)copyFetchRequest;	// IMP=0x0000000100121e80
+ (id)fetchRequest;	// IMP=0x00000001001293b0
- (void)updateWithLocation:(id)arg1 bssid:(id)arg2;	// IMP=0x0000000100121fe4
- (double)getDistanceFromLocation:(id)arg1;	// IMP=0x0000000100121eac

// Remaining properties
@property(copy, nonatomic) NSString *bssid; // @dynamic bssid;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) RootNetwork *higherBandNetwork; // @dynamic higherBandNetwork;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) RootNetwork *lowerBandNetwork; // @dynamic lowerBandNetwork;
@property(nonatomic) int taggedCount; // @dynamic taggedCount;

@end

