//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVFetchedTableWithSectionsViewController.h"

#import "MTTableViewDataSource-Protocol.h"

@class MTContentUnavailableView, MTTableView, NSMutableDictionary, NSString, UIImageView, UIView;

@interface MTTVListViewController : MTTVFetchedTableWithSectionsViewController <MTTableViewDataSource>
{
    NSMutableDictionary *_resultsChangedBlocks;	// 8 = 0x8
    UIImageView *_defaultFooterView;	// 16 = 0x10
    _Bool _hidesFooterWhenEmpty;	// 24 = 0x18
    _Bool _showMarkButtonInsteadOfRemoveButton;	// 25 = 0x19
    long long _state;	// 32 = 0x20
    UIView *_footerView;	// 40 = 0x28
    NSString *_emptyListMessage;	// 48 = 0x30
    MTContentUnavailableView *_emptyOverlay;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010011ab94
@property(retain, nonatomic) MTContentUnavailableView *emptyOverlay; // @synthesize emptyOverlay=_emptyOverlay;
@property(nonatomic) _Bool showMarkButtonInsteadOfRemoveButton; // @synthesize showMarkButtonInsteadOfRemoveButton=_showMarkButtonInsteadOfRemoveButton;
@property(nonatomic) _Bool hidesFooterWhenEmpty; // @synthesize hidesFooterWhenEmpty=_hidesFooterWhenEmpty;
@property(copy, nonatomic) NSString *emptyListMessage; // @synthesize emptyListMessage=_emptyListMessage;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010011ab04
- (void)selectedItemAtIndexPath:(id)arg1;	// IMP=0x000000010011aac8
- (void)transitionToState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010011a5f8
- (void)updateListStateAnimated:(_Bool)arg1;	// IMP=0x000000010011a50c
- (_Bool)hasItems;	// IMP=0x000000010011a1a8
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010011a154
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010011a0d0
- (void)refetchWithSortDescriptors:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010011a078
- (void)refetchWithPredicate:(id)arg1;	// IMP=0x000000010011a024
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100119da0
- (void)viewDidLoad;	// IMP=0x0000000100119c00
- (void)loadView;	// IMP=0x0000000100119b30
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100119ad8
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x0000000100119a34
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100119a24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MTTableView *tableView; // @dynamic tableView;

@end

