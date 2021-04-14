/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSLocationCache : CLSDBCache {

	NSPredicate* _entryPredicateWithContactsPostalAddressTemplate;
	NSPredicate* _entryPredicateWithAddressBookDictionaryTemplate;
	NSPredicate* _entryPredicateWithCoordinateTemplate;
	NSPredicate* _entryPredicateWithAddressTemplate;
	NSPredicate* _entryPredicateWithMUID;

}
+(BOOL)cachedRegion:(id)arg1 isMatchingOtherRegion:(id)arg2 ;
+(id)defaultCacheName;
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1 ;
-(BOOL)hasRegion:(id)arg1 ;
-(void)insertBatchesOfPlacemarks:(id)arg1 forLocations:(id)arg2 ;
-(id)initWithDiskCacheName:(id)arg1 ;
-(void)invalidateCacheForLocationCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 ;
-(id)dataModelName;
-(id)predicateForCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 ;
-(id)predicateForCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 queryAccuracy:(double)arg3 ;
-(id)nearestEntryForCoordinate:(CLLocationCoordinate2D)arg1 entries:(id)arg2 ;
-(BOOL)hasCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocation:(id)arg2 ;
-(void)setPlacemarks:(id)arg1 forCLLocation:(id)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CLLocationCoordinate2D)arg2 withHorizontalAccuracy:(double)arg3 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 queryAccuracy:(double)arg3 ;
-(void)setPlacemarks:(id)arg1 forLocationAddress:(id)arg2 ;
-(id)placemarksForLocationAddress:(id)arg1 ;
-(void)setPlacemarks:(id)arg1 forAddressDictionary:(id)arg2 ;
-(id)placemarksForAddressDictionary:(id)arg1 ;
-(void)setPlacemarks:(id)arg1 forPostalAddress:(id)arg2 ;
-(id)placemarksForPostalAddress:(id)arg1 ;
-(id)placemarksForLocation:(id)arg1 ;
-(id)placemarksForLocation:(id)arg1 withQueryAccuracy:(double)arg2 ;
-(id)_stringifyAddressDictionaryValues:(id)arg1 ;
-(id)_stringifyCircularRegionValue:(id)arg1 ;
-(id)_stringifyPostalAddress:(id)arg1 ;
-(void)setPlacemark:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(id)placemarkForMUID:(unsigned long long)arg1 ;
-(void)invalidateCacheForMUID:(unsigned long long)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)fetchPlacemarkForLocation:(id)arg1 withQueryAccuracy:(double)arg2 ;
-(void)_setPlacemarks:(id)arg1 forEntryWithPredicate:(id)arg2 entrySetupBlock:(/*^block*/id)arg3 ;
-(id)_litePlacemarksFromManagedPlacemarks:(id)arg1 ;
-(id)_insertManagedPlacemarksForLitePlacemarks:(id)arg1 inContext:(id)arg2 ;
-(id)_insertManagedPlacemarkForLitePlacemark:(id)arg1 inContext:(id)arg2 ;
-(id)_litePlacemarkFromManagedPlacemark:(id)arg1 ;
@end

