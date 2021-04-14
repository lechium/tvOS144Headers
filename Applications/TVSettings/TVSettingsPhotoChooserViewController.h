//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TVSettingsPhotoCollectionGroupViewControllerDelegate-Protocol.h"

@class NSString;
@protocol TVSettingsPhotoChooserViewControllerSelectionDataSource, TVSettingsPhotoChooserViewControllerSelectionDelegate;

@interface TVSettingsPhotoChooserViewController : TSKViewController <TVSettingsPhotoCollectionGroupViewControllerDelegate>
{
    id <TVSettingsPhotoChooserViewControllerSelectionDataSource> _dataSource;	// 8 = 0x8
    id <TVSettingsPhotoChooserViewControllerSelectionDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001b808
@property(nonatomic) __weak id <TVSettingsPhotoChooserViewControllerSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVSettingsPhotoChooserViewControllerSelectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_launchAppForSettingItem:(id)arg1;	// IMP=0x000000010001b620
- (void)_didSelectSettingItem:(id)arg1;	// IMP=0x000000010001b574
- (id)_photoCollectionGroups;	// IMP=0x000000010001b4f4
- (id)_localizedTitleForPhotoCollectionGroup:(id)arg1;	// IMP=0x000000010001b4e4
- (void)controller:(id)arg1 didSelectAsset:(id)arg2 inCollection:(id)arg3;	// IMP=0x000000010001b3f8
- (id)loadSettingGroups;	// IMP=0x000000010001af98
- (id)title;	// IMP=0x000000010001af28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

