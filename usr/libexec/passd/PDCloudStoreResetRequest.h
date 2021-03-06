//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet;

@interface PDCloudStoreResetRequest : NSObject
{
    NSMutableArray *_completionHandlers;	// 8 = 0x8
    NSSet *_includeCachedZonesForDatabaseIdentifiers;	// 16 = 0x10
    NSDictionary *_additionalZoneIDsByDatabaseIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010010ad70
@property(readonly, copy, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(copy, nonatomic) NSDictionary *additionalZoneIDsByDatabaseIdentifier; // @synthesize additionalZoneIDsByDatabaseIdentifier=_additionalZoneIDsByDatabaseIdentifier;
@property(copy, nonatomic) NSSet *includeCachedZonesForDatabaseIdentifiers; // @synthesize includeCachedZonesForDatabaseIdentifiers=_includeCachedZonesForDatabaseIdentifiers;
- (id)description;	// IMP=0x000000010010ac88
- (_Bool)_canCoalesceRequest:(id)arg1;	// IMP=0x000000010010abd4
- (void)callCompletionsWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000010010aa7c
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x000000010010a9e8
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010010a9a0
- (id)init;	// IMP=0x000000010010a990
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010010a8dc

@end

