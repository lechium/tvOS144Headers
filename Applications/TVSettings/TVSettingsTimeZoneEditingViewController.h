//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TSKSettingItemEditingController-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "_TVSettingsTimeZoneTableViewControllerDelegate-Protocol.h"

@class NSString, TSKSettingItem, UISearchController, _TVSettingsTimeZoneTableViewController;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsTimeZoneEditingViewController : UIViewController <UISearchResultsUpdating, UISearchControllerDelegate, _TVSettingsTimeZoneTableViewControllerDelegate, TSKSettingItemEditingController>
{
    _Bool _searchControllerPresented;	// 8 = 0x8
    TSKSettingItem *_editingItem;	// 16 = 0x10
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 24 = 0x18
    _TVSettingsTimeZoneTableViewController *_tableViewController;	// 32 = 0x20
    UISearchController *_searchController;	// 40 = 0x28
    UIViewController *_containerViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000d66a0
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) _TVSettingsTimeZoneTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (id)_gradientMask;	// IMP=0x00000001000d62b8
- (void)timeZoneTableViewController:(id)arg1 didSelectCityWithIdentifier:(id)arg2;	// IMP=0x00000001000d6244
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000001000d61c4
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00000001000d615c
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000001000d6148
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000d60a8
- (void)viewDidLoad;	// IMP=0x00000001000d5cbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

