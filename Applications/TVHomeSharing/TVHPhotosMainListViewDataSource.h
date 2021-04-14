//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHDiffableDataSourceContentProvider-Protocol.h"

@class NSArray, NSDictionary, NSOrderedSet, NSString, TVHKMediaEntitiesFetchRequest;
@protocol TVHDiffableDataSourceContentProviderDelegate;

@interface TVHPhotosMainListViewDataSource : NSObject <TVHDiffableDataSourceContentProvider>
{
    id <TVHDiffableDataSourceContentProviderDelegate> _diffableDataSourceContentProviderDelegate;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSOrderedSet *_photoMainItems;	// 24 = 0x18
    TVHKMediaEntitiesFetchRequest *_fetchRequest;	// 32 = 0x20
    NSDictionary *_typeToPhotoMainItemDictionary;	// 40 = 0x28
}

+ (CDUnknownBlockType)_itemTypesSortComparator;	// IMP=0x00000001000b404c
+ (id)new;	// IMP=0x00000001000b3728
- (void).cxx_destruct;	// IMP=0x00000001000b4378
@property(copy, nonatomic) NSDictionary *typeToPhotoMainItemDictionary; // @synthesize typeToPhotoMainItemDictionary=_typeToPhotoMainItemDictionary;
@property(readonly, nonatomic) TVHKMediaEntitiesFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(copy, nonatomic) NSOrderedSet *photoMainItems; // @synthesize photoMainItems=_photoMainItems;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TVHDiffableDataSourceContentProviderDelegate> diffableDataSourceContentProviderDelegate; // @synthesize diffableDataSourceContentProviderDelegate=_diffableDataSourceContentProviderDelegate;
- (id)_photoMainItemTypes;	// IMP=0x00000001000b4224
@property(readonly, copy) NSString *description;
- (id)indexPathForIndexTitle:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000001000b3f94
@property(readonly, copy, nonatomic) NSArray *indexTitles;
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000001000b3f0c
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000001000b3eb0
- (id)sectionTitleAIndex:(unsigned long long)arg1;	// IMP=0x00000001000b3ea8
@property(readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;
- (void)updateWithPhotoPlaylistsFetchResponse:(id)arg1;	// IMP=0x00000001000b3a6c
- (id)photoMainItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b39a0
- (id)photoMainItemForIdentifier:(id)arg1;	// IMP=0x00000001000b38e8
- (id)initWithTitle:(id)arg1;	// IMP=0x00000001000b37ec
- (id)init;	// IMP=0x00000001000b3764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

