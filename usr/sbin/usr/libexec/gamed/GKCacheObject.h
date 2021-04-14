//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x0000000100046000
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x0000000100045e94
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100045db4
+ (id)uniqueAttributeName;	// IMP=0x0000000100045cd4
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100045a08
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100045754
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x00000001000454dc
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100045264
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x0000000100045250
+ (id)fetchSortDescriptors;	// IMP=0x0000000100045248
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0000000100045240
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x0000000100045084
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x0000000100044c70
+ (id)entityName;	// IMP=0x0000000100044b98
- (void)invalidate;	// IMP=0x0000000100045cd0
- (_Bool)isValid;	// IMP=0x0000000100045cc8
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x0000000100044e58
- (id)internalRepresentation;	// IMP=0x0000000100044b90
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100044a80
- (_Bool)hasImages;	// IMP=0x0000000100046ff0
- (void)clearImages;	// IMP=0x0000000100046d48
- (void)deleteCachedImage:(id)arg1;	// IMP=0x0000000100046a1c
- (id)imageURLDictionary;	// IMP=0x0000000100046644
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x000000010004621c
- (id)imageCacheKeyPathsByKey;	// IMP=0x00000001000460c8

@end
