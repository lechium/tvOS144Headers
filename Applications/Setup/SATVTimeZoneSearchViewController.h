//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UIFocusGuide;
@protocol SATVTimeZoneSearchViewControllerDelegate;

@interface SATVTimeZoneSearchViewController : UITableViewController
{
    NSString *_searchString;	// 8 = 0x8
    id <SATVTimeZoneSearchViewControllerDelegate> _searchDelegate;	// 16 = 0x10
    NSArray *_cities;	// 24 = 0x18
    UIFocusGuide *_focusGuide;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002db50
@property(retain, nonatomic) UIFocusGuide *focusGuide; // @synthesize focusGuide=_focusGuide;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(nonatomic) __weak id <SATVTimeZoneSearchViewControllerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)_updateMatches;	// IMP=0x000000010002da08
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010002d91c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002d910
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002d63c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010002d5f0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010002d5e8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002d484
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002d3e0
- (void)viewDidLoad;	// IMP=0x000000010002d184

@end
