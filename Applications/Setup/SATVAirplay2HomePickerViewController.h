//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "SATVAirplay2DataSourceObserver-Protocol.h"
#import "TVCSTableViewDiffableDataSourceProxy-Protocol.h"

@class NSString, TVCSTableViewDiffableDataSource;
@protocol SATVAirplay2DataSource, SATVAirplay2HomePickerViewControllerDelegate;

@interface SATVAirplay2HomePickerViewController : SATVTableViewController <SATVAirplay2DataSourceObserver, TVCSTableViewDiffableDataSourceProxy>
{
    id <SATVAirplay2HomePickerViewControllerDelegate> _delegate;	// 8 = 0x8
    id <SATVAirplay2DataSource> _dataSource;	// 16 = 0x10
    TVCSTableViewDiffableDataSource *_diffableDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100070fe8
@property(retain, nonatomic) TVCSTableViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) id <SATVAirplay2DataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SATVAirplay2HomePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTableViewAndAnimateChanges:(_Bool)arg1;	// IMP=0x0000000100070d28
- (id)_cellForRowAtIndexPath:(id)arg1 itemIdentifier:(id)arg2;	// IMP=0x0000000100070bf4
- (id)_homeAtIndexPath:(id)arg1;	// IMP=0x0000000100070b34
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100070ab8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100070a38
- (void)airplay2DataSourceDidUpdate:(id)arg1;	// IMP=0x00000001000709a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010007092c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000708a4
- (void)viewDidLoad;	// IMP=0x0000000100070688
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000100070604

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

