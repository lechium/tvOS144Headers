//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TVSettingsPhotoCollectionViewControllerSelectionDelegate-Protocol.h"

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;
@protocol TVSettingsPhotoCollectionGroupViewControllerDelegate;

@interface TVSettingsPhotoCollectionGroupViewController : TSKViewController <TVSettingsPhotoCollectionViewControllerSelectionDelegate>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    id <TVSettingsPhotoCollectionGroupViewControllerDelegate> _delegate;	// 16 = 0x10
    TVPhotoCollectionGroup *_photoCollectionGroup;	// 24 = 0x18
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000cfd64
@property(retain, nonatomic) TVSettingsPhotoCollectionPreviewViewController *photoPreviewController; // @synthesize photoPreviewController=_photoPreviewController;
@property(retain, nonatomic) TVPhotoCollectionGroup *photoCollectionGroup; // @synthesize photoCollectionGroup=_photoCollectionGroup;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x00000001000cfbd0
- (id)_localizedTitleForPhotoCollection:(id)arg1;	// IMP=0x00000001000cfa88
- (void)controller:(id)arg1 didSelectAsset:(id)arg2;	// IMP=0x00000001000cf994
- (_Bool)hasFullscreenPreview;	// IMP=0x00000001000cf98c
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000cf958
- (id)title;	// IMP=0x00000001000cf950
- (id)loadSettingGroups;	// IMP=0x00000001000cf604
- (void)viewDidLoad;	// IMP=0x00000001000cee8c
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x00000001000cedac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

