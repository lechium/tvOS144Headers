//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "QueueAwareOperation.h"

@class NSNumber, NSURL;

@interface UpdateArtistStoreIDsByMapOperation : QueueAwareOperation
{
    NSNumber *_updateIntervalSeconds;	// 64 = 0x40
    NSURL *_allArtistImagesMapURL;	// 72 = 0x48
    NSURL *_artistNameLibraryMatchURL;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010004d53c
@property(retain, nonatomic) NSURL *artistNameLibraryMatchURL; // @synthesize artistNameLibraryMatchURL=_artistNameLibraryMatchURL;
@property(retain, nonatomic) NSURL *allArtistImagesMapURL; // @synthesize allArtistImagesMapURL=_allArtistImagesMapURL;
@property(retain, nonatomic) NSNumber *updateIntervalSeconds; // @synthesize updateIntervalSeconds=_updateIntervalSeconds;
- (void)_updateAllArtistStoreIDsUsingAllArtistImagesMap:(id)arg1;	// IMP=0x000000010004ce68
- (void)_updateSpecificArtistStoreIDsUsingAllArtistImagesMap:(id)arg1;	// IMP=0x000000010004c574
- (id)_fetchAndCacheLatestAllArtistImagesMap;	// IMP=0x000000010004bdf4
- (id)_latestAllArtistImagesMap;	// IMP=0x000000010004bb64
- (void)main;	// IMP=0x000000010004b83c

@end

