//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVPhotoAsset, TVPhotoCollection, TVPhotoCollectionGroup, TVSettingsPhotoChooserViewController;

@protocol TVSettingsPhotoChooserViewControllerSelectionDelegate <NSObject>

@optional
- (void)controller:(TVSettingsPhotoChooserViewController *)arg1 didSelectAsset:(TVPhotoAsset *)arg2 inCollection:(TVPhotoCollection *)arg3 collectionGroup:(TVPhotoCollectionGroup *)arg4;
- (void)controller:(TVSettingsPhotoChooserViewController *)arg1 didSelectCollectionGroup:(TVPhotoCollectionGroup *)arg2;
@end
