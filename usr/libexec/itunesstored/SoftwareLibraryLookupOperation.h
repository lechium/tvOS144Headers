//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation
{
    NSArray *_bundleIDs;	// 96 = 0x60
    NSArray *_itemIDs;	// 104 = 0x68
    NSArray *_softwareLibraryItems;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001001a4d20
- (id)_newSoftwareLibraryItemWithContainerPath:(id)arg1;	// IMP=0x00000001001a4c70
- (id)_newSoftwareLibraryItemWithApplication:(id)arg1;	// IMP=0x00000001001a49a8
- (void)_loadFromItemIdentifiers;	// IMP=0x00000001001a4770
- (void)_loadFromBundleIdentifiers;	// IMP=0x00000001001a4150
- (void)run;	// IMP=0x00000001001a40f8
@property(readonly) NSArray *softwareLibraryItems;
@property(readonly) NSArray *itemIdentifiers;
@property(readonly) NSArray *bundleIdentifiers;
- (id)initWithItemIdentifiers:(id)arg1;	// IMP=0x00000001001a4000
- (id)initWithBundleIdentifiers:(id)arg1;	// IMP=0x00000001001a3f78

@end
