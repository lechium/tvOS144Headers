//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, SATVInternationalUtility, SATVTableViewController;

@interface SATVLanguageViewController : TVSKViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSIndexPath *_selectedIndexPath;	// 16 = 0x10
    NSIndexPath *_focusedIndexPath;	// 24 = 0x18
    SATVInternationalUtility *_internationalUtility;	// 32 = 0x20
    SATVTableViewController *_tableViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003e3ac
@property(retain, nonatomic) SATVTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) SATVInternationalUtility *internationalUtility; // @synthesize internationalUtility=_internationalUtility;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_updateLabelValue;	// IMP=0x000000010003e16c
- (void)_buildTable;	// IMP=0x000000010003dee0
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000010003de18
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003dd30
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010003dc80
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003dabc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003da48
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003da40
- (void)_selectLanguage:(id)arg1;	// IMP=0x000000010003d768
- (id)preferredFocusEnvironments;	// IMP=0x000000010003d6e0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010003d4f4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003d48c
- (void)viewDidLoad;	// IMP=0x000000010003d28c
- (void)autoAdvance;	// IMP=0x000000010003d1f8
- (id)init;	// IMP=0x000000010003d17c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

