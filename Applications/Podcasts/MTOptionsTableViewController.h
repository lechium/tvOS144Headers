//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MTOptionSetting;

@interface MTOptionsTableViewController : UITableViewController
{
    CDUnknownBlockType _optionSelectedBlock;	// 8 = 0x8
    MTOptionSetting *_option;	// 16 = 0x10
}

+ (id)footerFont;	// IMP=0x00000001000e6a84
+ (id)optionFont;	// IMP=0x00000001000e6a64
+ (double)rowHeight;	// IMP=0x00000001000e6a08
- (void).cxx_destruct;	// IMP=0x00000001000e7e38
@property(retain, nonatomic) MTOptionSetting *option; // @synthesize option=_option;
@property(copy, nonatomic) CDUnknownBlockType optionSelectedBlock; // @synthesize optionSelectedBlock=_optionSelectedBlock;
- (id)metricsName;	// IMP=0x00000001000e7d5c
- (unsigned long long)selectedIndex;	// IMP=0x00000001000e7c84
- (id)headerText;	// IMP=0x00000001000e7b24
- (id)footerText;	// IMP=0x00000001000e79c4
- (id)newFooterView;	// IMP=0x00000001000e775c
- (void)_updateTextColorForCell:(id)arg1 selected:(_Bool)arg2;	// IMP=0x00000001000e76b4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e745c
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000001000e7398
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000e738c
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000e720c
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000001000e7130
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e6ee0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000e6e4c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000e6e44
- (void)updateRowHeight;	// IMP=0x00000001000e6db0
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000e6d5c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000e6c54
- (void)dealloc;	// IMP=0x00000001000e6bdc
- (void)viewDidLoad;	// IMP=0x00000001000e6b8c
- (id)initWithOption:(id)arg1 largeTitleDisplayMode:(long long)arg2;	// IMP=0x00000001000e6ab8
- (id)initWithOption:(id)arg1;	// IMP=0x00000001000e6aa8

@end

