//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSDServicesUpdated : NSObject
{
    NSArray *_updatedData;	// 8 = 0x8
    NSArray *_cachedData;	// 16 = 0x10
}

+ (id)servicesUpdated:(id)arg1 cachedData:(id)arg2;	// IMP=0x000000010000a0c0
- (void).cxx_destruct;	// IMP=0x000000010000bb6c
@property(retain, nonatomic) NSArray *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) NSArray *updatedData; // @synthesize updatedData=_updatedData;
- (void)_handleDefaultServiceChanged:(id)arg1;	// IMP=0x000000010000b4a8
- (void)_handleServiceRemoved:(id)arg1 cachedDataIDS:(id)arg2;	// IMP=0x000000010000b040
- (void)_handleServiceAdded:(id)arg1 cachedDataIDS:(id)arg2;	// IMP=0x000000010000abbc
- (void)processChangesInServices;	// IMP=0x000000010000a134
- (id)initWithUpdatedData:(id)arg1 cachedData:(id)arg2;	// IMP=0x000000010000a01c

@end

